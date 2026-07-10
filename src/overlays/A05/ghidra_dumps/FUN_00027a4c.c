// FUN_00027a4c

int FUN_00027a4c(int param_1)

{
  undefined1 unaff_s0;
  undefined4 unaff_s1;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0x801300f4;
    *(undefined1 *)(param_1 + 3) = 5;
    *(undefined1 *)(param_1 + 0x5e) = unaff_s0;
    *(undefined4 *)(param_1 + 0x10) = unaff_s1;
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
  }
  return param_1;
}

