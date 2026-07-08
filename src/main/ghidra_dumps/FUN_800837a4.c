
undefined4 FUN_800837a4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_80080fd4(s_StoreImage_8001bf38,param_1);
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
  (**(code **)(PTR_PTR_800a5998 + 0x1c))(param_1,param_2);
  return 0;
}

