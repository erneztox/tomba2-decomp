// FUN_080159d8

void FUN_080159d8(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_2 + 0x29);
  iVar3 = func_0x0010af84();
  if (iVar3 == 1) {
    if (*(int *)(param_1 + 0x158) != 0) {
      return;
    }
    if (*(char *)(param_2 + 2) == '0') {
      return;
    }
    if ((*(byte *)(param_2 + 0x29) & 1) != 0) {
      return;
    }
    bVar2 = *(byte *)(param_1 + 0x5f);
    if (((bVar2 & 1) == *(byte *)(param_1 + 0x147)) && (*(char *)(param_1 + 0x46) == -0x3a)) {
      *(byte *)(param_1 + 0x5f) = bVar2 | 8;
      *(byte *)(param_2 + 0x5f) = *(byte *)(param_2 + 0x5f) | ('\x03' - (bVar2 & 1)) * '\x10' | 0x80
      ;
      DAT_800bf81e = 0;
    }
  }
  *(byte *)(param_2 + 0x29) = *(byte *)(param_2 + 0x29) | bVar1;
  return;
}

