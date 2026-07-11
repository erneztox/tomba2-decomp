// FUN_80107424

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80107424(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_8010c008(param_1,param_2,*(undefined4 *)(param_2 + 0xc0));
  if ((((iVar1 == 2) && (DAT_800bf80d == '\0')) && ((_DAT_800bfe56 & 2) == 0)) &&
     (-0x988 < *(short *)(param_1 + 0x32))) {
    *(undefined2 *)(param_1 + 0x6a) = 0x8700;
  }
  return;
}

