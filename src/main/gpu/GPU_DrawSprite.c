/**
 * @brief GPU sprite drawer: builds sprite primitive from entity data
 * @note Original: func_80033A0C at 0x80033A0C
 */
// GPU_DrawSprite



#include "tomba.h"
void GPU_DrawSprite(int param_1,int param_2,u8 param_3)

{
  s16 *psVar1;
  s16 *puVar2;
  int iVar3;
  u8 local_30;
  u8 local_2f;
  s16 local_2e;
  s16 local_28;
  s16 local_26;
  s16 local_24;
  s16 local_22;
  
  iVar3 = 2;
  param_2 = param_2 + 4;
  puVar2 = &DAT_800a23ac;
  local_30 = 0;
  local_2e = 0;
  do {
    if ((iVar3 == 4) || (local_2f = param_3, iVar3 == 7)) {
      local_2f = 0x32;
    }
    local_28 = *puVar2;
    iVar3 = iVar3 + 1;
    local_26 = puVar2->flags;
    local_24 = puVar2->kind;
    local_22 = puVar2->sub_type;
    puVar2 = puVar2 + 4;
    psVar1 = (s16 *)(param_2 + -4);
    param_2 = param_2 + 2;
    GPU_SpriteDrawMain(&local_28,(&PTR_DAT_80017334)[*psVar1],*(s32 *)(param_1 + 4),&local_30);
  } while (iVar3 < 0xe);
  return;
}
