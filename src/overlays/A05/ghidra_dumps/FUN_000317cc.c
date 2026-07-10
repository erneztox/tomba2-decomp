// FUN_000317cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000317cc(int param_1)

{
  int in_v0;
  int in_v1;
  undefined4 uVar1;
  int unaff_s1;
  int unaff_s2;
  
  _DAT_1f800090 = (int)*(short *)(unaff_s1 + 0xe);
  _DAT_1f800088 = in_v1 * in_v0 >> 8;
  uVar1 = *(undefined4 *)(param_1 + -0x20);
  *(int *)(unaff_s2 + 0x84) = _DAT_1f800088;
  FUN_00027a4c(param_1 + -0x1c,uVar1);
  return;
}

