// FUN_80041768

undefined4 FUN_80041768(int param_1,uint param_2,short param_3)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((uint)*(byte *)(param_1 + 0x46) != (param_2 & 0xff)) {
    uVar1 = FUN_80041718(param_1,param_2,(int)param_3);
  }
  return uVar1;
}

