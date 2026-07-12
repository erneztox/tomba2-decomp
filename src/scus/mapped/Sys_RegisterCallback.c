/**
 * @brief Register a system callback
 * @note Original: func_80012D2C at 0x80012D2C
 */
// Sys_RegisterCallback



undefined4 Sys_RegisterCallback(int param_1)

{
  undefined4 uVar1;
  
  *DAT_80025434 = 1;
  *DAT_8002543c = 0x1f;
  uVar1 = 1;
  if ((param_1 != 10) && (uVar1 = 0xfffffffe, (DAT_8002544c & 0x10) == 0)) {
    uVar1 = Sys_RegisterCallback();
    return uVar1;
  }
  return uVar1;
}
