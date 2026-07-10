// FUN_80082424

int FUN_80082424(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  *DAT_800a5ac4 = *DAT_800a5ac4 | 0x8000000;
  *DAT_800a5ac0 = 0;
  *DAT_800a5ab8 = param_1 + param_2 * 4 + -4;
  *DAT_800a5abc = param_2;
  *DAT_800a5ac0 = 0x11000002;
  FUN_800834a0();
  uVar1 = *DAT_800a5ac0;
  while( true ) {
    if ((uVar1 & 0x1000000) == 0) {
      return param_2;
    }
    iVar2 = FUN_800834d4();
    if (iVar2 != 0) break;
    uVar1 = *DAT_800a5ac0;
  }
  return -1;
}

