//! Serial console TTY and debug formatted output engine — SEC-12 (SYS)
//!
//! Ground Truth:
//!   - src/main/cd/CD_QueueCmd.c (0x8009AE60): TTY putc with tab stop expansion & CR insertion
//!   - src/main/cd/CD_FlushCmd.c (0x8009AF5C): TTY flush buffer to BIOS stdout (fd 1)
//!   - src/main/cd/CD_QueueCmdAndFlush.c (0x8009AF98): TTY putc and immediate flush
//!   - src/main/debug/Debug_PrintString.c (0x8009B9B0): TTY puts with flush
//!   - src/main/debug/Debug_Printf.c (0x8009A730): TTY printf entry point
//!   - src/main/debug/Debug_PrintfMain.c (0x8009A770): Core printf formatting engine

/// 32-byte line buffer limit for PS1 BIOS stdout write
pub const TTY_BUFFER_CAPACITY: usize = 32;

/// Console TTY state tracking column position, buffer index, and output stream.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TtyState {
    pub column: u32,             // DAT_800acf04: column counter for 8-char tab stops
    pub buffer_count: usize,     // DAT_800acf08: current buffered bytes count
    pub buffer: [u8; TTY_BUFFER_CAPACITY], // 0x80105ef8 buffer
    pub output_history: Vec<u8>, // captures flushed data for verification
}

impl Default for TtyState {
    fn default() -> Self {
        Self {
            column: 0,
            buffer_count: 0,
            buffer: [0u8; TTY_BUFFER_CAPACITY],
            output_history: Vec::new(),
        }
    }
}

/// Checks if character is printable according to PS1 ctype table (`&DAT_800ace75[c] & 0x97`)
#[inline]
fn is_printable(c: u8) -> bool {
    (0x20..=0x7E).contains(&c)
}

/// CD_FlushCmd (`0x8009AF5C`)
/// Flushes pending TTY buffer to BIOS stdout descriptor 1.
///
/// Ground truth: src/main/cd/CD_FlushCmd.c (func_8009AF5C)
pub fn tty_flush(tty: &mut TtyState) {
    if tty.buffer_count > 0 {
        tty.output_history.extend_from_slice(&tty.buffer[..tty.buffer_count]);
        tty.buffer_count = 0;
    }
}

/// CD_QueueCmd (`0x8009AE60`)
/// Emits byte to TTY console. Expands tabs (0x09) to 8-space stops,
/// inserts CR (0x0D) before LF (0x0A), and flushes when 32-byte buffer fills.
///
/// Ground truth: src/main/cd/CD_QueueCmd.c (func_8009AE60)
pub fn tty_putc(param: u8, tty: &mut TtyState) {
    if param == 9 {
        // Tab: expand to next 8-space column boundary
        loop {
            tty_putc(b' ', tty);
            if (tty.column & 7) == 0 {
                break;
            }
        }
    } else {
        if param == 10 {
            // Newline: insert CR then reset column
            tty_putc(b'\r', tty);
            tty.column = 0;
        } else if is_printable(param) {
            tty.column += 1;
        }

        if tty.buffer_count >= TTY_BUFFER_CAPACITY {
            tty_flush(tty);
        }

        tty.buffer[tty.buffer_count] = param;
        tty.buffer_count += 1;
    }
}

/// CD_QueueCmdAndFlush (`0x8009AF98`)
/// Emits byte to TTY console and forces an immediate buffer flush.
///
/// Ground truth: src/main/cd/CD_QueueCmdAndFlush.c (func_8009AF98)
pub fn tty_putc_and_flush(param: u8, tty: &mut TtyState) {
    tty_putc(param, tty);
    tty_flush(tty);
}

/// Debug_PrintString (`0x8009B9B0`)
/// Emits null-terminated string to TTY console and flushes at completion.
///
/// Ground truth: src/main/debug/Debug_PrintString.c (func_8009B9B0)
pub fn debug_printstring(s: &str, tty: &mut TtyState) {
    for b in s.bytes() {
        if b == 0 {
            break;
        }
        tty_putc(b, tty);
    }
    tty_flush(tty);
}

/// Debug_Printf (`0x8009A730` & `0x8009A770`)
/// Formats text and emits to TTY console with full flushing.
///
/// Ground truth: src/main/debug/Debug_Printf.c, Debug_PrintfMain.c
pub fn debug_printf(formatted: &str, tty: &mut TtyState) -> usize {
    let mut count = 0;
    for b in formatted.bytes() {
        tty_putc(b, tty);
        count += 1;
    }
    tty_flush(tty);
    count
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_tty_putc_and_tab_expansion() {
        let mut tty = TtyState::default();

        // Write "Hi\t!"
        tty_putc(b'H', &mut tty);
        tty_putc(b'i', &mut tty);
        assert_eq!(tty.column, 2);

        tty_putc(b'\t', &mut tty);
        // Column should expand to 8 (2 + 6 spaces)
        assert_eq!(tty.column, 8);

        tty_putc(b'!', &mut tty);
        assert_eq!(tty.column, 9);

        tty_flush(&mut tty);
        let out = String::from_utf8(tty.output_history).unwrap();
        assert_eq!(out, "Hi      !");
    }

    #[test]
    fn test_tty_newline_cr_insertion() {
        let mut tty = TtyState::default();

        tty_putc(b'A', &mut tty);
        tty_putc(b'\n', &mut tty);
        assert_eq!(tty.column, 0);

        tty_flush(&mut tty);
        let out = String::from_utf8(tty.output_history).unwrap();
        assert_eq!(out, "A\r\n");
    }

    #[test]
    fn test_tty_buffer_overflow_auto_flush() {
        let mut tty = TtyState::default();

        // Write 33 characters (buffer is 32)
        for _ in 0..33 {
            tty_putc(b'x', &mut tty);
        }

        // Buffer was flushed at 32, 1 byte left in buffer
        assert_eq!(tty.output_history.len(), 32);
        assert_eq!(tty.buffer_count, 1);

        tty_flush(&mut tty);
        assert_eq!(tty.output_history.len(), 33);
    }

    #[test]
    fn test_debug_printstring_and_printf() {
        let mut tty = TtyState::default();

        debug_printstring("Tomba! 2\n", &mut tty);
        let out = String::from_utf8(tty.output_history.clone()).unwrap();
        assert_eq!(out, "Tomba! 2\r\n");

        tty.output_history.clear();
        let written = debug_printf("Score: 100\n", &mut tty);
        assert_eq!(written, 11);
        let out = String::from_utf8(tty.output_history).unwrap();
        assert_eq!(out, "Score: 100\r\n");
    }
}
