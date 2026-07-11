/**
 * @brief Draws a chain of connected 3D trail segments as textured quads.
 *        Takes an array of 3D positions, projects them with GTE, and connects
 *        consecutive points into quads submitted to the ordering table.
 *        Used for rendering entity trails, segmented bodies, and hair.
 * @note Original: func_80029664 at 0x80029664
 */
// Entity_DrawTrailChain

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void Entity_DrawTrailChain(int *param_1,int param_2,uint *param_3,u8 *param_4)

{
  int iVar1;
  s32 in_zero;
  s32 in_at;
  s32 extraout_at;
  s32 extraout_at_00;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  s16 sVar7;
  int iVar8;
  s16 sVar9;
  int iVar10;
  uint *local_res8;
  u8 *local_resc;
  int local_30;
  int *local_2c;

  local_30 = 0;
  setCopControlWord(2,0,_g_GTE_WorkF8);
  setCopControlWord(2,0x800,_DAT_1f8000fc);
  setCopControlWord(2,0x1000,_DAT_1f800100);
  setCopControlWord(2,0x1800,_DAT_1f800104);
  setCopControlWord(2,0x2000,_DAT_1f800108);
  setCopControlWord(2,0x2800,_g_GTE_Work10C);
  setCopControlWord(2,0x3000,_g_GTE_Work110);
  setCopControlWord(2,0x3800,_g_GTE_Work114);
  setCopControlWord(2,0xd800,6);
  setCopControlWord(2,0xe000,0);
  uVar6 = 1;
  iVar10 = 0;
  iVar8 = 0;
  _DAT_1f800088 = 0;
  puVar5 = _g_OT_Buffer;
  local_res8 = param_3;
  local_resc = param_4;
  local_2c = param_1;
  do {
    _g_GTE_Work84 = _DAT_1f800088;
    sVar9 = (s16)iVar10;
    sVar7 = (s16)iVar8;
    uVar6 = uVar6 << 1;
    if (*local_2c == 0) {
LAB_800297f0:
      uVar6 = uVar6 | 1;
    }
    else {
      setCopReg(2,in_zero,*local_2c);
      setCopReg(2,in_at,local_2c->flags);
      copFunction(2,0x180001);
      _g_GTE_Result[0] = getCopControlWord(2,0xf800);
      if (_g_GTE_Result[0] < 0) goto LAB_800297f0;
      iVar1 = getCopReg(2,0x13);
      _g_GTE_Result[0] = ((iVar1 >> 2) >> (iVar1 >> 0xc & 0x1fU)) + (iVar1 >> 0xc) * 0x200;
      if (0x7fb < _g_GTE_Result[0] - 4U) {
        _g_GTE_Result[0] = -1;
      }
      if (_g_GTE_Result[0] < 1) goto LAB_800297f0;
      _DAT_1f800090 = getCopReg(2,0xe);
      _DAT_1f800088 = getCopReg(2,0x18);
    }
    if (local_30 != 0) {
      iVar10 = FUN_80085690((int)_DAT_1f800092 - (int)_DAT_1f80008e,
                            (int)_DAT_1f800090 - (int)_g_GTE_Work8C);
      iVar8 = FUN_80083f50(iVar10 + 0x400);
      iVar8 = (int)((uint)*local_resc * iVar8 + 0x800) >> 0xc;
      iVar10 = FUN_80083e80(iVar10 + 0x400);
      iVar10 = (int)((uint)*local_resc * iVar10 + 0x800) >> 0xc;
      if (local_30 == 1) {
        sVar7 = (s16)((uint)(iVar8 * _g_GTE_Work84) >> 0x10);
        sVar9 = (s16)((uint)(iVar10 * _g_GTE_Work84) >> 0x10);
      }
      iVar8 = iVar8 * _DAT_1f800088 >> 0x10;
      iVar10 = iVar10 * _DAT_1f800088 >> 0x10;
      in_at = extraout_at;
    }
    uVar6 = uVar6 & 3;
    if (((uVar6 == 0) && (0 < _g_GTE_Result[0])) && (_g_GTE_Result[0] < 0x800)) {
      // Submit two quads per trail segment
      *(s16 *)(puVar5 + 2) = _g_GTE_Work8C - sVar7;
      *(s16 *)((int)puVar5 + 10) = _DAT_1f80008e - sVar9;
      *(s16 *)(puVar5 + 4) = _DAT_1f800090 - (s16)iVar8;
      *(s16 *)((int)puVar5 + 0x12) = _DAT_1f800092 - (s16)iVar10;
      puVar5->action_state = _g_GTE_Work8C;
      puVar5->counter1 = _DAT_1f800090;
      *(s16 *)(puVar5 + 0xb) = _g_GTE_Work8C + sVar7;
      *(s16 *)((int)puVar5 + 0x2e) = _DAT_1f80008e + sVar9;
      *(s16 *)(puVar5 + 0xd) = _DAT_1f800090 + (s16)iVar8;
      *(s16 *)((int)puVar5 + 0x36) = _DAT_1f800092 + (s16)iVar10;
      puVar5[0xf] = _g_GTE_Work8C;
      uVar2 = _DAT_1f800090;
      puVar5[0xc] = 0;
      puVar5[10] = 0;
      puVar5->sub_type = 0;
      puVar5->flags = 0;
      puVar5[0x11] = uVar2;
      uVar2 = *local_res8;
      puVar5[0xe] = uVar2;
      puVar5->behavior_state = uVar2;
      uVar2 = local_res8->flags;
      puVar5[0x10] = uVar2;
      puVar5->sub_action = uVar2;
      *(u8 *)((int)puVar5 + 0x2b) = 0x3a;
      *(u8 *)((int)puVar5 + 7) = 0x3a;
      puVar3 = (uint *)(_g_EntityBuffer + _g_GTE_Result[0] * 4);
      *puVar5 = *puVar3 | 0x8000000;
      *puVar3 = (uint)puVar5;
      puVar3 = (uint *)(_g_EntityBuffer + _g_GTE_Result[0] * 4);
      puVar5->counter2 = *puVar3 | 0x8000000;
      *puVar3 = (uint)(puVar5 + 9);
      puVar4 = puVar5 + 0x12;
      FUN_80083de0(puVar4,0,1,0x35,0);
      puVar3 = (uint *)(_g_EntityBuffer + _g_GTE_Result[0] * 4);
      *puVar4 = *puVar3 | 0x2000000;
      *puVar3 = (uint)puVar4;
      puVar5 = puVar5 + 0x15;
      in_at = extraout_at_00;
    }
    local_resc = local_resc + 1;
    local_res8 = local_res8 + 1;
    local_2c = local_2c + 2;
    _g_GTE_Work8C = _DAT_1f800090;
    local_30 = local_30 + 1;
    _g_GTE_Work84 = _DAT_1f800088;
    if (param_2 <= local_30) {
      _g_OT_Buffer = puVar5;
      return;
    }
  } while( true );
}
