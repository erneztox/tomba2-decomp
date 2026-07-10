// FUN_00022c78

/* WARNING: Control flow encountered bad instruction data */

void FUN_00022c78(void)

{
  undefined2 uVar1;
  int in_v0;
  short sVar2;
  int unaff_s2;
  int unaff_s3;
  undefined1 unaff_s5;
  int in_lo;
  
  sVar2 = *(short *)(unaff_s3 + 0x60) + *(short *)(unaff_s3 + 0x62);
  *(short *)(unaff_s3 + 0x60) = sVar2;
  *(int *)(unaff_s3 + 0x2c) = *(int *)(unaff_s3 + 0x2c) + in_lo;
  *(int *)(unaff_s3 + 0x34) = *(int *)(unaff_s3 + 0x34) + *(short *)(unaff_s3 + 0x4c) * in_v0;
  *(int *)(unaff_s3 + 0x30) = *(int *)(unaff_s3 + 0x30) + *(short *)(unaff_s3 + 0x4a) * in_v0;
  if (0x2800 < sVar2) {
    *(undefined2 *)(unaff_s3 + 0x60) = 0x2800;
  }
  *(int *)(unaff_s3 + 0x30) = *(int *)(unaff_s3 + 0x30) + *(short *)(unaff_s3 + 0x60) * 0x100;
  uVar1 = *(undefined2 *)(unaff_s2 + 2);
  if (*(short *)(unaff_s2 + 2) <= *(short *)(unaff_s3 + 0x32)) {
    *(undefined2 *)(unaff_s3 + 0x60) = 0xec00;
    *(undefined2 *)(unaff_s3 + 0x32) = uVar1;
    *(undefined2 *)(unaff_s3 + 0x44) = 0x200;
    *(undefined1 *)(unaff_s3 + 6) = unaff_s5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_800bf9d6 != '\b') {
    func_0x0006cba8(unaff_s3 + 0x2c);
  }
  return;
}

