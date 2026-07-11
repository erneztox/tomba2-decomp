// FUN_08032760

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08032760(void)

{
  byte bVar1;
  int in_v0;
  int iVar2;
  undefined1 *unaff_s0;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  if (in_v0 < 0) {
    in_v0 = -in_v0;
  }
  if (0x1800 < in_v0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((_DAT_1f80017c & 0xf) == 0) {
    in_stack_00000010._2_2_ = *(undefined2 *)(unaff_s0 + 0x2e);
    in_stack_00000014._2_2_ = *(short *)(unaff_s0 + 0x32) + 0x50;
    in_stack_00000018._2_2_ = *(undefined2 *)(unaff_s0 + 0x36);
    func_0x0003116c(0x502,&stack0x00000010,0xffffffce);
  }
  if (unaff_s0[0x5f] == '\0') {
    if (-1 < *(short *)(unaff_s0 + 0x44)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = func_0x00045cac();
    if (iVar2 != 0) {
      unaff_s0[0x5f] = unaff_s0[0xbe] + '\x02';
    }
  }
  func_0x0012a480();
  bVar1 = unaff_s0[0x5f];
  if (((bVar1 & 0x80) == 0) && ((bVar1 == 0 || ((bVar1 & 1) != unaff_s0[0xbe])))) {
    if (*(short *)(unaff_s0 + 0x44) == 0) {
      unaff_s0[5] = 0;
      unaff_s0[6] = 0;
    }
    return;
  }
  *unaff_s0 = 2;
  unaff_s0[4] = 2;
  unaff_s0[6] = 0;
  if ((unaff_s0[0x5f] & 0x80) != 0) {
    unaff_s0[5] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_s0[5] = 2;
  if (unaff_s0[0xbe] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_s0[0x2b] = (char)(*(ushort *)(unaff_s0 + 0x60) >> 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

