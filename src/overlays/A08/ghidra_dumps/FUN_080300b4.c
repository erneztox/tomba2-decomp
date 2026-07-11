// FUN_080300b4

int FUN_080300b4(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = func_0x00072ddc(param_1,0,5,4);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x8004c930;
    *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    iVar3 = (uint)*(ushort *)(param_1 + 0x84) << 0x10;
    *(short *)(iVar2 + 0x32) =
         *(short *)(param_1 + 0x32) - (short)((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1);
    uVar1 = *(undefined2 *)(param_1 + 0x36);
    *(undefined1 *)(iVar2 + 3) = 0x27;
    *(undefined2 *)(iVar2 + 0x36) = uVar1;
  }
  return iVar2;
}

