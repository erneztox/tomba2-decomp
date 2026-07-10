// FUN_80071768

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80071768(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined **ppuVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = DAT_80016b30;
  local_14 = DAT_80016b34;
  if ((*(char *)(param_1 + 5) == '\0') || (((int)_DAT_800e7ffe & 0x8200U) != 0)) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    DAT_800bf843 = 4;
    if (((DAT_800bf831 & 0x80) != 0) || ((DAT_1f800137 != '\0' && (DAT_800bf80e != '\0')))) {
      if ((DAT_800bf831 & 4) == 0) {
        local_28 = CONCAT22(0xbe,(undefined2)local_28);
        sVar2 = *(short *)((int)&local_18 + (DAT_800bf831 & 3) * 2);
        local_24 = CONCAT22(0x50,(undefined2)local_24);
        if ((DAT_800bf831 & 0x20) != 0) {
          sVar2 = sVar2 + 0x200;
        }
        local_20 = CONCAT22(sVar2,(undefined2)local_20);
      }
      else {
        local_28 = _DAT_800bf824;
        local_24 = _DAT_800bf828;
        local_20 = _DAT_800bf82c;
      }
      sVar2 = _DAT_800e7ed6;
      if ((DAT_800bf831 & 0x10) != 0) {
        sVar2 = _DAT_800e7fc0 + _DAT_800e805a + 0x800;
      }
      if ((DAT_800bf831 & 8) == 0) {
        FUN_8007091c(param_1,(int)sVar2,&local_28);
      }
      else {
        FUN_80070bd0(param_1,(int)sVar2,&local_28,DAT_800bf831 & 0x40);
      }
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      DAT_800bf843 = 0;
      if (DAT_800bf830 == -1) {
        DAT_800bf843 = 0;
        return;
      }
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 5) = 1;
      return;
    }
    if (bVar1 == 2) {
      DAT_800bf843 = 1;
      if (*(byte *)(param_1 + 0xbf) < 10) {
        uVar5 = (uint)*(byte *)(param_1 + 0xbf);
        ppuVar3 = &PTR_FUN_800a4bc0;
      }
      else if (DAT_800bf870 == '\0') {
        ppuVar3 = (undefined **)0x80149e74;
        uVar5 = *(byte *)(param_1 + 0xbf) - 10;
      }
      else {
        if (DAT_800bf870 != '\a') {
          DAT_800bf843 = 1;
          return;
        }
        ppuVar3 = (undefined **)0x80132e78;
        uVar5 = *(byte *)(param_1 + 0xbf) - 10;
      }
      (*(code *)ppuVar3[uVar5])(param_1);
      return;
    }
    if (bVar1 != 3) {
      return;
    }
    DAT_800bf843 = 2;
    iVar4 = FUN_80071260(param_1);
    if (iVar4 == 1) {
      DAT_800bf830 = 0xff;
      DAT_800bf831 = 0xff;
      return;
    }
  }
  FUN_8004190c(param_1);
  return;
}

