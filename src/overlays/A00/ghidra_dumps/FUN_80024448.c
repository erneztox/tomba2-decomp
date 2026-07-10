// FUN_80024448

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80024448(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x25;
  if (-1 < *(short *)(param_1 + 0x17e)) {
    uVar3 = 0x4a;
  }
  *(undefined1 *)(param_1 + 0x17d) = 0;
  iVar2 = FUN_80046a44(param_1,(int)*(short *)(param_1 + 0x66),(int)-*(short *)(param_1 + 0x68),
                       uVar3);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    *(byte *)(param_1 + 0x17d) = (byte)((ushort)_DAT_1f8001a6 >> 0xb) & 3;
    FUN_80048654(param_1);
    sVar1 = _DAT_1f8001a0;
    *(short *)(param_1 + 0x140) = _DAT_1f8001a0;
    if (*(char *)(param_1 + 0x147) == '\0') {
      *(short *)(param_1 + 0x56) = sVar1;
    }
    else {
      *(ushort *)(param_1 + 0x56) = sVar1 - 0x800U & 0xfff;
    }
    if ((iVar2 == 2) && ((*(byte *)(param_1 + 0x17d) & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x164) = 7;
      FUN_80024af0(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0x164) = 4;
    }
    uVar3 = 1;
    *(char *)(param_1 + 0x15c) = (char)iVar2;
    _DAT_1f800084 = 0;
  }
  return uVar3;
}

