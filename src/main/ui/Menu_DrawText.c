/**
 * @brief Menu text drawer: renders string via sprite primitives + GTE projection
 * @note Original: func_8007F73C at 0x8007F73C
 */
// Menu_DrawText



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Menu_DrawText(void)

{
  int iVar1;
  int iVar2;
  u16 *puVar3;
  int iVar4;
  void local_38->state;
  u16 local_28->state;
  u8 auStack_20->counter1;
  
  GPU_RenderSprite_V1(0x30,0x30,0,PTR_s_Screen_adjust_800a2890,0);
  iVar4 = 0;
  iVar1 = String_Length(PTR_s_Screen_adjust_800a2890);
  GPU_SubmitOT(0x28,0x2c,(iVar1 * 8 + 0x10) * 0x10000 >> 0x10,0x18,0);
  local_28->type = 0x5c;
  local_28->flags = 0x84;
  local_38->type = PTR_s_Vertical_800a28cc;
  local_38->flags = PTR_s_Horizontal_800a28d0;
  iVar1 = 0;
  do {
    iVar2 = String_Length(*(s32 *)((int)local_38 + iVar1));
    puVar3 = local_28 + iVar4;
    iVar4 = iVar4 + 1;
    GPU_RenderSprite_V1((iVar2 * -8 + 0x98) * 0x10000 >> 0x10,(int)(s16)*puVar3,0,
                 *(s32 *)((int)local_38 + iVar1),0);
    GPU_SubmitOT((iVar2 * -8 + 0x90) * 0x10000 >> 0x10,(int)((*puVar3 - 4) * 0x10000) >> 0x10,
                 (iVar2 * 8 + 0x30) * 0x10000 >> 0x10,0x18,0);
    iVar1 = iVar4 * 4;
  } while (iVar4 < 2);
  CD_EventMain(auStack_20,&DAT_800172f8,_DAT_800e7e72 + -8);
  GPU_RenderSprite_V1(0xa8,0x5e,3,auStack_20,0);
  CD_EventMain(auStack_20,&DAT_800172f8,(int)_DAT_800e7e70);
  GPU_RenderSprite_V1(0xa8,0x86,3,auStack_20,0);
  GPU_SubmitOT(100,0xc1,0xc0,0x15,1);
  return;
}
