// FUN_08027e70

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08027e70(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 8) = 1;
  if (_DAT_800ed098 < 1) {
    *(undefined1 *)(param_1 + 4) = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0xb) = 2;
    *(undefined2 *)(param_1 + 0x60) = 0xf;
    *(undefined2 *)(param_1 + 0x62) = 0x3eff;
    *(undefined2 *)(param_1 + 100) = 0x1c00;
    *(undefined2 *)(param_1 + 0x66) = 0x1c0f;
    *(undefined2 *)(param_1 + 0x68) = 0x2c00;
    *(undefined2 *)(param_1 + 0x6a) = 0x2c0f;
    *(undefined2 *)(param_1 + 0x6c) = 0x50;
    *(undefined1 *)(param_1 + 9) = 1;
    *(undefined2 *)(param_1 + 0x6e) = 0;
    iVar2 = (uint)*(byte *)(param_1 + 3) * 6;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    iVar1 = func_0x0007aae8();
    *(int *)(param_1 + 0xc0) = iVar1;
    *(undefined2 *)(iVar1 + 6) = 0xffff;
    **(undefined2 **)(param_1 + 0xc0) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40) = 0;
    *(undefined2 *)(param_1 + 0x88) = 0;
    *(undefined2 *)(param_1 + 0x8a) = 0;
    *(undefined2 *)(param_1 + 0x8c) = 0;
    *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(iVar2 + -0x7febb024);
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(iVar2 + -0x7febb022);
    *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(iVar2 + -0x7febb020);
    if (*(char *)(param_1 + 3) != '\0') {
      if (*(char *)(param_1 + 3) != '\x01') {
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x118;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = 0x300;
        *(undefined2 *)(param_1 + 0x56) = 0x400;
        return;
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x3500;
    }
    *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) = *(short *)(param_1 + 0x32) + 0x23c0;
    *(short *)(param_1 + 0x32) =
         *(short *)(param_1 + 0x32) - *(short *)(*(int *)(param_1 + 0xc0) + 0x3a);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

