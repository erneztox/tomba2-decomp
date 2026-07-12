/**
 * @brief Syscall wrapper D
 * @note Original: func_800127E0 at 0x800127E0
 */
// Sys_CallWrapperD



void Sys_CallWrapperD(void)

{
  int unaff_s0;
  
  if (unaff_s0 != -2) {
    Sys_CallWrapperD();
    return;
  }
  Sys_CallWrapperD(0);
  DAT_80025454 = 0x11;
  Sys_CallWrapperD();
  return;
}
