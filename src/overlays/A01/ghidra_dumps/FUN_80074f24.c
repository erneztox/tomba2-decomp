// FUN_80074f24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80074f24(uint param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  
  if ((DAT_1f800137 != '\x01') && (DAT_800bf870 != '\x15')) {
    if ((DAT_800bf870 == '\x0f') || (uVar2 = 0x2a, DAT_800bf873 == '\0')) {
      if ((((param_1 & 0xff) == 6) && (8 < DAT_800bf871)) && (DAT_800bf871 < 0xf)) {
        uVar2 = 10;
        if (((int)(uint)_DAT_800bfe56 >> 6 & 1U) != 0) {
          uVar2 = 0x11;
        }
      }
      else {
        if (((int)(uint)_DAT_800bfe56 >> (param_1 & 0x1f) & 1U) == 0) {
          puVar1 = &DAT_800a4f50;
        }
        else {
          puVar1 = &DAT_800a4f68;
        }
        uVar2 = puVar1[param_1 & 0xff];
      }
    }
    FUN_800750d8(uVar2,1);
    DAT_800be22b = 0;
    DAT_1f80023b = uVar2;
  }
  return;
}

