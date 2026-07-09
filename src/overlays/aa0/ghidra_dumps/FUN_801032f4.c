// FUN_801032f4

void FUN_801032f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x158);
  if (*(char *)(iVar3 + 0xc) != '\x04') {
    if (*(char *)(iVar3 + 0xc) != '\x05') {
      FUN_8010c3f0();
      return;
    }
    if (*(char *)(iVar3 + 2) == '\x02') {
      *(undefined1 *)(param_1 + 0x160) = 0;
      if (param_2 == 0) {
        func_0x80054d14(param_1,0x29,4);
      }
      *(undefined1 *)(param_1 + 7) = 0;
      func_0x80076d68(param_1);
      iVar2 = (int)((*(ushort *)(param_1 + 0x56) + 0x800) * 0x10000) >> 0x10;
      iVar1 = func_0x80083f50(iVar2);
      *(short *)(param_1 + 0x2e) =
           *(short *)(iVar3 + 0x2e) + (short)(iVar1 * *(short *)(param_1 + 0x152) >> 0xc);
      iVar1 = func_0x80083e80(iVar2);
      *(short *)(param_1 + 0x36) =
           *(short *)(iVar3 + 0x36) - (short)(iVar1 * *(short *)(param_1 + 0x152) >> 0xc);
      *(short *)(param_1 + 0x32) = *(short *)(iVar3 + 0x32) + *(short *)(param_1 + 0x156);
      if (*(char *)(iVar3 + 0x5e) == '\x02') {
        *(undefined4 *)(param_1 + 0x158) = 0;
        *(undefined1 *)(param_1 + 0x164) = 0;
        *(undefined2 *)(param_1 + 0x40) = 8;
        func_0x80056d44(param_1,0);
      }
    }
    return;
  }
  if (*(char *)(iVar3 + 2) == '\0') {
    FUN_8010bed0(param_1,iVar3);
    FUN_8010c3f0();
    return;
  }
  if (*(char *)(iVar3 + 2) != '\x01') {
    FUN_8010c3f0();
    return;
  }
  FUN_8010b940(param_1,iVar3);
  FUN_8010c3f0();
  return;
}

