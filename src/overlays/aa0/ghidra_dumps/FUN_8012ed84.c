// FUN_8012ed84

void FUN_8012ed84(void)

{
  uint in_v0;
  int iVar1;
  uint in_v1;
  int unaff_s0;
  int unaff_s1;
  
  *(char *)(unaff_s0 + 0x46) = (char)in_v0;
  if (in_v0 < 0xc) {
    if ((in_v1 & 1) == 0) {
      *(undefined2 *)(*(int *)(unaff_s0 + (*(byte *)(unaff_s0 + 9) - 1) * 4 + 0xc0) + 0x14) = 0xffe8
      ;
      *(undefined1 *)(unaff_s0 + 0x46) = 0xff;
      if ((*(char *)(unaff_s0 + 1) != '\0') && (iVar1 = func_0x80072ddc(), iVar1 != 0)) {
        *(undefined4 *)(iVar1 + 0x1c) = 0x801234a4;
        *(undefined2 *)(iVar1 + 0x48) =
             *(undefined2 *)(*(int *)(unaff_s0 + (*(byte *)(unaff_s0 + 9) - 1) * 4 + 0xc0) + 0x2c);
        *(short *)(iVar1 + 0x4a) =
             *(short *)(*(int *)(unaff_s0 + (*(byte *)(unaff_s0 + 9) - 1) * 4 + 0xc0) + 0x30) +
             -0x8c;
        *(undefined2 *)(iVar1 + 0x4c) =
             *(undefined2 *)(*(int *)(unaff_s0 + (*(byte *)(unaff_s0 + 9) - 1) * 4 + 0xc0) + 0x34);
      }
      return;
    }
    *(undefined2 *)(*(int *)(unaff_s0 + (*(byte *)(unaff_s0 + 9) - 1) * 4 + 0xc0) + 0x14) = 0x18;
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(unaff_s0 + (*(byte *)(unaff_s0 + 9) - 1) * 4 + 0xc0);
    *(undefined2 *)(iVar1 + 0x14) = 0;
    *(undefined1 *)(unaff_s0 + 0x46) = 0;
  }
  *(short *)(unaff_s0 + 0x58) = (short)iVar1;
  FUN_801406e4();
  if (-1 < *(short *)(unaff_s0 + 0x50)) {
    *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
    iVar1 = func_0x80083e80(unaff_s1 + *(short *)(unaff_s0 + 0x40) * -0x2e);
                    /* WARNING: Subroutine does not return */
    *(short *)(unaff_s0 + 0x58) = (short)(iVar1 * -0x2000 + unaff_s1 >> 0xc);
    FUN_801402b8();
  }
  return;
}

