// FUN_0802fdb4

/* WARNING: Control flow encountered bad instruction data */

bool FUN_0802fdb4(void)

{
  short sVar1;
  int in_v0;
  int in_v1;
  int unaff_s0;
  
  if (in_v1 != in_v0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = *(short *)(unaff_s0 + 0x72) + 1;
  *(short *)(unaff_s0 + 0x72) = sVar1;
  if (((int)sVar1 % 6 & 0xffffU) == 0) {
    func_0x00074590(8,6,0xffffffe2);
  }
  return 0x29 < *(short *)(unaff_s0 + 0x72);
}

