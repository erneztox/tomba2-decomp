// FUN_801141c8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_801141c8(int param_1)

{
  undefined1 uVar1;
  int in_v0;
  uint uVar2;
  int iVar3;
  int unaff_s0;
  int unaff_s1;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  if (unaff_s0 == in_v0) {
    if (*(byte *)(unaff_s1 + 7) < 7) {
      FUN_8011ce94();
      FUN_8011d534();
      return;
    }
    if (*(byte *)(unaff_s1 + 7) != 7) {
      FUN_8011d534();
      return;
    }
    if (*(char *)(unaff_s1 + 0x70) == -1) {
      *(undefined2 *)(unaff_s1 + 0x40) = 0x1e;
      *(undefined1 *)(unaff_s1 + 5) = 0;
      FUN_8011d534();
      return;
    }
  }
  else {
    if (unaff_s0 != 3) {
      *(undefined1 *)(unaff_s0 + 0x47) = 0;
      *(undefined2 *)(unaff_s0 + 0x2e) = *(undefined2 *)(*(int *)(param_1 + 0xcc) + 0x2c);
      *(undefined2 *)(unaff_s0 + 0x32) =
           *(undefined2 *)(*(int *)(param_1 + *(short *)(unaff_s0 + 0x60) * 4 + 0xc0) + 0x30);
      *(undefined2 *)(unaff_s0 + 0x36) =
           *(undefined2 *)(*(int *)(param_1 + *(short *)(unaff_s0 + 0x60) * 4 + 0xc0) + 0x34);
      if ((*(ushort *)(unaff_s0 + 0x60) & 1) == 0) {
        uVar2 = 1;
        *(undefined1 *)(unaff_s0 + 0x2a) = 1;
      }
      else {
        uVar2 = 10;
        *(undefined1 *)(unaff_s0 + 0x2a) = 10;
      }
      if (0x800 < uVar2) {
        unaff_s3 = unaff_s3 | 0xf000;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(*(undefined1 *)(unaff_s1 + 6)) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(ushort *)(*(int *)(unaff_s1 + 0xc4) + 8) = (ushort)unaff_s3 & 0xfff;
      FUN_801314b4();
      if (unaff_s5 != 0) {
        iVar3 = func_0x80083e80((int)(short)(ushort)unaff_s3);
        iVar3 = (iVar3 * -(int)*(short *)(*(int *)(unaff_s1 + 200) + 4) >> 0xc) - unaff_s4;
        if (iVar3 * 0x10000 < 0) {
          FUN_8012fd38();
          return;
        }
        _DAT_800e7eb2 = _DAT_800e7eb2 + (short)iVar3;
      }
      if (*(short *)(unaff_s1 + 0x78) != 0) {
        uVar1 = FUN_801308e0();
        *(undefined1 *)(unaff_s3 + 6) = uVar1;
        func_0x80072efc();
        *(undefined2 *)(unaff_s3 + 0x40) = 0xf;
        FUN_80138e70();
        return;
      }
      FUN_80131578();
      return;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(unaff_s1 + 7)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (*(char *)(unaff_s1 + 0x47) != '\0') {
    *(undefined1 *)(unaff_s1 + 1) = 1;
    func_0x80077e7c();
  }
  func_0x80041098();
  func_0x8004190c();
  return;
}

