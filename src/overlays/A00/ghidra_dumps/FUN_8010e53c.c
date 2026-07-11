// FUN_8010e53c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8010e53c(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int in_t0;
  uint unaff_s1;
  int in_lo;
  
  *(undefined2 *)(param_1 + 0x54) = 0x800;
  if ((DAT_800e7fc5 != '\0') && (DAT_800e7fc6 == '\0')) {
    _DAT_1f8000c0 = 0x3c;
    _DAT_1f8000c2 = 8;
    _DAT_1f8000c4 = 0x48;
    if (DAT_800bf9e5 != '\a') {
      func_0x80051614(param_1,&DAT_1f8000c0,4,0);
      *(undefined1 *)(param_1 + 1) = 1;
      uVar2 = func_0x80077efc(param_1);
      return uVar2;
    }
    *(undefined1 *)(param_1 + 4) = 3;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -3;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (param_1 * 3) / 2;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (*(short *)(param_1 + 0x4c) * 3) / 2;
    if ((unaff_s1 & 2) == 0) {
      func_0x8004766c(param_1);
      func_0x80049250(param_1,0,200);
      if ((unaff_s1 & 4) == 0) {
        func_0x8004954c(param_1,100,0);
        *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(unaff_s1 + 0x2c);
        *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(unaff_s1 + 0x30);
        uVar1 = *(undefined2 *)(unaff_s1 + 0x34);
        *(undefined1 *)(param_1 + 1) = 1;
        *(undefined2 *)(param_1 + 0x36) = uVar1;
        uVar2 = func_0x80051c8c();
        return uVar2;
      }
    }
    return 0;
  }
  _DAT_1f8000c0 = 6;
  _DAT_1f8000c2 = 10;
  *(int *)(param_1 + 0x2c) = in_t0 + 0x1c;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_2;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + in_lo;
  uVar2 = FUN_80120590();
  return uVar2;
}

