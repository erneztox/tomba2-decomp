/**
 * @brief Entity UI draw: renders UI primitive array at entity pos via GPU_DrawQuad
 * @note Original: func_800737F8 at 0x800737F8
 */
// Entity_DrawUI



void Entity_DrawUI(s32 param_1)

{
  s32 uVar1;
  int iVar2;
  int iVar3;
  s16 local_18;
  s16 local_16;
  s16 local_14;
  s16 local_12;
  
  uVar1 = String_LookupDialog(g_GameState,param_1);
  iVar2 = UI_StringParse(uVar1);
  if (iVar2 < 0) {
    local_12 = 0x20;
    iVar2 = -iVar2;
  }
  else {
    local_12 = 0x10;
  }
  iVar3 = iVar2 * -4 + 0xa0;
  GPU_RenderSprite_V1(iVar3 * 0x10000 >> 0x10,0x50,0,uVar1,0);
  local_16 = 0x50;
  local_18 = (s16)iVar3;
  local_14 = (s16)(iVar2 << 3);
  UI_DrawPanel(&local_18,7,1,0);
  return;
}
