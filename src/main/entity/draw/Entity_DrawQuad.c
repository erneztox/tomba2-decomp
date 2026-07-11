/**
 * @brief Entity quad drawer: builds textured quad from entity data
 * @note Original: func_800336DC at 0x800336DC
 */
// Entity_DrawQuad



void Entity_DrawQuad(int param_1,s16 param_2,s16 param_3,u8 param_4)

{
  int iVar1;
  int iVar2;
  u8 local_30;
  u8 local_2f;
  s16 local_2e;
  s16 local_28;
  s16 local_26;
  s16 local_24;
  s16 local_22;
  
  iVar2 = 0;
  local_2e = 0;
  local_22 = 0;
  iVar1 = 0;
  local_2f = param_4;
  do {
    iVar1 = iVar1 >> 0x10;
    local_30 = (&DAT_800a2354)[iVar1 * 10];
    local_28 = (&DAT_800a2356)[iVar1 * 5] + param_3;
    local_26 = (&DAT_800a2358)[iVar1 * 5] + param_2;
    local_24 = (&DAT_800a235a)[iVar1 * 5];
    GPU_SpriteDrawMain(&local_28,(&PTR_DAT_80017334)[(s16)(&DAT_800a235c)[iVar1 * 5]],
                 *(s32 *)(param_1 + 4),&local_30);
    iVar2 = iVar2 + 1;
    iVar1 = iVar2 * 0x10000;
  } while (iVar2 * 0x10000 >> 0x10 < 4);
  iVar1 = 0;
  local_24 = 0;
  local_30 = 0;
  do {
    local_28 = (s16)iVar1 * 0x10 + param_3 + 0x1c;
    local_26 = param_2 + 0x1c;
    GPU_SpriteDrawMain(&local_28,(&PTR_DAT_80017334)[(u8)(&DAT_800a237c)[(s16)iVar1]],
                 *(s32 *)(param_1 + 4),&local_30);
    iVar1 = iVar1 + 1;
  } while (iVar1 * 0x10000 >> 0x10 < 0x12);
  local_30 = 0;
  iVar1 = 0;
  do {
    local_28 = param_3 + 0xc;
    local_26 = (s16)iVar1 * 0x10 + param_2 + 0x2c;
    GPU_SpriteDrawMain(&local_28,(&PTR_DAT_80017334)[(u8)(&DAT_800a2390)[(s16)iVar1]],
                 *(s32 *)(param_1 + 4),&local_30);
    iVar1 = iVar1 + 1;
  } while (iVar1 * 0x10000 >> 0x10 < 10);
  local_30 = 1;
  iVar1 = 0;
  do {
    local_28 = param_3 + 0x134;
    local_26 = (s16)iVar1 * 0x10 + param_2 + 0x2c;
    GPU_SpriteDrawMain(&local_28,(&PTR_DAT_80017334)[(u8)(&DAT_800a2390)[(s16)iVar1]],
                 *(s32 *)(param_1 + 4),&local_30);
    iVar1 = iVar1 + 1;
  } while (iVar1 * 0x10000 >> 0x10 < 10);
  return;
}
