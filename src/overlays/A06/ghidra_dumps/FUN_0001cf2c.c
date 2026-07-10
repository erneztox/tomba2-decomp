// FUN_0001cf2c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001cf2c(void)

{
  int iVar1;
  undefined1 *unaff_s1;
  undefined1 unaff_s2;
  undefined2 uStack00000012;
  short sStack00000016;
  undefined2 uStack0000001a;
  
  *(undefined2 *)(unaff_s1 + 0x84) = 1000;
  *(undefined2 *)(unaff_s1 + 0x86) = 1000;
  *(undefined2 *)(unaff_s1 + 0x56) = 64000;
  uStack00000012 = *(undefined2 *)(unaff_s1 + 0x2e);
  *unaff_s1 = unaff_s2;
  *(undefined2 *)(unaff_s1 + 0x54) = 0;
  *(undefined2 *)(unaff_s1 + 0x58) = 0;
  unaff_s1[4] = unaff_s1[4] + '\x01';
  sStack00000016 = *(short *)(unaff_s1 + 0x32) + -0x118;
  uStack0000001a = *(undefined2 *)(unaff_s1 + 0x36);
  iVar1 = FUN_0003116c(0x702,&stack0x00000010,0xffffffd0);
  if (iVar1 != 0) {
    *(undefined1 **)(iVar1 + 0x10) = unaff_s1;
  }
  func_0x000517f8();
  if ((bRam800bfa14 & 7) == 7) {
    func_0x00132cf8();
    unaff_s1[5] = unaff_s2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

