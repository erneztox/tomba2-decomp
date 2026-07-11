/**
 * @brief GPU timeout/reset handler: resets GPU state if hung or error detected
 * @note Original: func_800834D4 at 0x800834D4
 */
// GPU_CheckTimeout



s32 FUN_800834d4(void)

{
  s32 bVar1;
  int iVar2;
  s32 uVar3;
  
  iVar2 = FUN_80085900(0xffffffff);
  if ((DAT_800a5adc < iVar2) ||
     (iVar2 = DAT_800a5ae0 + 1, bVar1 = 0xf0000 < DAT_800a5ae0, DAT_800a5ae0 = iVar2, bVar1)) {
    FUN_8009a730(s_GPU_timeout_que__d_stat__08x_chc_8001bfe0,DAT_800a5ac8 - DAT_800a5acc & 0x3f,
                 *DAT_800a5aa8,*DAT_800a5ab4,*DAT_800a5aac);
    DAT_800a5ad8 = FUN_80085c9c(0);
    DAT_800a5acc = 0;
    DAT_800a5ac8 = 0;
    *DAT_800a5ab4 = 0x401;
    *DAT_800a5ac4 = *DAT_800a5ac4 | 0x800;
    *DAT_800a5aa8 = 0x2000000;
    *DAT_800a5aa8 = 0x1000000;
    FUN_80085c9c(DAT_800a5ad8);
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
