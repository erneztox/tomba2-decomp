/**
 * @brief GPU sprite renderer: builds sprite prim from params, submits
 * @note Original: func_8007E6DC at 0x8007E6DC
 */
// GPU_SpriteRender



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void GPU_SpriteRender(s32 *param_1,s16 *param_2,int param_3,u8 *param_4)

{
  u8 bVar1;
  u16 uVar2;
  s16 sVar3;
  s16 *psVar4;
  uint *puVar5;
  uint *puVar6;
  u8 *puVar7;
  int iVar8;
  
  bVar1 = *param_4;
  uVar2 = *(u16 *)(param_4 + 2);
  *param_4 = bVar1 & 0xf;
  psVar4 = (s16 *)(param_3 + *param_2 * 4);
  iVar8 = (int)*psVar4;
  puVar6 = (uint *)(param_3 + psVar4->flags);
  puVar7 = (u8 *)((int)puVar6 + 0xb);
  sVar3 = *(s16 *)((int)puVar6 + 6);
  do {
    _g_GTE_Data8 = (s16)*param_1;
    _DAT_1f80000a = (s16)((uint)*param_1 >> 0x10);
    _g_GTE_Data8 = CONCAT22(_DAT_1f80000a + (char)puVar7->state,_g_GTE_Data8 + (char)puVar7->sub_type);
    _g_GTE_DataC = *puVar6;
    _g_GTE_Data4 = CONCAT13(100,_g_GTE_Data4);
    _g_GTE_Data10 = (uint)CONCAT12(*puVar7,(u16)(u8)puVar7[-1]);
    if ((uVar2 & 0x8000) != 0) {
      _g_GTE_Data4 = CONCAT13(0x66,_g_GTE_Data4);
    }
    if ((bVar1 & 0xf0) == 0) {
      _g_GTE_Data4 = _g_GTE_Data4 | 0x1000000;
    }
    else {
      _g_GTE_Data4 = CONCAT31(CONCAT21(CONCAT11(DAT_1f800007,bVar1),bVar1),bVar1) & 0xfff0f0f0;
    }
    if ((uVar2 & 0x7fff) != 0) {
      _g_GTE_DataC = CONCAT22(*(s16 *)(param_4 + 2),(s16)_g_GTE_DataC);
    }
    puVar5 = (uint *)(_g_EntityBuffer + (uint)param_4->flags * 4);
    *_g_OT_Buffer = *puVar5 | 0x4000000;
    *puVar5 = (uint)_g_OT_Buffer;
    puVar7 = puVar7 + 0x10;
    puVar6 = puVar6 + 4;
    iVar8 = iVar8 + -1;
    _g_OT_Buffer->flags = _g_GTE_Data4;
    _g_OT_Buffer->kind = _g_GTE_Data8;
    _g_OT_Buffer->sub_type = _g_GTE_DataC;
    _g_OT_Buffer->state = _g_GTE_Data10;
    puVar5 = _g_OT_Buffer + 5;
    _g_OT_Buffer = puVar5;
  } while (iVar8 != 0);
  GPU_SetupDrawMode2(puVar5,0,0,(int)sVar3,0);
  puVar6 = (uint *)(_g_EntityBuffer + (uint)param_4->flags * 4);
  *puVar5 = *puVar6 | 0x2000000;
  *puVar6 = (uint)puVar5;
  _g_OT_Buffer = _g_OT_Buffer + 3;
  return;
}
