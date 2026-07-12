/**
 * @brief Syscall wrapper B
 * @note Original: func_8001257C at 0x8001257C
 */
// Sys_CallWrapperB



void Sys_CallWrapperB(void)

{
  int unaff_s0;
  
  if (-1 < unaff_s0) {
    if (unaff_s0 != 0) {
      if (unaff_s0 != 1) {
        Sys_CallWrapperB();
        return;
      }
      Sys_CallWrapperB(0xd);
      DAT_80025454 = 6;
    }
    Sys_CallWrapperB();
    return;
  }
  if (unaff_s0 != -2) {
    Sys_CallWrapperB();
    return;
  }
  Sys_CallWrapperB(0);
  DAT_80025454 = 0x11;
  Sys_CallWrapperB();
  return;
}
