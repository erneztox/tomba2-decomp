
undefined4 FUN_80019838(byte param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_800268d0;
  iVar3 = 3;
  while( true ) {
    DAT_800268d0 = 0;
    if ((param_1 != 1) && (((byte)DAT_800268dc & 0x10) != 0)) {
      FUN_8001a0c0(1,0,0,0);
    }
    if ((((param_2 == 0) || (*(int *)(&DAT_80026848 + (uint)param_1 * 4) == 0)) ||
        (iVar2 = FUN_8001a0c0(2,param_2,param_3,0), iVar2 == 0)) &&
       (DAT_800268d0 = uVar1, iVar2 = FUN_8001a0c0(param_1,param_2,param_3,0), iVar2 == 0)) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == -1) {
      DAT_800268d0 = uVar1;
      return 0;
    }
  }
  return 1;
}

