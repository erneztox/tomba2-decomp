// FUN_8008c294

void FUN_8008c294(char param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [16];
  
  DAT_800ac318 = param_2;
  if (param_1 == '\x01') {
    if (0 < DAT_800ac2f8) {
      if (DAT_800ac2f4 == 0x200) {
        if ((DAT_800abf28 & 1) == 0) {
          FUN_80089f88(auStack_20,3);
        }
        else {
          FUN_80089fc8(0);
          FUN_80089fa8(auStack_20,3);
          FUN_80089fec(0);
          FUN_80089fc8(FUN_8008c508);
        }
        iVar1 = FUN_8008a110(auStack_20);
        if (iVar1 != DAT_800ac304) {
          FUN_8009b9b0(s_CdRead__sector_error_8001c570);
          DAT_800ac2f8 = -1;
        }
      }
      if ((DAT_800abf28 & 1) == 0) {
        FUN_80089f88(DAT_800ac2ec,DAT_800ac2f4);
        DAT_800ac2ec = DAT_800ac2ec + DAT_800ac2f4 * 4;
        DAT_800ac2f8 = DAT_800ac2f8 + -1;
        DAT_800ac304 = DAT_800ac304 + 1;
      }
      else {
        FUN_80089fa8(DAT_800ac2ec,DAT_800ac2f4);
      }
    }
  }
  else {
    DAT_800ac2f8 = -1;
  }
  DAT_800ac2fc = FUN_80085900(0xffffffff);
  if (DAT_800ac2f8 < 0) {
    FUN_8008c5d8(1);
  }
  iVar1 = FUN_80085900(0xffffffff);
  if (DAT_800ac300 + 0x4b0 < iVar1) {
    DAT_800ac2f8 = -1;
  }
  if ((DAT_800ac2f8 == 0) || (iVar1 = FUN_80085900(0xffffffff), DAT_800ac300 + 0x4b0 < iVar1)) {
    FUN_80089b98(DAT_800ac310);
    if ((DAT_800abf28 & 1) != 0) {
      FUN_80089fc8(DAT_800ac314);
    }
    FUN_80089b84(FUN_8008c260);
    FUN_80089ce8(9,0);
    DAT_800ac308 = 1;
    if (DAT_800abf24 != (code *)0x0) {
      uVar2 = 5;
      if (DAT_800ac2f8 == 0) {
        uVar2 = 2;
      }
      (*DAT_800abf24)(uVar2,param_2);
    }
  }
  return;
}

