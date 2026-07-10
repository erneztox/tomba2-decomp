// FUN_80025d98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80025d98(void)

{
  byte bVar1;
  
  if (((DAT_800ed065 != '\0') &&
      (((DAT_800bf870 != 5 || (2 < DAT_800bf871 - 1)) && (DAT_800bf870 != 3)))) &&
     (((DAT_800bf870 != 0x14 && (DAT_1f800137 != '\x01')) && ((DAT_800bf822 & 4) == 0)))) {
    FUN_80025744(0x800ed058);
  }
  bVar1 = DAT_800ed061 & 3;
  if (bVar1 == 1) {
    if (((DAT_800bf870 != 5) || (2 < DAT_800bf871 - 1)) &&
       ((DAT_800bf870 != 2 && ((DAT_800bf870 != 7 && (DAT_800bf870 != 0x14)))))) {
      if (DAT_800ed059 == '\0') goto LAB_80025fbc;
      goto LAB_80025eac;
    }
  }
  else if ((1 < bVar1) && (bVar1 == 3)) {
LAB_80025eac:
    FUN_80025934(0x800ed058,0,0);
  }
  if ((DAT_800ed059 == '\0') || (DAT_800bf870 == 3)) goto LAB_80025fbc;
  if (DAT_800bf870 < 4) {
    if (DAT_800bf870 == 2) {
      if ((DAT_800bf816 == '\0') && (DAT_800ed060 == '\0')) {
        func_0x80113628(0x800ed058);
      }
      goto LAB_80025fbc;
    }
  }
  else {
    if (DAT_800bf870 == 7) {
      if ((DAT_800bf816 == '\0') && (DAT_800ed060 == '\0')) {
        func_0x801140a0(0x800ed058);
      }
      goto LAB_80025fbc;
    }
    if (DAT_800bf870 == 0x14) goto LAB_80025fbc;
  }
  if ((((_DAT_800bf880 & 0x600) == 0) && ((_DAT_800bf880 & 0x100) == 0)) && (DAT_800bf816 == '\0'))
  {
    FUN_80025b78(0x800ed058);
  }
LAB_80025fbc:
  if ((*(short *)(_DAT_1f800138 + 0x4c) == 6) && (*(short *)(_DAT_1f800138 + 0x4e) != 0)) {
    if (DAT_800bf870 == 5) {
      func_0x801121ac();
    }
    else if (DAT_800bf870 == 0x14) {
      func_0x8010f8cc();
    }
  }
  return;
}

