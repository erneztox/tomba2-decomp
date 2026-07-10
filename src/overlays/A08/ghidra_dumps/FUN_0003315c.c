// FUN_0003315c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0003315c(void)

{
  short in_v0;
  ushort uVar1;
  short in_v1;
  int unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  
  *(short *)(unaff_s0 + 0x32) = (in_v1 + 7) - in_v0;
  uVar1 = func_0x0009a450();
  *(ushort *)(unaff_s0 + 0x36) = (*(short *)(unaff_s1 + 0x4c) + 7) - (uVar1 & 0xf);
  if (*(byte *)(unaff_s1 + 0x79) == unaff_s2) {
    *(undefined2 *)(unaff_s0 + 0x2e) = *(undefined2 *)(unaff_s1 + 0x48);
    *(undefined2 *)(unaff_s0 + 0x32) = *(undefined2 *)(unaff_s1 + 0x4a);
    *(undefined2 *)(unaff_s0 + 0x36) = *(undefined2 *)(unaff_s1 + 0x4c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

