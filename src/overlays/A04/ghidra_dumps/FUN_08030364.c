// FUN_08030364

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08030364(int param_1)

{
  ushort uVar1;
  int in_v1;
  int in_t1;
  int unaff_s0;
  short unaff_s3;
  short unaff_s4;
  int unaff_s5;
  int unaff_s6;
  
  if (param_1 == 0) {
    trap(0x1c00);
  }
  if ((param_1 == -1) && (in_t1 == -0x80000000)) {
    trap(0x1800);
  }
  if (param_1 == 0) {
    trap(0x1c00);
  }
  if ((param_1 == -1) && (unaff_s3 * in_v1 == -0x80000000)) {
    trap(0x1800);
  }
  if (param_1 == 0) {
    trap(0x1c00);
  }
  if ((param_1 == -1) && (unaff_s4 * in_v1 == -0x80000000)) {
    trap(0x1800);
  }
  *(short *)(unaff_s0 + 0x2e) = *(short *)(unaff_s0 + 0x2e) + (short)(in_t1 / param_1);
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + (short)((unaff_s3 * in_v1) / param_1);
  *(short *)(unaff_s0 + 0x36) = *(short *)(unaff_s0 + 0x36) + (short)((unaff_s4 * in_v1) / param_1);
  if (unaff_s6 != 0) {
    *(undefined2 *)(unaff_s0 + 0x58) = *(undefined2 *)(*(int *)(unaff_s5 + 0xcc) + 0xc);
    if ((*(byte *)(unaff_s0 + 3) & 0x80) != 0) {
      func_0x000517f8();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x000518fc();
    uVar1 = *(ushort *)(unaff_s0 + 0xb8);
    if (0xc00 < uVar1) {
      *(ushort *)(unaff_s0 + 0xb8) = uVar1 - 0x40;
      if ((ushort)(uVar1 - 0x40) < 0xc00) {
        *(undefined2 *)(unaff_s0 + 0xb8) = 0xc00;
      }
      *(undefined2 *)(unaff_s0 + 0xba) = *(undefined2 *)(unaff_s0 + 0xb8);
      *(undefined2 *)(unaff_s0 + 0xbc) = *(undefined2 *)(unaff_s0 + 0xb8);
    }
  }
  return 0;
}

