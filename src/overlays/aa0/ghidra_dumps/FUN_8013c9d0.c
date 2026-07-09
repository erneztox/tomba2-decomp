// FUN_8013c9d0

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013c9d0(void)

{
  ushort uVar1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x4e) = 0x800;
  *(undefined2 *)(unaff_s0 + 0x40) = 0x14;
  *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
  if ((*(ushort *)(unaff_s0 + 0x62) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(unaff_s0 + 0x2c) =
       *(int *)(unaff_s0 + 0x2c) +
       (int)*(short *)(unaff_s0 + 0x48) * (int)*(short *)(unaff_s0 + 0x4e);
  *(int *)(unaff_s0 + 0x34) =
       *(int *)(unaff_s0 + 0x34) +
       (int)*(short *)(unaff_s0 + 0x4c) * (int)*(short *)(unaff_s0 + 0x4e);
  uVar1 = *(short *)(unaff_s0 + 0x40) - 1;
  *(ushort *)(unaff_s0 + 0x40) = uVar1;
  if ((int)((uint)uVar1 << 0x10) < 1) {
    *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_801406e4();
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x14;
  return;
}

