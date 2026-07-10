// FUN_00022f04

/* WARNING: Control flow encountered bad instruction data */

void FUN_00022f04(void)

{
  short in_v0;
  short sVar1;
  int unaff_s0;
  ushort unaff_s1;
  
  *(ushort *)(unaff_s0 + 0x58) = in_v0 + 0x80U;
  if ((int)((uint)unaff_s1 << 0x10) <= (int)((uint)(ushort)(in_v0 + 0x80U) << 0x10)) {
    *(ushort *)(unaff_s0 + 0x58) = unaff_s1;
    *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
  }
  func_0x0006cba8(unaff_s0 + 0x2c);
  sVar1 = *(short *)(unaff_s0 + 0x4a) + 0x100;
  *(short *)(unaff_s0 + 0x4a) = sVar1;
  if (0xfff < sVar1) {
    *(undefined2 *)(unaff_s0 + 0x4a) = 0x1000;
  }
  *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x4a) * 0x100;
  if (*(char *)(unaff_s0 + 0x29) != '\0') {
    *(undefined2 *)(unaff_s0 + 0x62) = 1;
    *(undefined1 *)(unaff_s0 + 0x46) = 0;
    *(undefined2 *)(unaff_s0 + 0x44) = 0x800;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

