/**
 * @brief GPU OT sorter: sorts primitives by Z depth
 * @note Original: func_8003E448 at 0x8003E448
 */
// GPU_OT_Sort



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void GPU_OT_Sort(u16 *param_1,s32 param_2)

{
  u16 uVar1;
  u16 uVar2;
  u16 uVar3;
  u16 uVar4;
  u16 uVar5;
  u16 uVar6;
  u16 uVar7;
  u16 uVar8;
  u16 uVar9;
  u16 uVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  s16 local_48;
  s16 local_44;
  s16 local_40;
  s16 local_3c;
  s16 local_38;
  s16 local_34;
  s16 local_30;
  s16 local_2c;
  
  puVar11 = _g_OT_Buffer;
  iVar18 = (uint)(DAT_1f800135 == '\0') * 0x100;
  GPU_SetTexPrimHeader(_g_OT_Buffer);
  Entity_SetFlagBit1(puVar11,1);
  local_44 = _DAT_1f80008e;
  local_48 = _g_GTE_Work8C;
  uVar1 = *param_1;
  uVar2 = param_1->flags;
  iVar16 = (int)_g_GTE_Work8C;
  uVar3 = *param_1;
  uVar4 = param_1->kind;
  uVar5 = param_1->flags;
  uVar6 = param_1->sub_type;
  uVar7 = *param_1;
  uVar8 = param_1->kind;
  uVar9 = param_1->flags;
  uVar10 = param_1->sub_type;
  iVar17 = (int)_DAT_1f80008e;
  iVar13 = Math_CosGTE(param_2);
  iVar14 = Math_Cos(param_2);
  local_3c = _DAT_1f80008e;
  local_40 = _g_GTE_Work8C;
  iVar15 = ((s16)uVar1 - iVar16) + ((s16)uVar1 - iVar16 >> 7);
  iVar16 = ((s16)uVar2 - iVar17) + ((s16)uVar2 - iVar17 >> 7);
  local_48 = (s16)(iVar15 * iVar13 + iVar16 * iVar14 >> 0xc) + local_48;
  iVar17 = (int)_g_GTE_Work8C;
  local_44 = (s16)(iVar16 * iVar13 - iVar15 * iVar14 >> 0xc) + local_44;
  iVar16 = (int)_DAT_1f80008e;
  iVar13 = Math_CosGTE(param_2);
  iVar14 = Math_Cos(param_2);
  local_34 = _DAT_1f80008e;
  local_38 = _g_GTE_Work8C;
  iVar17 = ((int)(s16)uVar3 + (int)(s16)uVar4) - iVar17;
  iVar17 = iVar17 + (iVar17 >> 7);
  iVar16 = (s16)uVar5 - iVar16;
  iVar16 = iVar16 + (iVar16 >> 7);
  local_40 = (s16)(iVar17 * iVar13 + iVar16 * iVar14 >> 0xc) + local_40;
  iVar15 = (int)_g_GTE_Work8C;
  local_3c = (s16)(iVar16 * iVar13 - iVar17 * iVar14 >> 0xc) + local_3c;
  iVar16 = (int)_DAT_1f80008e;
  iVar13 = Math_CosGTE(param_2);
  iVar14 = Math_Cos(param_2);
  local_2c = _DAT_1f80008e;
  local_30 = _g_GTE_Work8C;
  iVar15 = (s16)uVar3 - iVar15;
  iVar15 = iVar15 + (iVar15 >> 7);
  iVar16 = ((int)(s16)uVar5 + (int)(s16)uVar6) - iVar16;
  iVar16 = iVar16 + (iVar16 >> 7);
  local_38 = (s16)(iVar15 * iVar13 + iVar16 * iVar14 >> 0xc) + local_38;
  iVar17 = (int)_g_GTE_Work8C;
  local_34 = (s16)(iVar16 * iVar13 - iVar15 * iVar14 >> 0xc) + local_34;
  iVar16 = (int)_DAT_1f80008e;
  iVar13 = Math_CosGTE(param_2);
  iVar14 = Math_Cos(param_2);
  iVar17 = ((int)(s16)uVar7 + (int)(s16)uVar8) - iVar17;
  iVar17 = iVar17 + (iVar17 >> 7);
  iVar16 = ((int)(s16)uVar9 + (int)(s16)uVar10) - iVar16;
  iVar16 = iVar16 + (iVar16 >> 7);
  local_30 = (s16)(iVar17 * iVar13 + iVar16 * iVar14 >> 0xc) + local_30;
  local_2c = (s16)(iVar16 * iVar13 - iVar17 * iVar14 >> 0xc) + local_2c;
  *(s16 *)(puVar11 + 2) = local_48;
  puVar11->counter2 = 0x3f;
  puVar11->behavior_state = 0x3f;
  *(s16 *)((int)puVar11 + 0x12) = local_3c;
  *(s16 *)(puVar11 + 6) = local_38;
  *(s16 *)((int)puVar11 + 0x1a) = local_34;
  puVar11->sub_action = 0;
  puVar11->sub_type = 0;
  *(u8 *)((int)puVar11 + 0x15) = 0;
  *(u8 *)((int)puVar11 + 0xd) = 0;
  *(u8 *)((int)puVar11 + 0x25) = 0xff;
  *(u8 *)((int)puVar11 + 0x1d) = 0xff;
  *(s16 *)(puVar11 + 8) = local_30;
  *(s16 *)((int)puVar11 + 10) = local_44;
  *(s16 *)(puVar11 + 4) = local_40;
  *(s16 *)((int)puVar11 + 0x22) = local_2c;
  uVar2 = param_1->flags;
  uVar1 = param_1->flags;
  uVar3 = *param_1;
  puVar11->flags = 0x80;
  *(u16 *)((int)puVar11 + 0x16) =
       (u16)((int)(iVar18 + (s16)uVar1 & 0x100U) >> 4) | (u16)((uVar3 & 0x3ff) >> 6) | 0x100
       | (u16)(((uint)uVar2 + iVar18 & 0x200) << 2);
  *(u8 *)((int)puVar11 + 5) = 0x80;
  *(u8 *)((int)puVar11 + 6) = 0x80;
  puVar12 = _g_EntityBuffer;
  *(s16 *)((int)puVar11 + 0xe) = 0;
  *puVar11 = *puVar11 & 0xff000000 | *puVar12 & 0xffffff;
  _g_OT_Buffer = puVar11 + 10;
  *puVar12 = *puVar12 & 0xff000000 | (uint)puVar11 & 0xffffff;
  return;
}
