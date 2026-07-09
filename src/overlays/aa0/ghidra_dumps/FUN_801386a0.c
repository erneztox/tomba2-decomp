// FUN_801386a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801386a0(void)

{
  short sVar1;
  ushort uVar2;
  int unaff_s2;
  
  if ((*(ushort *)(unaff_s2 + 0x62) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(unaff_s2 + 0x2c) =
       *(int *)(unaff_s2 + 0x2c) +
       (int)*(short *)(unaff_s2 + 0x48) * (int)*(short *)(unaff_s2 + 0x4e);
  *(int *)(unaff_s2 + 0x34) =
       *(int *)(unaff_s2 + 0x34) +
       (int)*(short *)(unaff_s2 + 0x4c) * (int)*(short *)(unaff_s2 + 0x4e);
  sVar1 = func_0x800781e0((int)*(short *)(unaff_s2 + 0x2e) - (int)_DAT_1f800160,
                          (int)*(short *)(unaff_s2 + 0x36) - (int)_DAT_1f800164);
  if ((sVar1 < 0x118) &&
     (uVar2 = *(short *)(unaff_s2 + 0x42) - 1, *(ushort *)(unaff_s2 + 0x42) = uVar2,
     -1 < (int)((uint)uVar2 << 0x10))) {
    *(short *)(unaff_s2 + 0x32) = *(short *)(unaff_s2 + 0x32) + 0x10;
    FUN_801406e4();
    if ((*(char *)(unaff_s2 + 0x66) == -0x7f) &&
       ((*(char *)(unaff_s2 + 0x29) == '\0' && (*(char *)(unaff_s2 + 4) == '\x01')))) {
      *(undefined4 *)(unaff_s2 + 4) = 0x20501;
    }
    return;
  }
  *(char *)(unaff_s2 + 7) = *(char *)(unaff_s2 + 7) + '\x01';
  FUN_801417ac();
  return;
}

