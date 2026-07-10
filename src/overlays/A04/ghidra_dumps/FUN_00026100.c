// FUN_00026100

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00026100(void)

{
  int iVar1;
  ushort uVar2;
  int unaff_s0;
  
  iVar1 = func_0x00077768((int)*(short *)(unaff_s0 + 0x6c),(int)_DAT_1f8001a0,1);
  if (iVar1 != 0) {
    *(undefined1 *)(unaff_s0 + 0xbe) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(unaff_s0 + 0xbe) = 1;
  *(ushort *)(unaff_s0 + 0x6c) = *(ushort *)(unaff_s0 + 0x6c) & 0xfff;
  uVar2 = *(ushort *)(unaff_s0 + 0x56) & 0xfff;
  *(ushort *)(unaff_s0 + 0x56) = uVar2;
  if (0 < *(short *)(unaff_s0 + 0x50)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(ushort *)(unaff_s0 + 0x40) = uVar2 - *(short *)(unaff_s0 + 0x6c);
  if (*(short *)(unaff_s0 + 0x40) < 0) {
    *(short *)(unaff_s0 + 0x40) = *(short *)(unaff_s0 + 0x40) + 0x1000;
  }
  *(short *)(unaff_s0 + 0x40) = (short)(char)((ushort)*(undefined2 *)(unaff_s0 + 0x40) >> 8);
  *(ushort *)(unaff_s0 + 0x58) = *(ushort *)(unaff_s0 + 0x58) & 0xfff;
  return;
}

