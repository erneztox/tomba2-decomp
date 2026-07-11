// FUN_0803288c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803288c(short param_1)

{
  undefined2 uVar1;
  short in_v0;
  int in_v1;
  int unaff_s2;
  int unaff_s3;
  int in_lo;
  
  *(short *)(unaff_s3 + 0x60) = in_v0 + param_1;
  *(int *)(unaff_s3 + 0x30) = in_v1 + in_lo;
  if (0x2800 < (short)(in_v0 + param_1)) {
    *(undefined2 *)(unaff_s3 + 0x60) = 0x2800;
  }
  *(int *)(unaff_s3 + 0x30) = *(int *)(unaff_s3 + 0x30) + *(short *)(unaff_s3 + 0x60) * 0x100;
  if ((-1 < *(short *)(unaff_s3 + 0x60)) &&
     (uVar1 = *(undefined2 *)(unaff_s2 + 2), *(short *)(unaff_s2 + 2) <= *(short *)(unaff_s3 + 0x32)
     )) {
    *(undefined2 *)(unaff_s3 + 0x60) = 0xec00;
    *(undefined2 *)(unaff_s3 + 0x44) = 0x200;
    *(undefined2 *)(unaff_s3 + 0x32) = uVar1;
    *(undefined1 *)(unaff_s3 + 6) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0006cba8(unaff_s3 + 0x2c);
  return;
}

