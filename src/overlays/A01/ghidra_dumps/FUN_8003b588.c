// FUN_8003b588

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003b588(void)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  
  bVar4 = DAT_800e7e8d | 2;
  if ((DAT_800e7e8d & 0xd0) == 0) {
    DAT_800e7e8d = 0;
    bVar4 = DAT_800e7e8d;
  }
  else if ((DAT_800e7e8d & 0x20) == 0) {
    if ((DAT_800e7e8d & 0x10) == 0) {
      if ((DAT_800e7e8d & 0x80) == 0) {
        cVar2 = '\0';
        DAT_800e7e8d = bVar4;
      }
      else {
        DAT_800e7e8d = bVar4;
        iVar3 = FUN_80083e80((DAT_1f800247 & 0xf) << 7);
        cVar2 = (char)((iVar3 << 0x10) >> 0x16) + '\x10';
      }
      DAT_800e7e98 = cVar2 + ' ';
    }
    else {
      if (((DAT_1f800247 & 0x30) == 0) && (1 < (DAT_1f800247 & 3))) {
        DAT_800e7e98 = -0x30;
        DAT_800e7e99 = 0xd0;
        DAT_800e7e9a = 0xd0;
        goto LAB_8003b69c;
      }
      if ((DAT_800e7e8d & 0x80) == 0) {
        DAT_800e7e99 = 0x20;
        if ((DAT_800e7e8d & 0x40) == 0) {
          DAT_800e7e99 = 0x80;
          DAT_800e7e98 = -0x80;
          DAT_800e7e9a = DAT_800e7e99;
        }
        else {
          DAT_800e7e98 = ' ';
          DAT_800e7e9a = DAT_800e7e99;
        }
        goto LAB_8003b69c;
      }
      DAT_800e7e8d = bVar4;
      iVar3 = FUN_80083e80((DAT_1f800247 & 0xf) << 7);
      DAT_800e7e98 = (char)((iVar3 << 0x10) >> 0x16) + '0';
    }
    DAT_800e7e99 = 0x20;
    bVar4 = DAT_800e7e8d;
    DAT_800e7e9a = DAT_800e7e99;
  }
LAB_8003b69c:
  DAT_800e7e8d = bVar4;
  FUN_800597ac(&DAT_800e7e80);
  uVar1 = DAT_800e7e88;
  if (DAT_800e7e81 != '\0') {
    if (((_DAT_800e7ffe & 0x20) != 0) && (DAT_800e7ff9 != '\0')) {
      DAT_800e7e88 = DAT_800e7e89;
    }
    FUN_8003cca4(&DAT_800e7e80);
  }
  DAT_800e7e88 = uVar1;
  return;
}

