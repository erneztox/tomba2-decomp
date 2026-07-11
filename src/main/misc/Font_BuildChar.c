/**
 * @brief Builds a font character tile: converts s8 code to 8x16 pixel UV coordinates
 * @note Original: func_80039E80 at 0x80039E80
 */
// Font_BuildChar



/* WARNING: Removing unreachable block (ram,0x80039eb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80039e80(u8 *param_1,int param_2)

{
  s8 cVar1;
  int iVar2;
  
  if (*param_1 != 0x20) {
    _DAT_1f800180 = 0x20;
    *(u8 *)(param_2 + 0xc) = *param_1 * '\b';
    iVar2 = (uint)*param_1 + (int)_DAT_1f800180;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x1f;
    }
    param_2->sprite_flags = (char)(iVar2 >> 5) * '\x10' + '\b';
    cVar1 = *(s8*)(param_2 + 0xc);
    *(s8*)(param_2 + 0x14) = cVar1 + '\b';
    *(s8*)(param_2 + 0x1c) = cVar1;
    *(s8*)(param_2 + 0x24) = cVar1 + '\b';
    if (*(s8*)(param_2 + 0x14) == '\0') {
      *(u8 *)(param_2 + 0x14) = 0xff;
      *(u8 *)(param_2 + 0x24) = 0xff;
    }
    cVar1 = param_2->sprite_flags;
    *(s8*)(param_2 + 0x15) = cVar1;
    *(s8*)(param_2 + 0x1d) = cVar1 + '\x10';
    *(s8*)(param_2 + 0x25) = cVar1 + '\x10';
    return 0;
  }
  return 0xffffffff;
}
