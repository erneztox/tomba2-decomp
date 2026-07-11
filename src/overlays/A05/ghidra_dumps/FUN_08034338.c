// FUN_08034338

/* WARNING: Control flow encountered bad instruction data */

void FUN_08034338(void)

{
  short sVar1;
  int in_v1;
  int unaff_s0;
  undefined2 unaff_s1;
  
  func_0x00051b04(*(undefined4 *)(unaff_s0 + 200),0xc,
                  (int)*(short *)(*(short *)(unaff_s0 + 0xe) * 2 + in_v1));
  sVar1 = *(short *)(unaff_s0 + 0xe) + 1;
  *(short *)(unaff_s0 + 0xe) = sVar1;
  if (sVar1 == 3) {
    *(undefined2 *)(unaff_s0 + 0xe) = 0;
    *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(unaff_s0 + 0x40) = unaff_s1;
  return;
}

