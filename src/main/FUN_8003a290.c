
void FUN_8003a290(int param_1,short *param_2)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_2 + 0x1f);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      if (*(char *)((int)param_2 + 0x3f) != '\0') {
        return;
      }
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined1 *)(param_2 + 0x1f) = 1;
    iVar4 = FUN_8003a1e4(param_1,param_2);
    param_2[8] = 0;
    param_2[0xb] = (short)((iVar4 << 4) / 0x18);
    uVar2 = FUN_8009a450();
    param_2[9] = (uVar2 & 0xf) - 0xc0;
    uVar2 = FUN_8009a450();
    param_2[4] = (uVar2 & 0x3f) << 6;
  }
  *param_2 = param_2[8] >> 4;
  param_2[8] = param_2[8] + param_2[0xb];
  param_2[1] = param_2[1] + (param_2[9] >> 4);
  param_2[9] = param_2[9] + 0x10;
  param_2[4] = param_2[4] + 0x80;
  if (-1 < param_2[1]) {
    sVar3 = FUN_8003a1e4(param_1,param_2);
    *param_2 = sVar3;
    param_2[4] = 0;
    *(char *)(param_2 + 0x1f) = (char)param_2[0x1f] + '\x01';
  }
  return;
}

