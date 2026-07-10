// FUN_00022c0c

/* WARNING: Control flow encountered bad instruction data */

void FUN_00022c0c(void)

{
  int iVar1;
  int in_v1;
  int unaff_s0;
  
  if ((*(char *)(in_v1 + 0xe) == '\0') ||
     ((ushort)*(byte *)(in_v1 + 0xf) != *(ushort *)(unaff_s0 + 0x6a))) {
    if (((*(byte *)(unaff_s0 + 0x28) & 0x80) == 0) && (iVar1 = func_0x0007778c(), iVar1 != 0)) {
      func_0x000517f8();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if ((*(byte *)(unaff_s0 + 0x28) & 0x80) != 0) {
    *(undefined1 *)(unaff_s0 + 1) = 1;
    func_0x00077e7c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

