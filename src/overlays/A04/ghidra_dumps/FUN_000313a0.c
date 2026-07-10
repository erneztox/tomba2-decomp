// FUN_000313a0

/* WARNING: Control flow encountered bad instruction data */

void FUN_000313a0(int param_1)

{
  byte bVar1;
  undefined1 *unaff_s1;
  undefined1 unaff_s2;
  
  *(undefined2 *)(unaff_s1 + 0x56) = 0;
  *(undefined2 *)(unaff_s1 + 0x58) = 0;
  bVar1 = *(byte *)(param_1 + 0xc9);
  if (bVar1 == 0xff) {
    unaff_s1[0x5e] = 5;
    func_0x00041718();
    *(undefined2 *)(unaff_s1 + 0x56) = 0x400;
    func_0x0011c364();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bVar1 & 0x80) == 0) {
    unaff_s1[0x5e] = 0;
    func_0x00041718();
    *(undefined2 *)(unaff_s1 + 0x56) = 0x800;
    unaff_s1[0xb] = 0x40;
    *unaff_s1 = 9;
    *(undefined2 *)(unaff_s1 + 0x80) = 0x78;
    *(undefined2 *)(unaff_s1 + 0x82) = 0xf0;
    *(undefined2 *)(unaff_s1 + 0x84) = 0x7a;
    *(undefined2 *)(unaff_s1 + 0x86) = 0xc2;
    unaff_s1[0x2b] = 0;
    unaff_s1[4] = unaff_s1[4] + '\x01';
    DAT_800bfa51 = 0;
    *(undefined4 *)(unaff_s1 + 0x14) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x2d9) == '\0') {
    if (*(char *)(param_1 + 0x2d8) == '\0') {
      unaff_s1[0x5e] = unaff_s2;
      func_0x00041718();
      halt_baddata();
    }
    if ((bVar1 & 0x40) == 0) {
      unaff_s1[0x5e] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_s1[0x5e] = 3;
  }
  else {
    unaff_s1[0x5e] = 4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

