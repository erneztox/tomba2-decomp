//! Font character tile generator — SEC-12 (SYS)
//!
//! Ground Truth:
//!   - src/main/misc/Font_BuildChar.c (0x80039E80)

/// PS1 Textured Quad UV coordinates (POLY_FT4 layout) for an 8x16 font glyph.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct FontCharUV {
    pub u0: u8, // +0x0c
    pub v0: u8, // +0x0d
    pub u1: u8, // +0x14
    pub v1: u8, // +0x15
    pub u2: u8, // +0x1c
    pub v2: u8, // +0x1d
    pub u3: u8, // +0x24
    pub v3: u8, // +0x25
}

/// Font_BuildChar (`0x80039E80`)
/// Builds a font character tile: converts character code to 8x16 pixel UV texture coordinates.
/// Returns -1 (0xFFFFFFFF) if character is space (0x20).
///
/// Ground truth: src/main/misc/Font_BuildChar.c (func_80039E80)
pub fn font_buildchar(char_code: u8, uv: &mut FontCharUV) -> i32 {
    if char_code == 0x20 {
        return -1; // 0xffffffff
    }

    // Fixed scratchpad offset _DAT_1f800180 = 0x20
    let scratch_offset = 0x20i32;
    let u0 = char_code.wrapping_mul(8);
    let mut i_var2 = (char_code as i32) + scratch_offset;
    if i_var2 < 0 {
        i_var2 += 0x1f;
    }

    let v0 = (((i_var2 >> 5) as u8).wrapping_mul(16)).wrapping_add(8);

    let mut u1 = (u0 as i8).wrapping_add(8) as u8;
    let u2 = u0;
    let mut u3 = (u0 as i8).wrapping_add(8) as u8;

    if (u1 as i8) == 0 {
        u1 = 0xff;
        u3 = 0xff;
    }

    let v1 = v0;
    let v2 = (v0 as i8).wrapping_add(16) as u8;
    let v3 = (v0 as i8).wrapping_add(16) as u8;

    uv.u0 = u0;
    uv.v0 = v0;
    uv.u1 = u1;
    uv.v1 = v1;
    uv.u2 = u2;
    uv.v2 = v2;
    uv.u3 = u3;
    uv.v3 = v3;

    0
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_font_buildchar_space() {
        let mut uv = FontCharUV::default();
        let res = font_buildchar(0x20, &mut uv);
        assert_eq!(res, -1);
    }

    #[test]
    fn test_font_buildchar_glyph() {
        let mut uv = FontCharUV::default();
        let res = font_buildchar(b'A', &mut uv);
        assert_eq!(res, 0);

        // 'A' = 65
        // u0 = (65 * 8) % 256 = 8
        // i_var2 = 65 + 32 = 97
        // v0 = (97 >> 5) * 16 + 8 = 3 * 16 + 8 = 56
        assert_eq!(uv.u0, 8);
        assert_eq!(uv.v0, 56);
        assert_eq!(uv.u1, 16);
        assert_eq!(uv.v1, 56);
        assert_eq!(uv.u2, 8);
        assert_eq!(uv.v2, 72);
        assert_eq!(uv.u3, 16);
        assert_eq!(uv.v3, 72);
    }
}
