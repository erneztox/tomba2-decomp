/**
 * @brief Registers a system callback
 * @note Original: func_80013840 at 0x80013840
 */
// Sys_SetCallback13840



undefined1 Sys_SetCallback13840(char param_1)

{
  undefined1 uVar1;
  
  uVar1 = DAT_80025516;
  DAT_80025516 = param_1;
  if (param_1 != '\0') {
    (*DAT_80025510)(&DAT_800101b0,param_1,DAT_80025514,DAT_80025517);
  }
  return uVar1;
}
