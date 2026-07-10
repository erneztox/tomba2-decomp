// FUN_800355b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_800355b4(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_80035640(0x1a);
  if (((iVar2 != 0) && (param_3 != 1)) &&
     (iVar3 = FUN_8004bd04(param_1,0,1), uVar1 = _DAT_1f800080, iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x1c) = 0x801189c4;
    *(undefined4 *)(iVar3 + 0x14) = uVar1;
    FUN_8004d4f4(0x61,1);
  }
  return iVar2;
}

