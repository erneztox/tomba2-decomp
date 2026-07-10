// FUN_80095c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_80095c40(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  bVar4 = 0;
  bVar2 = 0;
  if ('\0' < DAT_80105cf8) {
    iVar1 = 0;
    bVar3 = bVar4;
    do {
      iVar1 = (DAT_80105cff * 0x10 + (iVar1 >> 0x18)) * 0x20 + _DAT_80105ce8;
      bVar4 = bVar3;
      if (((int)(uint)*(byte *)(iVar1 + 6) <= (int)DAT_80105cfa) &&
         ((int)DAT_80105cfa <= (int)(uint)*(byte *)(iVar1 + 7))) {
        bVar4 = bVar3 + 1;
        *(undefined1 *)(param_2 + (uint)bVar3) = *(undefined1 *)(iVar1 + 0x16);
        *(byte *)(param_1 + (uint)bVar3) = bVar2;
      }
      bVar2 = bVar2 + 1;
      iVar1 = (uint)bVar2 << 0x18;
      bVar3 = bVar4;
    } while ((char)bVar2 < DAT_80105cf8);
  }
  return bVar4;
}

