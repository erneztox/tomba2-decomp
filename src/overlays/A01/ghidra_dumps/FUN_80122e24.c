// FUN_80122e24

/* WARNING: Control flow encountered bad instruction data */

void FUN_80122e24(void)

{
  int in_v0;
  undefined4 uVar1;
  undefined1 *unaff_s0;
  
  if (in_v0 == 0) {
    *(undefined2 *)(unaff_s0 + 0x84) = 0x82;
    *(undefined2 *)(unaff_s0 + 0x80) = 100;
    *(undefined2 *)(unaff_s0 + 0x82) = 200;
    *(undefined2 *)(unaff_s0 + 0x86) = 0x82;
    *(undefined2 *)(unaff_s0 + 0x60) = 0x82;
    uVar1 = FUN_80115f70();
    *(undefined4 *)(unaff_s0 + 0x10) = uVar1;
    *unaff_s0 = 1;
    unaff_s0[0x29] = 0;
    unaff_s0[0x2b] = 0;
    unaff_s0[4] = unaff_s0[4] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

