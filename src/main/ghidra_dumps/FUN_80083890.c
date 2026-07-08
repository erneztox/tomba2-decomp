
undefined4 FUN_80083890(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  FUN_80080fd4(s_MoveImage_8001bf44,param_1);
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
  uVar3 = 0xffffffff;
  if (*(short *)(param_1 + 1) != 0) {
    if (*(short *)((int)param_1 + 6) == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      DAT_800a5a44 = param_3 << 0x10 | param_2 & 0xffff;
      DAT_800a5a40 = *param_1;
      DAT_800a5a48 = param_1[1];
      (**(code **)(PTR_PTR_800a5998 + 0x18))(&DAT_800a5a38);
      uVar3 = 0;
    }
  }
  return uVar3;
}

