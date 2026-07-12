/**
 * @brief Unregister a system callback
 * @note Original: func_80012D3C at 0x80012D3C
 */
// Sys_UnregisterCallback



undefined4 Sys_UnregisterCallback(int param_1)

{
  undefined4 uVar1;
  
  *DAT_8002543c = 0x1f;
  uVar1 = 1;
  if ((param_1 != 10) && (uVar1 = 0xfffffffe, (DAT_8002544c & 0x10) == 0)) {
    uVar1 = Sys_UnregisterCallback();
    return uVar1;
  }
  return uVar1;
}
