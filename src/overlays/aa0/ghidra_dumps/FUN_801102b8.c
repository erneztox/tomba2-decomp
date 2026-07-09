// FUN_801102b8

void FUN_801102b8(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  iVar3 = *(int *)(param_1 + 0x10);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    func_0x8004766c(param_1);
    iVar3 = func_0x80049250(param_1,0,
                            (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                  (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
    if (iVar3 != 0) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
  }
  else if ((bVar1 < 2) && (bVar1 == 0)) {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(*(short *)(param_1 + 0x40) + -0x7feb7a10);
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar3 + 0x2c);
    *(short *)(param_1 + 0x32) = *(short *)(iVar3 + 0x30) + 0xf0;
    uVar2 = *(undefined2 *)(iVar3 + 0x34);
    *(undefined2 *)(param_1 + 0x4a) = 0x1000;
    *(undefined2 *)(param_1 + 0x50) = 0x200;
    *(undefined2 *)(param_1 + 0x36) = uVar2;
    FUN_80119340();
    return;
  }
  return;
}

