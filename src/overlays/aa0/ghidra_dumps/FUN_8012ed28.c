// FUN_8012ed28

void FUN_8012ed28(int param_1,short param_2)

{
  int iVar1;
  int in_v1;
  int unaff_s0;
  
  if (in_v1 != param_1) {
    if (((*(short *)(unaff_s0 + 0x42) == param_1) && (*(char *)(unaff_s0 + 1) != '\0')) &&
       (param_2 == 0)) {
      func_0x8004ed94(0x23,0x41);
    }
    if (*(char *)(unaff_s0 + 3) != '\x03') {
      func_0x8009a450();
      return;
    }
  }
  *(undefined2 *)(*(int *)(unaff_s0 + (*(byte *)(unaff_s0 + 9) - 1) * 4 + 0xc0) + 0x14) = 0xffe8;
  *(undefined1 *)(unaff_s0 + 0x46) = 0xff;
  if ((*(char *)(unaff_s0 + 1) != '\0') && (iVar1 = func_0x80072ddc(), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801234a4;
    *(undefined2 *)(iVar1 + 0x48) =
         *(undefined2 *)(*(int *)(unaff_s0 + (*(byte *)(unaff_s0 + 9) - 1) * 4 + 0xc0) + 0x2c);
    *(short *)(iVar1 + 0x4a) =
         *(short *)(*(int *)(unaff_s0 + (*(byte *)(unaff_s0 + 9) - 1) * 4 + 0xc0) + 0x30) + -0x8c;
    *(undefined2 *)(iVar1 + 0x4c) =
         *(undefined2 *)(*(int *)(unaff_s0 + (*(byte *)(unaff_s0 + 9) - 1) * 4 + 0xc0) + 0x34);
  }
  return;
}

