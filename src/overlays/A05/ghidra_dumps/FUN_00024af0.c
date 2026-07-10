// FUN_00024af0

/* WARNING: Control flow encountered bad instruction data */

void FUN_00024af0(void)

{
  short in_v1;
  int unaff_s0;
  
  *(short *)(unaff_s0 + 0x4c) = in_v1 + *(short *)(unaff_s0 + 0x52);
  if (*(short *)(unaff_s0 + 0x58) < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((0 < *(short *)(unaff_s0 + 0x74)) &&
     ((int)*(short *)(unaff_s0 + 0x48) * (int)*(short *)(unaff_s0 + 0x52) < 1)) {
    *(undefined2 *)(unaff_s0 + 0x58) = 0;
    *(undefined2 *)(unaff_s0 + 0x4c) = 0;
    *(undefined2 *)(unaff_s0 + 0x48) = 0;
    *(undefined2 *)(unaff_s0 + 0x52) = 0;
    *(undefined2 *)(unaff_s0 + 0x74) = 0xffff;
  }
  return;
}

