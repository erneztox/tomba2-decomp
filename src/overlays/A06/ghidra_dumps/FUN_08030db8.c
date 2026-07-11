// FUN_08030db8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08030db8(void)

{
  undefined1 in_v0;
  int in_v1;
  int unaff_s1;
  
  *(undefined1 *)(unaff_s1 + 4) = in_v0;
  if (in_v1 == 0) {
    func_0x00051b04(*(undefined4 *)(unaff_s1 + 0xc0),0xc,7);
  }
  else {
    if (in_v1 != 1) {
      func_0x00051b04(*(undefined4 *)(unaff_s1 + 0xc0),0xc,8);
      func_0x00077c40();
      if (*(char *)(unaff_s1 + 0x5e) == '\0') {
        *(undefined1 *)(unaff_s1 + 0x2a) = 0;
        func_0x00041194();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x0004766c();
      func_0x00049760();
      *(undefined2 *)(unaff_s1 + 0x60) = _DAT_1f8001a0;
      *(undefined2 *)(unaff_s1 + 0x62) = _DAT_1f8001a2;
      *(undefined2 *)(unaff_s1 + 0x56) = *(undefined2 *)(unaff_s1 + 0x60);
      func_0x0011ad34();
      *(undefined1 *)(unaff_s1 + 0x18) = 0;
      *(undefined2 *)(unaff_s1 + 100) = *(undefined2 *)(unaff_s1 + 0x2e);
      *(short *)(unaff_s1 + 0x66) = *(short *)(unaff_s1 + 0x32);
      *(undefined2 *)(unaff_s1 + 0x68) = *(undefined2 *)(unaff_s1 + 0x36);
      *(short *)(unaff_s1 + 0x6e) = *(short *)(unaff_s1 + 0x32) + -700;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00051b04(*(undefined4 *)(unaff_s1 + 0xc0),0xc,9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

