
int FUN_8007413c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_80072ddc(param_1,0,5,4);
  if (iVar2 != 0) {
    *(code **)(iVar2 + 0x1c) = FUN_8004c930;
    *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    iVar3 = (uint)*(ushort *)(param_1 + 0x84) << 0x10;
    *(short *)(iVar2 + 0x32) =
         *(short *)(param_1 + 0x32) - (short)((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1);
    *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(param_1 + 0x36);
    cVar1 = *(char *)(param_1 + 3);
    *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
    *(char *)(iVar2 + 3) = cVar1 + '+';
  }
  return iVar2;
}

