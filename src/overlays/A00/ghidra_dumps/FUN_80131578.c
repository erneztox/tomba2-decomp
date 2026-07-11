// FUN_80131578

void FUN_80131578(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int unaff_s0;
  int unaff_s2;
  int in_lo;
  
  if (*(char *)(unaff_s0 + 0x5e) == '\x01') {
    *(undefined1 *)(unaff_s2 + 0x5e) = 2;
    FUN_8013a548();
    return;
  }
  if (*(char *)(unaff_s0 + 0x5e) == '\x02') {
    *(undefined1 *)(unaff_s2 + 0x5e) = 1;
    FUN_8013a548();
    return;
  }
  *(undefined1 *)(unaff_s2 + 0x5e) = 0;
  if (*(char *)(unaff_s2 + 0x5e) == '\x01') {
    *(int *)(unaff_s2 + 0x30) = *(int *)(unaff_s2 + 0x30) + *(short *)(unaff_s2 + 0x50) * -0x100;
    if ((int)*(short *)(unaff_s2 + 0x60) < (int)*(short *)(unaff_s2 + 0x32)) {
      DAT_800bf9ee = DAT_800bf9ee & 0xfe;
      FUN_8013a60c();
      return;
    }
    *(int *)(unaff_s2 + 0x30) = (int)*(short *)(unaff_s2 + 0x60) << 0x10;
    DAT_800bf9ee = DAT_800bf9ee | 1;
    *(undefined1 *)(unaff_s2 + 0x5e) = 0;
    *(undefined1 *)(unaff_s2 + 0xbf) = 0;
LAB_8013a634:
    *(undefined2 *)(unaff_s0 + 0x42) = 0xf;
                    /* WARNING: Subroutine does not return */
    *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
    FUN_801402b8(1,param_2,4);
  }
  if (*(char *)(unaff_s2 + 0x5e) == '\x02') {
    *(int *)(unaff_s2 + 0x30) = *(int *)(unaff_s2 + 0x30) + *(short *)(unaff_s2 + 0x50) * 0x100;
    if ((int)*(short *)(unaff_s2 + 0x62) <= (int)*(short *)(unaff_s2 + 0x32)) {
      *(int *)(unaff_s2 + 0x30) = (int)*(short *)(unaff_s2 + 0x62) << 0x10;
      *(undefined1 *)(unaff_s2 + 0x5e) = 0;
      *(undefined1 *)(unaff_s2 + 0xbf) = 1;
      goto LAB_8013a634;
    }
    if ((*(ushort *)(*(int *)(unaff_s0 + 0xc0) + 0xc) & 0xf00) == 0) {
      func_0x80074590(0x8d,0,0);
      return;
    }
  }
  if (*(char *)(unaff_s2 + 5) == '\0') {
    if (*(char *)(unaff_s2 + 0x5e) == '\x01') {
      iVar1 = unaff_s2;
      iVar2 = FUN_80139e64();
      if (iVar2 == 0) {
LAB_80131720:
        func_0x800517f8();
        iVar2 = 0;
        iVar1 = unaff_s2;
        if (*(char *)(unaff_s2 + 8) != '\0') {
          do {
            *(undefined1 *)(*(int *)(iVar1 + 0xc0) + 0x3f) = *(undefined1 *)(unaff_s2 + 1);
            iVar2 = iVar2 + 1;
            iVar1 = iVar1 + 4;
          } while (iVar2 < (int)(uint)*(byte *)(unaff_s2 + 8));
        }
        *(undefined1 *)(unaff_s2 + 0x29) = 0;
        FUN_80139a70();
        return;
      }
      *(undefined1 *)(unaff_s2 + 6) = 0;
      in_lo = (*(byte *)(unaff_s2 + 5) + 1) * iVar1;
      unaff_s2 = iVar1;
    }
    else {
      if (*(char *)(unaff_s2 + 0x5e) != '\x02') goto LAB_80131720;
      FUN_80139c2c();
    }
  }
  else if (*(char *)(unaff_s2 + 5) == '\x01') {
    iVar1 = FUN_8013a008();
    if (iVar1 != 0) {
      *(undefined1 *)(unaff_s2 + 6) = 0;
      *(char *)(unaff_s2 + 5) = *(char *)(unaff_s2 + 5) + -1;
    }
    goto LAB_80131720;
  }
  if ((*(ushort *)(unaff_s0 + 0x62) & 1) == 0) {
    *(int *)(unaff_s0 + 0x2c) = *(int *)(unaff_s0 + 0x2c) + in_lo;
    *(int *)(unaff_s0 + 0x34) = *(int *)(unaff_s0 + 0x34) + *(short *)(unaff_s0 + 0x4c) * unaff_s2;
    return;
  }
  FUN_801436a4();
  return;
}

