// FUN_801312cc

void FUN_801312cc(int param_1,undefined2 *param_2,int param_3,undefined2 param_4)

{
  short sVar1;
  int in_v0;
  undefined2 in_t0;
  int unaff_s0;
  
  while( true ) {
    *(undefined2 *)(in_v0 + 0x14) = in_t0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x10) = param_4;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x16) = 0;
    *(char *)(*(int *)(param_1 + 0xc0) + 0x3e) = (char)param_3;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0;
    if ((int)(uint)*(byte *)(unaff_s0 + 8) <= param_3 + 1) break;
    *(short *)(*(int *)(param_1 + 0xc4) + 6) = (short)param_3;
    **(undefined2 **)(param_1 + 0xc4) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2) = param_2[2];
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 4) = param_2[3];
    *(undefined4 *)(*(int *)(param_1 + 0xc4) + 8) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0;
    in_v0 = *(int *)(param_1 + 0xc4);
    param_1 = param_1 + 4;
    param_2 = param_2 + 2;
    param_3 = param_3 + 1;
  }
  if (*(char *)(unaff_s0 + 3) == '\0') {
    FUN_8013a2dc();
    return;
  }
  sVar1 = *(short *)(unaff_s0 + 0x62);
  do {
    *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x50) * 0x100;
    func_0x800517f8();
    FUN_80139c2c();
  } while ((int)*(short *)(unaff_s0 + 0x32) < (int)sVar1);
  *(int *)(unaff_s0 + 0x30) = (int)sVar1 << 0x10;
  return;
}

