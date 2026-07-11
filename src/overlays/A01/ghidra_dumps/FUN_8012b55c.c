// FUN_8012b55c

/* WARNING: Control flow encountered bad instruction data */

void FUN_8012b55c(void)

{
  short sVar1;
  undefined2 uVar2;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  sVar1 = func_0x80085690(-((int)(((uint)*(ushort *)(unaff_s0 + 0x76) -
                                  (uint)*(ushort *)(unaff_s1 + 0x36)) * 0x10000) >> 0x10),0);
  uVar2 = func_0x80077768((int)sVar1,(int)*(short *)(unaff_s1 + 0x140),0);
  *(undefined2 *)(unaff_s0 + 0x72) = uVar2;
  sVar1 = *(short *)(unaff_s0 + 0x76) - *(short *)(unaff_s2 + 2);
  *(short *)(unaff_s0 + 100) = sVar1;
  if (sVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(unaff_s1 + 5) = 0x21;
  *(undefined1 *)(unaff_s1 + 6) = 0;
  if (*(ushort *)(unaff_s0 + 0x72) == (ushort)*(byte *)(unaff_s1 + 0x147)) {
    *(undefined1 *)(unaff_s0 + 0x78) = 2;
  }
  else {
    *(undefined1 *)(unaff_s0 + 0x78) = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

