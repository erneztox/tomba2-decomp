/**
 * @brief Menu config draw: renders strings + sprites for configuration menu
 * @note Original: func_8007F104 at 0x8007F104
 */
// Menu_DrawConfig



#include "tomba.h"
void Menu_DrawConfig(void)

{
  s16 sVar1;
  uint uVar2;
  int iVar3;
  void local_48->state;
  s16 local_38->counter1;
  u16 local_28->counter1;
  
  Menu_TextDraw2(0x26,200,0,&DAT_800172ac,0);
  uVar2 = 0;
  iVar3 = 0x4c;
  GPU_RenderSprite_V2(0x32,200,6,PTR_s__Select_800a28f4,0);
  GPU_RenderSprite_V1(0x20,0x20,0,PTR_s_Select_Options_800a2884,0);
  local_48->type = PTR_s_Messages_800a2888;
  local_48->flags = PTR_s_Sound_800a288c;
  local_48->kind = PTR_s_Screen_adjust_800a2890;
  local_48->sub_type = PTR_s_Controls_800a2894;
  sVar1 = String_TableLookup(local_48,4,local_38);
  do {
    *(int *)(local_28 + uVar2 * 2) = iVar3;
    iVar3 = iVar3 + 0x18;
    GPU_RenderSprite_V1((int)local_38[uVar2 * 2],(int)(s16)local_28[uVar2 * 2],
                 (uint)(DAT_800bf808 == uVar2) << 3,local_48[uVar2],0);
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  GPU_DrawSprite98((int)sVar1,(int)((local_28[(uint)DAT_800bf808 * 2] + 4) * 0x10000) >> 0x10,0);
  GPU_OT_Advance();
  return;
}
