/**
 * @brief Syscall wrapper C
 * @note Original: func_80012584 at 0x80012584
 */
// Sys_CallWrapperC



void Sys_CallWrapperC(void)

{
  int in_v0;
  int unaff_s0;
  
  if (unaff_s0 != in_v0) {
    Sys_CallWrapperC();
    return;
  }
  Sys_CallWrapperC(0);
  DAT_80025454 = 0x11;
  Sys_CallWrapperC();
  return;
}
