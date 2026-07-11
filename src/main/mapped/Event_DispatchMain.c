/**
 * @brief Event dispatch main: DAT_80100660 state machine
 * @note Original: func_800346BC at 0x800346BC
 */
// Event_DispatchMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_800346bc(void)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  
  bVar2 = DAT_80100660;
  if (DAT_80100660 != 1) {
    if ((DAT_80100660 < 2) && (DAT_80100660 == 0)) {
      if (DAT_80100661 == 0) {
        FUN_80074bf8(0);
        DAT_800bf81e = 2;
        DAT_80100661 = DAT_80100661 + 1;
        _DAT_80100664 = _DAT_800ecf58;
        FUN_800782f0(DAT_800bf870,DAT_800bf871);
      }
      else if (DAT_80100661 == 1) {
        DAT_80100660 = DAT_80100661;
        DAT_80100661 = 0;
        DAT_80100669 = 0;
        FUN_800345d8(&DAT_80100660);
        FUN_80036240(&DAT_80100660);
        FUN_800384ec(&DAT_80100660);
        FUN_8003989c(&DAT_80100660);
      }
    }
    goto LAB_80034968;
  }
  FUN_80034548(&DAT_80100660);
  FUN_80037e44(&DAT_80100660);
  FUN_80038a00(&DAT_80100660);
  FUN_80039110(&DAT_80100660);
  FUN_80039bcc(&DAT_80100660);
  if (DAT_80100669 != 0) {
    if (DAT_80100669 == 1) {
      if ((_DAT_800e7e68 & 0x1000) == 0) {
        if (DAT_80100668 == 1) {
          FUN_800387e0(&DAT_80100660);
        }
        else if (DAT_80100668 < 2) {
          if (DAT_80100668 == 0) {
            FUN_80036dfc(&DAT_80100660);
          }
        }
        else if ((DAT_80100668 != 2) && (DAT_80100668 == 3)) {
          FUN_800399fc(&DAT_80100660);
        }
      }
      else {
        DAT_80100660 = 2;
        FUN_80034670(&DAT_80100660);
      }
    }
    goto LAB_80034968;
  }
  if ((_DAT_800e7e68 & 0x3000) != 0) {
    DAT_80100660 = 2;
    FUN_80074bf8(1);
    goto LAB_80034968;
  }
  if ((_DAT_800e7e68 & 0x4040) == 0) {
    uVar3 = 0x14;
    if ((_DAT_800e7e68 & 0x8000) == 0) {
      if ((_DAT_800e7e68 & 0x20) == 0) {
        if ((_DAT_800e7e68 & 0x80) == 0) goto LAB_80034968;
        if (DAT_80100668 == 0) goto LAB_800348c0;
        DAT_80100668 = DAT_80100668 - 1;
        FUN_800345d8(&DAT_80100660);
        uVar3 = 0x15;
      }
      else if (DAT_80100668 < 3) {
        DAT_80100668 = DAT_80100668 + 1;
        FUN_800345d8(&DAT_80100660);
        uVar3 = 0x15;
      }
      else {
LAB_800348c0:
        uVar3 = 0x12;
      }
    }
  }
  else if (DAT_80100668 == 2) {
    uVar3 = 0x14;
  }
  else if (DAT_80100668 == 3) {
    uVar3 = 0x14;
    if (DAT_80100683 != '\0') {
      DAT_80100669 = bVar2;
      uVar3 = 0x11;
    }
  }
  else {
    DAT_80100669 = bVar2;
    uVar3 = 0x11;
  }
  FUN_80074590(uVar3,0,0);
LAB_80034968:
  bVar1 = DAT_80100660 == 2;
  if (bVar1) {
    FUN_80034338(&DAT_80100660);
  }
  return bVar1;
}
