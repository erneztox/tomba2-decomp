/**
 * @brief Alternate LoadImage with timeout handling
 * @note Original: func_800836B8 at 0x800836B8
 */
// GPU_LoadImage2



undefined4 FUN_800836b8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_80080fd4(s_LoadImage2_8001c014,param_1);
  iVar1 = FUN_80085900(0xffffffff);
  DAT_800a5adc = iVar1 + 0xf0;
  DAT_800a5ae0 = 0;
  uVar2 = *DAT_800a5ab4;
  while (((uVar2 & 0x1000000) != 0 || ((*DAT_800a5aa8 & 0x4000000) == 0))) {
    iVar1 = FUN_800834d4();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    uVar2 = *DAT_800a5ab4;
  }
  FUN_80085b80(2,FUN_80083ad0);
  (*PTR_PTR_800a5998->prev)(param_1,param_2);
  return 0;
}
