// FUN_80090750

/* WARNING: Removing unreachable block (ram,0x80090868) */
/* WARNING: Removing unreachable block (ram,0x800908b4) */

void FUN_80090750(int param_1)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar2 = 0x3e6;
  do {
    bVar1 = -1 < iVar2;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  uVar5 = 0xf2000002;
  uVar4 = 0x44e8;
  cRam800ac436 = '\x06';
  cRam800ac434 = '\0';
  cRam800ac435 = '\0';
  DAT_800ac430 = 0;
  if (DAT_800ac424 == 2) goto LAB_800908c0;
  if (DAT_800ac424 < 3) {
    if (DAT_800ac424 == 0) {
      DAT_800ac430 = 0;
      cRam800ac434 = 0;
      cRam800ac435 = 0;
      cRam800ac436 = 0x7f;
      return;
    }
  }
  else {
    if (DAT_800ac424 == 3) {
      uVar4 = 0x89d0;
      goto LAB_800908c0;
    }
    if (DAT_800ac424 == 5) {
      cRam800ac436 = '\0';
      if (param_1 == 0) {
        cRam800ac434 = '\x01';
      }
      else {
        uVar5 = 0xf2000003;
        uVar4 = 1;
      }
      goto LAB_800908c0;
    }
  }
  if (DAT_800ac428 != 0) {
    DAT_800ac430 = 0;
    cRam800ac434 = 0;
    cRam800ac435 = 0;
    cRam800ac436 = 6;
    return;
  }
  if (DAT_800ac424 < 0x46) {
    uVar4 = 0x204cc0 / DAT_800ac424;
    if (DAT_800ac424 == 0) {
      trap(0x1c00);
    }
    cRam800ac435 = '\x01';
  }
  else {
    uVar4 = 0x409980 / DAT_800ac424;
    if (DAT_800ac424 == 0) {
      trap(0x1c00);
    }
  }
LAB_800908c0:
  if (cRam800ac434 == '\0') {
    FUN_80080890();
    FUN_80090b98(uVar5);
    FUN_80090a60(uVar5,uVar4 & 0xffff,0x1000);
    iVar2 = (int)cRam800ac436;
    if (iVar2 == 0) {
      DAT_800ac430 = FUN_80085b50(0,0);
      iVar2 = (int)cRam800ac436;
      pcVar3 = FUN_800909c0;
    }
    else {
      pcVar3 = FUN_80090a0c;
      if (cRam800ac435 == '\0') {
        pcVar3 = (code *)PTR_FUN_800ac42c;
      }
    }
    FUN_80085b50(iVar2,pcVar3);
  }
  else {
    FUN_80080890();
    FUN_80085bb0(PTR_FUN_800ac42c);
  }
  FUN_800808a0();
  return;
}

