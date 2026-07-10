// FUN_80089e1c

bool FUN_80089e1c(byte param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = DAT_800abfbc;
  iVar5 = 3;
  do {
    DAT_800abfbc = 0;
    if ((param_1 != 1) && (((byte)DAT_800abfc8 & 0x10) != 0)) {
      FUN_8008ac34(1,0,0,0);
    }
    if (((param_2 == 0) || (*(int *)(&DAT_800abf34 + (uint)param_1 * 4) == 0)) ||
       (iVar3 = FUN_8008ac34(2,param_2,param_3,0), iVar3 == 0)) {
      DAT_800abfbc = uVar1;
      iVar3 = FUN_8008ac34(param_1,param_2,param_3,0);
      iVar4 = 0;
      if (iVar3 == 0) break;
    }
    iVar5 = iVar5 + -1;
    iVar4 = -1;
    DAT_800abfbc = uVar1;
  } while (iVar5 != -1);
  if (iVar4 == 0) {
    iVar5 = FUN_8008a6ec(0,param_3);
    bVar2 = iVar5 == 2;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

