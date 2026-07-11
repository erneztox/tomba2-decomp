// FUN_08027b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08027b70(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  
  sVar6 = 0;
  if (*(char *)(param_1 + 3) == '\x01') {
    sVar6 = -8;
  }
  iVar5 = *(int *)(param_1 + 0xc0);
  DAT_1f800007 = 0x2d;
  iVar4 = (uint)*(ushort *)(param_1 + 0x6c) << 0x10;
  _DAT_1f800030 = (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
  _DAT_1f800028 = -_DAT_1f800030;
  _DAT_1f800016 = *(undefined2 *)(param_1 + 0x60);
  _DAT_1f80000e = *(undefined2 *)(param_1 + 0x62);
  uVar1 = *(undefined2 *)(param_1 + 0x68);
  uVar2 = *(undefined2 *)(param_1 + 0x6a);
  DAT_1f80000d = (char)((ushort)uVar1 >> 8);
  DAT_1f800015 = (char)((ushort)uVar2 >> 8);
  _DAT_1f80001c = CONCAT11(DAT_1f80000d + '\n',(char)uVar1);
  _DAT_1f800024 = CONCAT11(DAT_1f800015 + '\n',(char)uVar2);
  _DAT_1f80002a = *(undefined2 *)(iVar5 + 0x3a);
  _DAT_1f80002c = 0;
  _DAT_1f800032 = *(undefined2 *)(iVar5 + 0x3a);
  _DAT_1f800034 = 0;
  _DAT_1f80003c = 0x14;
  _DAT_1f80003a = *(short *)(iVar5 + 0x3a) + 0x32;
  _DAT_1f800042 = *(short *)(iVar5 + 0x3a) + 0x32;
  _DAT_1f800044 = 0x14;
  _DAT_1f80000c = uVar1;
  _DAT_1f800014 = uVar2;
  _DAT_1f800038 = _DAT_1f800028;
  _DAT_1f800040 = _DAT_1f800030;
  func_0x0003b320(0x1f800000,&DAT_1f800028,(int)sVar6);
  _DAT_1f80000c = *(undefined2 *)(param_1 + 100);
  _DAT_1f800014 = *(undefined2 *)(param_1 + 0x66);
  _DAT_1f80001c = *(undefined2 *)(param_1 + 0x68);
  _DAT_1f800024 = *(undefined2 *)(param_1 + 0x6a);
  _DAT_1f80003c = 0;
  _DAT_1f800044 = 0;
  _DAT_1f80002a = *(short *)(iVar5 + 0x3a) + -0x50;
  _DAT_1f800032 = *(short *)(iVar5 + 0x3a) + -0x50;
  _DAT_1f80003a = *(short *)(iVar5 + 0x3a);
  _DAT_1f800042 = *(short *)(iVar5 + 0x3a);
  iVar4 = 0;
  uVar3 = *(ushort *)(iVar5 + 0x3a) / 0x50;
  if (uVar3 != 0) {
    do {
      func_0x0003b320(0x1f800000,&DAT_1f800028,0xfffffff8);
      iVar4 = iVar4 + 1;
      _DAT_1f80002a = _DAT_1f80002a + -0x50;
      _DAT_1f800032 = _DAT_1f800032 + -0x50;
      _DAT_1f80003a = _DAT_1f80003a + -0x50;
      _DAT_1f800042 = _DAT_1f800042 + -0x50;
    } while (iVar4 < (int)uVar3);
  }
  func_0x0003b320(0x1f800000,&DAT_1f800028,(int)sVar6);
  return;
}

