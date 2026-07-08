
int FUN_800875dc(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  DAT_800abebc = 0;
  if ((DAT_800abe84 != 0) && (**(byte **)(param_1 + 0x3c) >> 4 == 8)) {
    DAT_800abebc = (uint)(*(char *)(param_1 + 0x37) == '\0');
  }
  if (DAT_800abebc == 0) {
    (*DAT_800abe44)(param_1);
  }
  uVar1 = (*DAT_800abe40)(param_1,DAT_800abebc);
  iVar2 = FUN_800870b4(param_1,uVar1);
  iVar3 = iVar2;
  if (((iVar2 != 0x5a) && (iVar2 != 0)) && (iVar3 = -4, iVar2 < 0)) {
    iVar3 = iVar2;
  }
  return iVar3;
}

