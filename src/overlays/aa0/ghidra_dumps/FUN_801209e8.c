// FUN_801209e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801209e8(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int unaff_s0;
  int iVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 8) = 4;
  iVar3 = *(int *)(param_1 + 0x10);
  if (3 < _DAT_800ed098) {
    *(undefined1 *)(param_1 + 9) = 4;
    *(undefined1 *)(param_1 + 0xb) = 5;
    iVar5 = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    iVar4 = param_1;
    if (*(char *)(param_1 + 8) != '\0') {
      do {
        iVar5 = iVar5 + 1;
        iVar2 = func_0x8007aae8();
        *(int *)(iVar4 + 0xc0) = iVar2;
        *(undefined2 *)(iVar2 + 6) = 0xffff;
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x3a) = 0x2d3;
        **(undefined2 **)(iVar4 + 0xc0) = **(undefined2 **)(iVar3 + 0xc0);
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 2) = *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 2);
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 4) = *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 4);
        *(short *)(*(int *)(iVar4 + 0xc0) + 8) = -*(short *)(*(int *)(iVar3 + 0xc0) + 8);
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 10) = *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 10);
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0xc) =
             *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 0xc);
        *(undefined4 *)(*(int *)(iVar4 + 0xc0) + 0x40) = 0;
        func_0x80051794(0x1f800000);
        func_0x80084d10((int)*(short *)(*(int *)(iVar3 + 0xc0) + 8),0x1f800000);
        func_0x80084eb0((int)*(short *)(*(int *)(iVar3 + 0xc0) + 10),0x1f800000);
        func_0x80085050((int)*(short *)(*(int *)(iVar3 + 0xc0) + 0xc),0x1f800000);
        _DAT_1f8000c0 = 0;
        _DAT_1f8000c2 = 0x369;
        _DAT_1f8000c4 = 0;
        func_0x800844c0(0x1f800000,&DAT_1f8000c0,&DAT_1f8000c8);
        **(short **)(iVar4 + 0xc0) = **(short **)(iVar4 + 0xc0) + _DAT_1f8000c8;
        *(short *)(*(int *)(iVar4 + 0xc0) + 2) =
             *(short *)(*(int *)(iVar4 + 0xc0) + 2) + _DAT_1f8000ca;
        iVar3 = iVar3 + 4;
        *(short *)(*(int *)(iVar4 + 0xc0) + 4) =
             *(short *)(*(int *)(iVar4 + 0xc0) + 4) + _DAT_1f8000cc;
        iVar4 = iVar4 + 4;
      } while (iVar5 < (int)(uint)*(byte *)(param_1 + 8));
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
  sVar1 = func_0x80085690(-((int)((iVar3 - (uint)*(ushort *)(unaff_s0 + 0x36)) * 0x10000) >> 0x10),
                          (int)(((uint)_DAT_00000031 - (uint)*(ushort *)(unaff_s0 + 0x2e)) * 0x10000
                               ) >> 0x10);
  DAT_00000049 = func_0x80077768((int)sVar1,(int)_DAT_00000063,0);
  if (DAT_00000049 != '\0') {
    _DAT_00000047 = 0xf800;
    FUN_8013bcb4();
    return;
  }
  _DAT_00000047 = 0x800;
  FUN_8013bcb4();
  return;
}

