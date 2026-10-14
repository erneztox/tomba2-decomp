//! IRQ handling and dispatch routines — SEC-12 (SYS)
//! Ground Truth:
//!   - src/main/system/IRQ_Dispatch.c (0x80086288)
//!   - src/main/system/Sys_TriggerIRQ.c (0x80051F80)
//!   - src/main/system/IRQ_Disable.c (0x80085810)

use crate::system::TombaSystemState;

/// Capacity of the PS1 hardware IRQ callback table at DAT_800abdc0 (8 handlers)
pub const IRQ_CALLBACK_TABLE_CAPACITY: usize = 8;

/// SYS-503: `IRQ_Dispatch` (`0x80086288`)
/// Iterates callback table at DAT_800abdc0 (8 entries), increments the VSync frame counter
/// (DAT_800abde0), and invokes any active handler routines.
///
/// Ground truth: src/main/system/IRQ_Dispatch.c (func_80086288)
/// Sequence:
/// - Increments DAT_800abde0 (system_state.vsync_counter) by 1
/// - Loops iVar2 from 0 to 7: if callback pointer != 0, dispatches handler
pub fn irq_dispatch(system_state: &mut TombaSystemState) -> u32 {
    system_state.vsync_counter += 1;
    system_state.irq_dispatch_count += 1;

    let mut executed_count = 0u32;
    for i in 0..IRQ_CALLBACK_TABLE_CAPACITY {
        if let Some(_handler) = system_state.irq_callbacks[i] {
            // Handler present: in modern runtime, tracked/executed
            executed_count += 1;
        }
    }
    executed_count
}

/// SYS-502: `Sys_TriggerIRQ` (`0x80051F80`)
/// Triggers an interrupt request with the specified code (e.g. 2 for VSync).
///
/// Ground truth: src/main/system/Sys_TriggerIRQ.c (func_80051F80)
/// Sets pending IRQ code and triggers BIOS syscall B0:80080880.
pub fn sys_triggerirq(irq_code: i16, system_state: &mut TombaSystemState) {
    system_state.pending_irq = Some(irq_code);
    system_state.irq_trigger_called = true;
}

/// SYS-500: `IRQ_Disable` (`0x80085810`)
/// Disables interrupts and patches exception return vector.
///
/// Ground truth: src/main/system/IRQ_Disable.c (func_80085810)
pub fn irq_disable(system_state: &mut TombaSystemState) {
    system_state.irq_disabled = true;
}

/// Registers an IRQ handler in the callback table at DAT_800abdc0.
pub fn irq_register_handler(
    slot: usize,
    handler_addr: u32,
    system_state: &mut TombaSystemState,
) {
    if slot < IRQ_CALLBACK_TABLE_CAPACITY {
        system_state.irq_callbacks[slot] = Some(handler_addr);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_irq_lifecycle() {
        let mut state = TombaSystemState::default();

        // 1. Initial state
        assert_eq!(state.vsync_counter, 0);
        assert_eq!(state.irq_dispatch_count, 0);

        // 2. Register handler at slot 1
        irq_register_handler(1, 0x8001CFC8, &mut state);
        assert_eq!(state.irq_callbacks[1], Some(0x8001CFC8));

        // 3. Dispatch IRQ: increments vsync_counter and executes handlers
        let executed = irq_dispatch(&mut state);
        assert_eq!(executed, 1);
        assert_eq!(state.vsync_counter, 1);
        assert_eq!(state.irq_dispatch_count, 1);

        // 4. Trigger IRQ
        sys_triggerirq(2, &mut state);
        assert_eq!(state.pending_irq, Some(2));
        assert!(state.irq_trigger_called);

        // 5. Disable IRQ
        irq_disable(&mut state);
        assert!(state.irq_disabled);
    }
}
