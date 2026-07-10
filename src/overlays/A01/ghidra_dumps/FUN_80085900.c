// FUN_80085900

uint FUN_80085900(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  do {
  } while (*DAT_800aacac != *DAT_800aacac);
  uVar3 = *DAT_800aacac - DAT_800aacb0 & 0xffff;
  uVar1 = DAT_800abde0;
  if ((-1 < param_1) && (uVar1 = uVar3, param_1 != 1)) {
    uVar3 = DAT_800aacb4;
    if (0 < param_1) {
      uVar3 = (DAT_800aacb4 - 1) + param_1;
    }
    iVar2 = 0;
    if (0 < param_1) {
      iVar2 = param_1 + -1;
    }
    FUN_80085a78(uVar3,iVar2);
    uVar3 = *DAT_800aaca8;
    FUN_80085a78(DAT_800abde0 + 1,1);
    if (((uVar3 & 0x400000) != 0) && (-1 < (int)(uVar3 ^ *DAT_800aaca8))) {
      do {
      } while (((uVar3 ^ *DAT_800aaca8) & 0x80000000) == 0);
    }
    DAT_800aacb4 = DAT_800abde0;
    do {
      DAT_800aacb0 = *DAT_800aacac;
    } while (DAT_800aacb0 != *DAT_800aacac);
  }
  return uVar1;
}

