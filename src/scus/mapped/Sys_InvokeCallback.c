/**
 * @brief Invoke a registered callback
 * @note Original: func_80012D4C at 0x80012D4C
 */
// Sys_InvokeCallback



undefined4 Sys_InvokeCallback(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((param_1 != 10) && (uVar1 = 0xfffffffe, (DAT_8002544c & 0x10) == 0)) {
    uVar1 = Sys_InvokeCallback();
    return uVar1;
  }
  return uVar1;
}
