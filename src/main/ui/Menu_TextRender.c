/**
 * @brief Menu text renderer: draws text strings with GTE projection
 * @note Original: func_8007F250 at 0x8007F250
 */
// Menu_TextRender



#include "tomba.h"
void Menu_TextRender(void)

{
  int iVar1;
  s32 uVar2;
  char *pcVar3;
  uint uVar4;
  char **ppcVar5;
  s8 local_30->state;
  u16 local_20->state;
  
  uVar4 = 0;
  GPU_RenderSprite_V1(0x30,0x30,0,PTR_s_Messages_800a2888,0);
  local_20->type = 0x60;
  local_20->flags = 0x80;
  local_30->type = PTR_s_Speed_800a2898;
  local_30->flags = PTR_s_Voices_800a28a4;
  iVar1 = 0;
  do {
    ppcVar5 = local_30;
    GPU_RenderSprite_V1(0x40,(int)*(s16 *)((int)local_20 + iVar1),(uint)(DAT_800bf808 == uVar4) << 3,
                 ppcVar5[uVar4],0);
    uVar4 = uVar4 + 1;
    iVar1 = uVar4 * 2;
  } while ((int)uVar4 < 2);
  uVar4 = 0;
  GPU_DrawSprite98(0x2c,(int)((local_20[DAT_800bf808] + 4) * 0x10000) >> 0x10);
  GPU_RenderSprite_V2(0x8c,0x56,0,PTR_DAT_800a289c,0);
  GPU_RenderSprite_V2(0xec,0x56,0,PTR_DAT_800a28a0,0);
  Menu_TextDraw2(0xac,100,0,&DAT_800172b0,0);
  local_30->type = s_1_800172c0;
  local_30->flags = s_2_800172d0;
  local_30->kind = s_3_800172e0;
  do {
    uVar2 = 0;
    if (uVar4 == DAT_800fb161) {
      uVar2 = 3;
    }
    pcVar3 = *ppcVar5;
    ppcVar5 = ppcVar5 + 1;
    uVar4 = uVar4 + 1;
    GPU_RenderSprite_V1(0x94,99,uVar2,pcVar3,0);
  } while ((int)uVar4 < 3);
  GPU_RenderSprite_V1(0xc0,0x83,0,&DAT_800172f0,0);
  uVar4 = 0;
  iVar1 = 0x940000;
  local_30->type = PTR_DAT_800a28a8;
  local_30->flags = PTR_DAT_800a28ac;
  do {
    uVar2 = 0;
    if (uVar4 == DAT_800fb162) {
      uVar2 = 3;
    }
    ppcVar5 = local_30 + uVar4;
    uVar4 = uVar4 + 1;
    GPU_RenderSprite_V1(iVar1 >> 0x10,0x83,uVar2,*ppcVar5,0);
    iVar1 = iVar1 + 0x480000;
  } while ((int)uVar4 < 2);
  GPU_OT_Advance();
  return;
}
