/**
 * @brief Audio system config: sets DAT_800ac424, checks 0x1000 flag
 * @note Original: func_80091D70 at 0x80091D70
 */
// Audio_SystemConfig



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80091d70(uint param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_80086604();
  bVar1 = (param_1 & 0x1000) != 0;
  DAT_800ac424 = param_1;
  if (bVar1) {
    DAT_800ac424 = param_1 & 0xfff;
  }
  DAT_800ac428 = (uint)bVar1;
  if (5 < (int)DAT_800ac424) {
    _DAT_80104c2c = DAT_800ac424;
    return;
  }
  switch(DAT_800ac424) {
  case 0:
    goto joined_r0x80091e58;
  case 1:
    DAT_800ac424 = 0x3c;
    _DAT_80104c2c = 0x3c;
    if (iVar2 == 0) {
      DAT_800ac424 = 5;
    }
    break;
  case 2:
    _DAT_80104c2c = 0xf0;
    break;
  case 3:
    _DAT_80104c2c = 0x78;
    break;
  case 4:
    _DAT_80104c2c = 0x32;
    DAT_800ac424 = 5;
    if (iVar2 != 1) {
      DAT_800ac424 = 0x32;
    }
    break;
  case 5:
joined_r0x80091e58:
    if ((iVar2 == 0) || (iVar2 != 1)) {
switchD_80091dec_default:
      _DAT_80104c2c = 0x3c;
    }
    else {
      _DAT_80104c2c = 0x32;
    }
    break;
  default:
    goto switchD_80091dec_default;
  }
  return;
}
