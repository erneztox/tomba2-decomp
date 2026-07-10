// FUN_8005950c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8005950c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  uVar3 = _DAT_800ecf54;
  uVar2 = _DAT_800e7e68;
  _DAT_800e7e68 = uVar2;
  _DAT_800ecf54 = uVar3;
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
    FUN_80058648(param_1,0);
    break;
  case 1:
    if (DAT_1f800230 != '\0') {
      _DAT_800ecf54 = _DAT_800ecf54 & ~_DAT_1f800174;
      _DAT_800e7e68 = _DAT_800e7e68 & ~_DAT_1f800174;
    }
    if ((DAT_800bf80f != '\0') || (DAT_1f800137 != '\0')) {
      _DAT_800e7e68 = 0;
      _DAT_800ecf54 = 0;
    }
    FUN_80055c9c(param_1,(int)*(short *)(param_1 + 0x140));
    FUN_80058918(param_1);
    if (*(char *)(param_1 + 0x146) == '\0') {
      DAT_1f800232 = 1;
    }
    FUN_800597ac(param_1);
    FUN_80053fdc(param_1,0);
    _DAT_800e7e68 = uVar2;
    _DAT_800ecf54 = uVar3;
    break;
  case 2:
    *(undefined1 *)(param_1 + 0x17b) = 1;
    FUN_80067ca4(param_1);
    goto LAB_800596d0;
  case 4:
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0x7f;
    if (DAT_1f800137 == '\0') {
      _DAT_800e7e68 = 0;
      _DAT_800ecf54 = 0;
    }
    else {
      _DAT_800e7e68 = _DAT_1f800166;
      _DAT_800ecf54 = _DAT_1f800190;
    }
    FUN_80055c9c(param_1,(int)*(short *)(param_1 + 0x140));
    FUN_80058f5c(param_1);
    FUN_800597ac(param_1);
    FUN_80053e50(param_1);
    _DAT_800e7e68 = uVar2;
    _DAT_800ecf54 = uVar3;
    break;
  case 5:
    func_0x8018bd30(param_1);
    goto LAB_800596d0;
  case 6:
    func_0x8018be40(param_1);
LAB_800596d0:
    FUN_800597ac(param_1);
    break;
  case 7:
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 1) {
      iVar4 = FUN_80045580(1);
      if (iVar4 != 0) {
LAB_80059738:
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      }
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        FUN_8001cf2c();
        goto LAB_80059738;
      }
    }
    else if ((bVar1 == 2) && (DAT_1f80019b != '\0')) {
      DAT_800bf89c = 4;
      FUN_80042310();
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      iVar4 = _DAT_1f800138;
      *(undefined2 *)(_DAT_1f800138 + 0x4c) = 2;
      *(undefined2 *)(iVar4 + 0x4e) = 1;
    }
    FUN_80076d68(param_1);
  }
  return;
}

