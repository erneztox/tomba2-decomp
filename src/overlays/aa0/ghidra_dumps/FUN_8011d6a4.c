// FUN_8011d6a4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8011d6a4(void)

{
  undefined1 in_v0;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int unaff_s0;
  int unaff_s1;
  int unaff_s4;
  int unaff_s5;
  
  *(undefined1 *)(unaff_s0 + 5) = in_v0;
  func_0x80077b38();
  *(undefined2 *)(unaff_s0 + 0x2e) = 0x1040;
  *(undefined2 *)(unaff_s0 + 0x32) = 0xf544;
  if ((*(ushort *)(unaff_s0 + 0x68) & 1) == 0) {
    *(undefined2 *)(unaff_s0 + 0x36) = 0x1bd1;
    *(undefined2 *)(unaff_s0 + 0x44) = 0;
    *(undefined2 *)(unaff_s0 + 0x40) = 1;
    *(undefined2 *)(unaff_s0 + 100) = 0;
    *(undefined1 *)(unaff_s0 + 0x2a) = 3;
    *(undefined1 *)(unaff_s0 + 0x47) = 1;
    *(undefined1 *)(unaff_s0 + 5) = 3;
    *(undefined1 *)(unaff_s0 + 6) = 1;
    func_0x8004766c();
    func_0x80049760();
    return;
  }
  if ((*(ushort *)(unaff_s1 + 0x7a) & 2) == 0) {
    uVar2 = (uint)*(short *)(*(int *)(unaff_s1 + 0xc4) + 8);
    if (0x800 < (int)uVar2) {
      uVar2 = uVar2 | 0xf000;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(unaff_s1 + 6)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(ushort *)(*(int *)(unaff_s1 + 0xc4) + 8) = (ushort)uVar2 & 0xfff;
    FUN_801314b4();
    if (unaff_s5 != 0) {
      iVar3 = func_0x80083e80((int)(short)(ushort)uVar2);
      iVar3 = (iVar3 * -(int)*(short *)(*(int *)(unaff_s1 + 200) + 4) >> 0xc) - unaff_s4;
      if (iVar3 * 0x10000 < 0) {
        FUN_8012fd38();
        return;
      }
      _DAT_800e7eb2 = _DAT_800e7eb2 + (short)iVar3;
    }
    if (*(short *)(unaff_s1 + 0x78) != 0) {
      uVar1 = FUN_801308e0();
      *(undefined1 *)(uVar2 + 6) = uVar1;
      func_0x80072efc();
      *(undefined2 *)(uVar2 + 0x40) = 0xf;
      FUN_80138e70();
      return;
    }
    FUN_80131578();
  }
  return;
}

