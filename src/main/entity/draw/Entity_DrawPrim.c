/**
 * @brief Entity draw primitive: builds quad prim from entity data, submits
 * @note Original: func_80037894 at 0x80037894
 */
// Entity_DrawPrim



void Entity_DrawPrim(int param_1,s16 param_2,u8 param_3)

{
  void *puVar1;
  s16 sVar2;
  int iVar3;
  u8 local_28;
  u8 local_27;
  s16 local_26;
  s16 local_20;
  s16 local_1e;
  s32 local_1c;
  
  puVar1 = PTR_DAT_800174bc;
  iVar3 = 0;
  local_28 = 0;
  local_26 = 0;
  local_1c = 0;
  local_20 = 0x18;
  local_27 = param_3;
  local_1e = param_2;
  do {
    sVar2 = local_20 + 8;
    iVar3 = iVar3 + 1;
    GPU_SpriteRender(&local_20,puVar1,*(s32 *)(param_1 + 4),&local_28);
    local_20 = sVar2;
  } while (iVar3 < 0x22);
  return;
}
