// FUN_0001e860

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001e860(void)

{
  undefined2 in_v0;
  int iVar1;
  int unaff_s0;
  int unaff_s2;
  
  *(undefined2 *)(unaff_s0 + 0x48) = in_v0;
  *(undefined2 *)(unaff_s0 + 0x52) = 0xfff8;
  iVar1 = func_0x00077768((uint)*(byte *)(unaff_s0 + 0x46) << 4,(int)*(short *)(unaff_s0 + 0x56),1);
  if (iVar1 != 0) {
    *(short *)(unaff_s0 + 0x4c) = -*(short *)(unaff_s0 + 0x4c);
    *(short *)(unaff_s0 + 0x52) = -*(short *)(unaff_s0 + 0x52);
  }
  if (unaff_s2 != 0) {
    *(undefined2 *)(unaff_s2 + 0x78) = *(undefined2 *)(unaff_s0 + 0x4c);
  }
  *(undefined1 *)(unaff_s0 + 0x2b) = 0;
  *(undefined1 *)(unaff_s0 + 0x5f) = 1;
  if (*(char *)(unaff_s0 + 1) != '\0') {
    func_0x00074590(0xf,0xfffffffb,0);
  }
  *(short *)(unaff_s0 + 0x76) = *(short *)(unaff_s0 + 0x76) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

