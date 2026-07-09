// FUN_80139e5c

/* WARNING: Control flow encountered bad instruction data */

int FUN_80139e5c(void)

{
  ushort uVar1;
  int iVar2;
  int unaff_s0;
  short unaff_s1;
  
  *(undefined2 *)(unaff_s0 + 0x42) = 0xe;
  *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
  FUN_801406e4();
  uVar1 = *(ushort *)(unaff_s0 + 0x42);
  *(ushort *)(unaff_s0 + 0x42) = uVar1 - 1;
  if ((int)((uint)uVar1 << 0x10) < 1) {
    iVar2 = FUN_80142f2c();
    return iVar2;
  }
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
  return (int)unaff_s1;
}

