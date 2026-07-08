
int FUN_80014f00(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  *DAT_80025638 = *DAT_80025638 | 0x8000000;
  *DAT_80025634 = 0;
  *DAT_8002562c = param_1 + param_2 * 4 + -4;
  *DAT_80025630 = param_2;
  *DAT_80025634 = 0x11000002;
  FUN_8001577c();
  uVar1 = *DAT_80025634;
  while( true ) {
    if ((uVar1 & 0x1000000) == 0) {
      return param_2;
    }
    iVar2 = FUN_800157b0();
    if (iVar2 != 0) break;
    uVar1 = *DAT_80025634;
  }
  return -1;
}

