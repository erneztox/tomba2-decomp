/**
 * @brief Audio channel config: sets up channel params at DAT_800ac448
 * @note Original: func_80090A60 at 0x80090A60
 */
// Audio_ChannelConfig



s32 FUN_80090a60(uint param_1,s16 param_2,uint param_3)

{
  s32 uVar1;
  int iVar2;
  u16 uVar3;
  
  param_1 = param_1 & 0xffff;
  uVar3 = 0x48;
  if (param_1 < 3) {
    iVar2 = param_1 * 0x10 + DAT_800ac448;
    *(s16 *)(iVar2 + 4) = 0;
    *(s16 *)(iVar2 + 8) = param_2;
    if (param_1 < 2) {
      if ((param_3 & 0x10) != 0) {
        uVar3 = 0x49;
      }
      if ((param_3 & 1) == 0) {
        uVar3 = uVar3 | 0x100;
      }
    }
    else if ((param_1 == 2) && ((param_3 & 1) == 0)) {
      uVar3 = 0x248;
    }
    uVar1 = 1;
    if ((param_3 & 0x1000) != 0) {
      uVar3 = uVar3 | 0x10;
    }
    *(u16 *)(param_1 * 0x10 + DAT_800ac448 + 4) = uVar3;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
