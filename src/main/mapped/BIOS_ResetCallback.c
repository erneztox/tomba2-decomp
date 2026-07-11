/**
 * @brief BIOS call stub: jumps to 0xB0 (ResetCallback/DeliverEvent)
 * @note Original: func_80080880 at 0x80080880
 */
// BIOS_ResetCallback



void FUN_80080880(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}
