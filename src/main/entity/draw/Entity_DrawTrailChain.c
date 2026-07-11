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
void Entity_DrawTrailChain(int *param_1,int param_2,uint *param_3,byte *param_4)

{
  int iVar1;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  uint *local_res8;
  byte *local_resc;
  int local_30;
  int *local_2c;

  local_30 = 0;
  setCopControlWord(2,0,_DAT_1f8000f8);
  setCopControlWord(2,0x800,_DAT_1f8000fc);
  setCopControlWord(2,0x1000,_DAT_1f800100);
  setCopControlWord(2,0x1800,_DAT_1f800104);
  setCopControlWord(2,0x2000,_DAT_1f800108);
  setCopControlWord(2,0x2800,_DAT_1f80010c);
  setCopControlWord(2,0x3000,_DAT_1f800110);
  setCopControlWord(2,0x3800,_DAT_1f800114);
  setCopControlWord(2,0xd800,6);
  setCopControlWord(2,0xe000,0);
  uVar6 = 1;
  iVar10 = 0;
  iVar8 = 0;
  _DAT_1f800088 = 0;
  puVar5 = _DAT_800bf544;
  local_res8 = param_3;
  local_resc = param_4;
  local_2c = param_1;
  do {
    _DAT_1f800084 = _DAT_1f800088;
    sVar9 = (short)iVar10;
    sVar7 = (short)iVar8;
    uVar6 = uVar6 << 1;
    if (*local_2c == 0) {
LAB_800297f0:
      uVar6 = uVar6 | 1;
    }
    else {
      setCopReg(2,in_zero,*local_2c);
      setCopReg(2,in_at,local_2c->flags);
      copFunction(2,0x180001);
      _DAT_1f800080 = getCopControlWord(2,0xf800);
      if (_DAT_1f800080 < 0) goto LAB_800297f0;
      iVar1 = getCopReg(2,0x13);
      _DAT_1f800080 = ((iVar1 >> 2) >> (iVar1 >> 0xc & 0x1fU)) + (iVar1 >> 0xc) * 0x200;
      if (0x7fb < _DAT_1f800080 - 4U) {
        _DAT_1f800080 = -1;
      }
      if (_DAT_1f800080 < 1) goto LAB_800297f0;
      _DAT_1f800090 = getCopReg(2,0xe);
      _DAT_1f800088 = getCopReg(2,0x18);
    }
    if (local_30 != 0) {
      iVar10 = FUN_80085690((int)_DAT_1f800092 - (int)_DAT_1f80008e,
                            (int)_DAT_1f800090 - (int)_DAT_1f80008c);
      iVar8 = FUN_80083f50(iVar10 + 0x400);
      iVar8 = (int)((uint)*local_resc * iVar8 + 0x800) >> 0xc;
      iVar10 = FUN_80083e80(iVar10 + 0x400);
      iVar10 = (int)((uint)*local_resc * iVar10 + 0x800) >> 0xc;
      if (local_30 == 1) {
        sVar7 = (short)((uint)(iVar8 * _DAT_1f800084) >> 0x10);
        sVar9 = (short)((uint)(iVar10 * _DAT_1f800084) >> 0x10);
      }
      iVar8 = iVar8 * _DAT_1f800088 >> 0x10;
      iVar10 = iVar10 * _DAT_1f800088 >> 0x10;
      in_at = extraout_at;
    }
    uVar6 = uVar6 & 3;
    if (((uVar6 == 0) && (0 < _DAT_1f800080)) && (_DAT_1f800080 < 0x800)) {
      // Submit two quads per trail segment
      *(short *)(puVar5 + 2) = _DAT_1f80008c - sVar7;
      *(short *)((int)puVar5 + 10) = _DAT_1f80008e - sVar9;
      *(short *)(puVar5 + 4) = _DAT_1f800090 - (short)iVar8;
      *(short *)((int)puVar5 + 0x12) = _DAT_1f800092 - (short)iVar10;
      puVar5->action_state = _DAT_1f80008c;
      puVar5->counter1 = _DAT_1f800090;
      *(short *)(puVar5 + 0xb) = _DAT_1f80008c + sVar7;
      *(short *)((int)puVar5 + 0x2e) = _DAT_1f80008e + sVar9;
      *(short *)(puVar5 + 0xd) = _DAT_1f800090 + (short)iVar8;
      *(short *)((int)puVar5 + 0x36) = _DAT_1f800092 + (short)iVar10;
      puVar5[0xf] = _DAT_1f80008c;
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
      *(undefined1 *)((int)puVar5 + 0x2b) = 0x3a;
      *(undefined1 *)((int)puVar5 + 7) = 0x3a;
      puVar3 = (uint *)(_DAT_800ed8c8 + _DAT_1f800080 * 4);
      *puVar5 = *puVar3 | 0x8000000;
      *puVar3 = (uint)puVar5;
      puVar3 = (uint *)(_DAT_800ed8c8 + _DAT_1f800080 * 4);
      puVar5->counter2 = *puVar3 | 0x8000000;
      *puVar3 = (uint)(puVar5 + 9);
      puVar4 = puVar5 + 0x12;
      FUN_80083de0(puVar4,0,1,0x35,0);
      puVar3 = (uint *)(_DAT_800ed8c8 + _DAT_1f800080 * 4);
      *puVar4 = *puVar3 | 0x2000000;
      *puVar3 = (uint)puVar4;
      puVar5 = puVar5 + 0x15;
      in_at = extraout_at_00;
    }
    local_resc = local_resc + 1;
    local_res8 = local_res8 + 1;
    local_2c = local_2c + 2;
    _DAT_1f80008c = _DAT_1f800090;
    local_30 = local_30 + 1;
    _DAT_1f800084 = _DAT_1f800088;
    if (param_2 <= local_30) {
      _DAT_800bf544 = puVar5;
      return;
    }
  } while( true );
}
