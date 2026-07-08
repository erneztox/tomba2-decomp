
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003fc00(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  FUN_8004766c();
  do {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 10;
    iVar2 = FUN_80049250(param_1,0,
                         (int)(((uint)*(ushort *)(param_1 + 0x86) -
                               (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
  } while (iVar2 == 0);
  FUN_80048750(param_1);
  uVar1 = _DAT_1f8001a2;
  *(undefined2 *)(param_1 + 0x56) = _DAT_1f8001a0;
  *(undefined2 *)(param_1 + 0x58) = uVar1;
  return;
}

