// FUN_80120890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80120890(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 8) = 4;
  if (3 < _DAT_800ed098) {
    *(undefined1 *)(param_1 + 9) = 4;
    *(undefined1 *)(param_1 + 0xb) = 5;
    iVar3 = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    iVar2 = param_1;
    if (*(char *)(param_1 + 8) != '\0') {
      do {
        iVar1 = func_0x8007aae8();
        *(int *)(iVar2 + 0xc0) = iVar1;
        *(undefined2 *)(iVar1 + 6) = 0xffff;
        **(undefined2 **)(iVar2 + 0xc0) = 0;
        *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 2) = 0x40;
        *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 4) = 0;
        *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 8) = 0x400;
        *(short *)(*(int *)(iVar2 + 0xc0) + 10) = (short)(iVar3 << 10);
        *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 0xc) = 0;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(*(int *)(iVar2 + 0xc0) + 0x40) = 0;
        *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 0x3a) = 0x369;
        iVar2 = iVar2 + 4;
      } while (iVar3 < (int)(uint)*(byte *)(param_1 + 8));
    }
    *(undefined2 *)(param_1 + 0x60) = 0xd;
    *(undefined2 *)(param_1 + 0x62) = 0x3cf7;
    *(undefined2 *)(param_1 + 100) = 0x88d8;
    *(undefined2 *)(param_1 + 0x66) = 0x88df;
    *(undefined2 *)(param_1 + 0x68) = 0x97d8;
    *(undefined2 *)(param_1 + 0x6a) = 0x97df;
    *(undefined2 *)(param_1 + 0x6c) = 0x28;
    *(undefined2 *)(param_1 + 0x6e) = 0x50;
    *(undefined2 *)(param_1 + 0x70) = 0xfff8;
    return;
  }
  *(undefined1 *)(param_1 + 4) = 3;
  FUN_8012996c();
  return;
}

