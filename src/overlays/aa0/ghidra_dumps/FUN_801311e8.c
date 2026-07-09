// FUN_801311e8

void FUN_801311e8(int param_1)

{
  short sVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  
  *(undefined2 *)(param_1 + 0x60) = 0xf6d2;
  *(undefined2 *)(param_1 + 0x62) = 0xfab0;
  *(undefined2 *)(param_1 + 100) = 0xfb96;
  *(undefined2 *)(param_1 + 0x66) = 0x1e0;
  *(undefined2 *)(param_1 + 0x68) = 0xf878;
  *(undefined2 *)(param_1 + 0x50) = 0x980;
  *(undefined4 *)(param_1 + 0x2c) = 0x24c30000;
  *(undefined4 *)(param_1 + 0x34) = 0x14f10000;
  iVar4 = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(int *)(param_1 + 0x30) = (int)*(short *)(param_1 + 0x60) << 0x10;
  if (*(char *)(param_1 + 8) != '\0') {
    puVar3 = (undefined2 *)&DAT_8014aa58;
    iVar2 = param_1;
    do {
      *(short *)(*(int *)(iVar2 + 0xc0) + 6) = (short)iVar4 + -1;
      **(undefined2 **)(iVar2 + 0xc0) = 0;
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 2) = *puVar3;
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 4) = puVar3[1];
      *(undefined4 *)(*(int *)(iVar2 + 0xc0) + 8) = 0;
      *(undefined4 *)(*(int *)(iVar2 + 0xc0) + 0xc) = 0;
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 0x14) = 0xffff;
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 0x10) = 0xfffe;
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 0x16) = 0;
      puVar3 = puVar3 + 2;
      *(char *)(*(int *)(iVar2 + 0xc0) + 0x3e) = (char)iVar4;
      *(undefined1 *)(*(int *)(iVar2 + 0xc0) + 0x3f) = 0;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 8));
  }
  if (*(char *)(param_1 + 3) == '\0') {
    FUN_8013a2dc();
    return;
  }
  sVar1 = *(short *)(param_1 + 0x62);
  do {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
    func_0x800517f8(param_1);
    FUN_80139c2c(param_1);
  } while ((int)*(short *)(param_1 + 0x32) < (int)sVar1);
  *(int *)(param_1 + 0x30) = (int)sVar1 << 0x10;
  return;
}

