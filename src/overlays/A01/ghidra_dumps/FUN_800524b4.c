// FUN_800524b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_800524b4(short param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  
  if (DAT_800bf4f8 == '\0') {
    _DAT_800ecf4a = FUN_80087bb8(0,2,0);
    uVar4 = ~_DAT_800bf4fa;
    _DAT_800ecf48 = DAT_800bf4f9 >> 4 & 7;
    if (_DAT_800ecf48 == 4) {
      DAT_800ecf50 = 0;
      DAT_800ecf51 = 0;
    }
    else {
      if (_DAT_800ecf48 != 7) {
        return 0;
      }
      if (param_1 == 0) {
        if ((uVar4 & 0xf0) == 0) {
          uVar1 = FUN_80052144(DAT_800bf4fe,0);
          uVar2 = FUN_80052144(DAT_800bf4ff,1);
          uVar4 = uVar4 & 0xff0f | uVar1 | uVar2;
        }
        DAT_800ecf50 = FUN_80052198(DAT_800bf4fe,0x800ecf52);
        DAT_800ecf51 = FUN_80052198(DAT_800bf4ff,0x800ecf53);
      }
    }
    iVar3 = (int)(short)uVar4;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

