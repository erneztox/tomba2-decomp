// FUN_80056f3c

void FUN_80056f3c(int param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x104);
  iVar4 = *(int *)(param_1 + 0x108);
  iVar3 = 0x1b - (uint)*(byte *)(param_1 + 0x178);
  if (iVar3 < 0) {
    *(undefined2 *)(iVar4 + 10) = 0;
    *(undefined2 *)(iVar5 + 10) = 0;
    uVar2 = *(short *)(iVar4 + 0x38) - 0x200;
    *(ushort *)(iVar4 + 0x38) = uVar2;
    if ((int)((uint)uVar2 << 0x10) < 1) {
      *(undefined2 *)(iVar4 + 0x38) = 0;
      *(undefined1 *)(param_1 + 0x179) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x179) = 2;
    }
    uVar1 = *(undefined2 *)(iVar4 + 0x38);
    *(undefined2 *)(iVar4 + 0x3c) = uVar1;
    *(undefined2 *)(iVar4 + 0x3a) = uVar1;
    *(undefined2 *)(iVar5 + 0x38) = uVar1;
    *(undefined2 *)(iVar5 + 0x3a) = *(undefined2 *)(iVar4 + 0x38);
    *(undefined2 *)(iVar5 + 0x3c) = *(undefined2 *)(iVar4 + 0x38);
    return;
  }
  if (6 < iVar3) {
    *(undefined2 *)(iVar4 + 10) = 0xd80;
    *(undefined2 *)(iVar5 + 10) = 0x280;
    uVar2 = *(short *)(iVar4 + 0x38) + 0x200;
    *(ushort *)(iVar4 + 0x38) = uVar2;
    if (0xfff < uVar2) {
      *(undefined2 *)(iVar4 + 0x38) = 0x1000;
    }
    uVar1 = *(undefined2 *)(iVar4 + 0x38);
    *(undefined2 *)(iVar4 + 0x3c) = uVar1;
    *(undefined2 *)(iVar4 + 0x3a) = uVar1;
    *(undefined2 *)(iVar5 + 0x38) = uVar1;
    *(undefined2 *)(iVar5 + 0x3a) = *(undefined2 *)(iVar4 + 0x38);
    *(undefined2 *)(iVar5 + 0x3c) = *(undefined2 *)(iVar4 + 0x38);
    *(undefined1 *)(param_1 + 0x179) = 1;
    return;
  }
  *(short *)(iVar5 + 10) = (short)iVar3 * 0x6a;
  *(ushort *)(iVar4 + 10) = (short)iVar3 * -0x6a & 0xfff;
  *(undefined1 *)(param_1 + 0x179) = 2;
  return;
}

