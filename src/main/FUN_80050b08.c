
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80050b08(void)

{
  uint uVar1;
  undefined1 local_28 [8];
  
  FUN_80089788();
  FUN_80085b20();
  FUN_800898a0();
  FUN_80080bf0(3);
  FUN_80080d64(0);
  FUN_80080ed4(1);
  FUN_800865f0(0);
  FUN_80050a0c();
  FUN_800509b4();
  FUN_80050a80();
  FUN_80096a70();
  FUN_80099310(0x1010);
  FUN_800991b0(0x20000);
  FUN_800993a0(1);
  local_28[0] = 0x80;
  FUN_80089bac(0xe,local_28,0);
  FUN_80085900(3);
  FUN_80075130();
  FUN_8009c620(0);
  FUN_8001cc00();
  FUN_800520e0();
  FUN_80085900(1);
  FUN_80051e00();
  FUN_80051f14(0,FUN_800499e8);
  FUN_80085bb0(&LAB_800506b4);
  uVar1 = (uint)DAT_1f800135;
  _DAT_800bf544 = (1 - uVar1) * 0x14000 + 0x800bfe68;
LAB_80050c6c:
  _DAT_800ed8c8 = uVar1 * 0x2070 + -0x7ff17f58;
  do {
    FUN_80081458(_DAT_800ed8c8,0x800);
    do {
      while( true ) {
        while( true ) {
          do {
            _DAT_800e809c = 0;
            _DAT_800bf4f4 = _DAT_800bf544;
            _DAT_800bf544 = (uint)DAT_1f800135 * 0x14000 + 0x800bfe68 & 0xffffff;
            FUN_800788ac();
            FUN_80051e60();
            FUN_80080f6c(0);
            do {
            } while (_DAT_800e809c < DAT_1f800235);
            FUN_800506d0();
          } while (DAT_1f80019c == 1);
          if (1 < DAT_1f80019c) break;
          if (DAT_1f80019c == 0) {
            FUN_8008179c(_DAT_800ed8c8 + 0x2000);
            FUN_800815d0(_DAT_800ed8c8 + 0x2014);
            FUN_80081560(_DAT_800ed8c8 + 0x1ffc);
            DAT_1f800135 = 1 - DAT_1f800135;
            uVar1 = (uint)DAT_1f800135;
            goto LAB_80050c6c;
          }
        }
        if (DAT_1f80019c != 2) break;
        FUN_8008179c(_DAT_800ed8c8 + 0x2000);
        DAT_1f80019c = 1;
        DAT_1f800135 = 1 - DAT_1f800135;
        _DAT_800ed8c8 = (uint)DAT_1f800135 * 0x2070 + -0x7ff17f58;
      }
    } while (DAT_1f80019c != 3);
  } while( true );
}

