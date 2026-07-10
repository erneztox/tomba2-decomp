// FUN_00026ad0

/* WARNING: Control flow encountered bad instruction data */

void FUN_00026ad0(void)

{
  short sVar1;
  int in_v0;
  int unaff_s0;
  
  sVar1 = *(short *)(*(int *)(in_v0 + 0xc0) + 0xc) + -0x3c;
  *(short *)(*(int *)(in_v0 + 0xc0) + 0xc) = sVar1;
  if (sVar1 < 0x8f9) {
    func_0x00051b04(*(undefined4 *)(unaff_s0 + *(short *)(unaff_s0 + 0x60) * 4 + 0xc0),0xc,
                    (int)*(short *)(*(short *)(unaff_s0 + 0x60) * 2 + -0x7fec0cb4));
    *(undefined2 *)(*(int *)(unaff_s0 + (*(short *)(unaff_s0 + 0x60) + 8) * 4 + 0xc0) + 0xc) = 0x8f8
    ;
    sVar1 = *(short *)(unaff_s0 + 0x60) + 1;
    *(short *)(unaff_s0 + 0x60) = sVar1;
    if (3 < sVar1) {
      *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
    }
    DAT_800bf9c6 = *(char *)(unaff_s0 + 0x60) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(short *)(unaff_s0 + 0x7e) != 0) {
    func_0x0012f7c0();
  }
  func_0x000517f8();
  *(undefined1 *)(unaff_s0 + 1) = 1;
  return;
}

