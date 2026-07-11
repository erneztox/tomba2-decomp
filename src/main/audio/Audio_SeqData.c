/**
 * @brief Audio sequence data: processes SEQ data stream
 * @note Original: func_80093650 at 0x80093650
 */
// Audio_SeqData



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80093650(u8 param_1)

{
  uint uVar1;
  int iVar2;
  u16 uVar3;
  int local_60->kind;
  s16 local_58;
  s16 local_56;
  s16 local_4c;
  s32 local_44;
  s16 local_26;
  s16 local_24;
  
  FUN_80099450(0);
  _DAT_80105c90 = 0;
  FUN_80097760(0x20,0x80105dc0);
  uVar3 = 0;
  uVar1 = 0;
  do {
    *(s16 *)(&DAT_80105a28 + uVar1 * 2) = 0;
    uVar3 = uVar3 + 1;
    uVar1 = (uint)uVar3;
  } while (uVar3 < 0xc0);
  uVar3 = 0;
  uVar1 = 0;
  do {
    (&DAT_80105a08)[uVar1] = 0;
    uVar3 = uVar3 + 1;
    uVar1 = (uint)uVar3;
  } while (uVar3 < 0x18);
  _DAT_80105d70 = 0;
  uVar3 = 0;
  uVar1 = 0;
  do {
    *(u8 *)(uVar1 + 0x80105d18) = 0;
    uVar3 = uVar3 + 1;
    uVar1 = (uint)uVar3;
  } while (uVar3 < 0x10);
  DAT_80105cec = param_1;
  if (0x17 < param_1) {
    DAT_80105cec = 0x18;
  }
  uVar1 = 0;
  local_60->flags = 0x60093;
  local_4c = 0x1000;
  local_44 = 0x1000;
  local_26 = 0x80ff;
  local_58 = 0;
  local_56 = 0;
  local_24 = 0x4000;
  if ('\0' < (char)DAT_80105cec) {
    do {
      iVar2 = (uVar1 & 0xffff) * 0x38;
      local_60->type = 1 << (uVar1 & 0x1f);
      *(s16 *)(iVar2 + -0x7fefab36) = 0x18;
      *(s16 *)(iVar2 + -0x7fefab38) = 0xff;
      (&DAT_801054e5)[iVar2] = 0;
      *(s16 *)(iVar2 + -0x7fefab34) = 0;
      *(s16 *)(iVar2 + -0x7fefab32) = 0;
      *(s16 *)(iVar2 + -0x7fefab28) = 0xffff;
      *(s16 *)(iVar2 + -0x7fefab26) = 0;
      *(s16 *)(iVar2 + -0x7fefab24) = 0;
      *(s16 *)(iVar2 + -0x7fefab22) = 0xff;
      *(s16 *)(iVar2 + -0x7fefab30) = 0;
      *(s16 *)(iVar2 + -0x7fefab2c) = 0;
      *(u8 *)(iVar2 + -0x7fefab2e) = 0x40;
      *(s16 *)(iVar2 + -0x7fefab02) = 0;
      *(s16 *)(iVar2 + -0x7fefab1a) = 0;
      *(s16 *)(iVar2 + -0x7fefab18) = 0;
      *(s16 *)(iVar2 + -0x7fefab16) = 0;
      *(s16 *)(iVar2 + -0x7fefab14) = 0;
      *(s16 *)(iVar2 + -0x7fefab0e) = 0;
      *(s16 *)(iVar2 + -0x7fefab0c) = 0;
      *(s16 *)(iVar2 + -0x7fefab0a) = 0;
      *(s16 *)(iVar2 + -0x7fefab08) = 0;
      *(s16 *)(iVar2 + -0x7fefab06) = 0;
      *(s16 *)(iVar2 + -0x7fefab12) = 0;
      FUN_80099970(local_60);
      _DAT_80105d10 = (s16)uVar1;
      FUN_80094b50(1);
      uVar1 = uVar1 + 1;
    } while ((int)(uVar1 & 0xffff) < (int)(char)DAT_80105cec);
  }
  _DAT_80105bf8 = 0;
  _DAT_80105c00 = 0x3fff;
  _DAT_80105c02 = 0x3fff;
  _DAT_80105bfc = 0;
  _DAT_801054b8 = 0;
  _DAT_801054ba = 0;
  _DAT_80105bf0 = 0;
  _DAT_801054bc = 0;
  _DAT_801054be = 0;
  _DAT_801054c0 = 0;
  _DAT_801054c2 = 0;
  DAT_80105d28 = 0;
  _DAT_80105cd8 = 0;
  _DAT_80105cf0 = 0;
  _DAT_80105cda = 0x80;
  FUN_800931c0();
  return;
}
