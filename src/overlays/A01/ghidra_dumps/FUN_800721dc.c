// FUN_800721dc

void FUN_800721dc(int param_1,undefined2 param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    uVar2 = *(short *)(param_1 + 0x5a) + 0x100U & 0xfff;
    *(ushort *)(param_1 + 0x5a) = uVar2;
    if (uVar2 == 0) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    iVar3 = FUN_80083e80((int)*(short *)(param_1 + 0x5a));
    *(undefined2 *)(param_1 + 0x2e) = param_2;
    iVar3 = iVar3 * *(short *)(param_1 + 0x82) * 8;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      *(undefined2 *)(param_1 + 0x2e) = param_2;
      *(short *)(param_1 + 0x32) = (short)param_3;
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    uVar2 = *(short *)(param_1 + 0x5a) + 0x100U & 0xfff;
    *(ushort *)(param_1 + 0x5a) = uVar2;
    if (uVar2 == 0) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    iVar3 = FUN_80083e80((int)*(short *)(param_1 + 0x5a));
    *(undefined2 *)(param_1 + 0x2e) = param_2;
    iVar3 = iVar3 * *(short *)(param_1 + 0x82) * 0x10;
  }
  *(int *)(param_1 + 0x30) = param_3 * 0x10000 + iVar3;
  return;
}

