/**
 * @brief Audio sequence main variant 2: SEQ+SPU control (236L)
 * @note Original: func_80075FF8 at 0x80075FF8
 */
// Audio_SeqMain2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80075ff8(int param_1,ushort *param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  
  uVar10 = *(uint *)((uint)*param_2 * 4 + param_1->sprite_data);
  param_1->anim_data = param_1->anim_data & 0x7fffffff;
  pbVar7 = (byte *)(param_1->sprite_data + (uVar10 & 0xffffff));
  param_1->counter1 = (char)(uVar10 >> 0x18);
  if (((int)uVar10 >> 0x18 & 0x40U) == 0) {
    if ((param_1->counter1 & 0x80) == 0) {
      iVar1 = 0;
    }
    else {
      uVar10 = (int)((uint)*pbVar7 << 0x18) >> 0x14 | (uint)(pbVar7->flags >> 4);
      _DAT_1f8000c0 = (ushort)uVar10;
      pbVar8 = pbVar7 + 3;
      _DAT_1f8000c2 = (ushort)((int)((uint)pbVar7->flags << 0x1c) >> 0x14) | (ushort)pbVar7->kind;
      pbVar7 = pbVar7 + 4;
      _DAT_1f8000c4 = (ushort)((int)((uint)*pbVar8 << 0x18) >> 0x14) | (ushort)(*pbVar7 >> 4);
      iVar3 = (int)param_3;
      iVar1 = uVar10 - (int)param_1->gte_input;
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (iVar1 == -0x80000000)) {
        trap(0x1800);
      }
      param_1->move_speed = (short)(iVar1 / iVar3);
      iVar1 = (int)(short)_DAT_1f8000c2 - (int)*(short *)(param_1 + 0x8a);
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (iVar1 == -0x80000000)) {
        trap(0x1800);
      }
      param_1->gte_offset_y = (short)(iVar1 / iVar3);
      iVar2 = (int)(short)_DAT_1f8000c4 - (int)*(short *)(param_1 + 0x8c);
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (iVar2 == -0x80000000)) {
        trap(0x1800);
      }
      iVar1 = 1;
      param_1->gte_offset_z = (short)(iVar2 / iVar3);
    }
    iVar2 = 0;
    param_1->counter1 = param_1->counter1 & 0x3f;
    iVar3 = param_1;
    if (param_1->counter2 != '\0') {
      do {
        if ((int)(uint)param_1->counter1 <= iVar2) {
          return;
        }
        if ((iVar2 + iVar1 & 1U) == 0) {
          _DAT_1f8000c0 = (ushort)*pbVar7 << 4 | (ushort)(pbVar7->flags >> 4);
          pbVar8 = pbVar7 + 3;
          _DAT_1f8000c2 = (pbVar7->flags & 0xf) << 8 | (ushort)pbVar7->kind;
          pbVar7 = pbVar7 + 4;
          _DAT_1f8000c4 = (ushort)*pbVar8 << 4 | (ushort)(*pbVar7 >> 4);
        }
        else {
          _DAT_1f8000c0 = (*pbVar7 & 0xf) << 8 | (ushort)pbVar7->flags;
          pbVar8 = pbVar7 + 3;
          _DAT_1f8000c2 = (ushort)pbVar7->kind << 4 | (ushort)(*pbVar8 >> 4);
          pbVar9 = pbVar7 + 4;
          pbVar7 = pbVar7 + 5;
          _DAT_1f8000c4 = (*pbVar8 & 0xf) << 8 | (ushort)*pbVar9;
        }
        iVar6 = (uint)_DAT_1f8000c0 - (uint)*(ushort *)(iVar3->sprite_ptr1 + 8);
        _DAT_1f8000c0 = (ushort)iVar6;
        iVar5 = (uint)_DAT_1f8000c2 - (uint)*(ushort *)(iVar3->sprite_ptr1 + 10);
        _DAT_1f8000c2 = (ushort)iVar5;
        iVar4 = (uint)_DAT_1f8000c4 - (uint)*(ushort *)(iVar3->sprite_ptr1 + 0xc);
        _DAT_1f8000c4 = (ushort)iVar4;
        if (0x800 < iVar6 * 0x10000 >> 0x10) {
          _DAT_1f8000c0 = _DAT_1f8000c0 + -0x1000;
        }
        if ((short)_DAT_1f8000c0 < -0x800) {
          _DAT_1f8000c0 = _DAT_1f8000c0 + 0x1000;
        }
        if (0x800 < iVar5 * 0x10000 >> 0x10) {
          _DAT_1f8000c2 = _DAT_1f8000c2 - 0x1000;
        }
        if ((short)_DAT_1f8000c2 < -0x800) {
          _DAT_1f8000c2 = _DAT_1f8000c2 + 0x1000;
        }
        if (0x800 < iVar4 * 0x10000 >> 0x10) {
          _DAT_1f8000c4 = _DAT_1f8000c4 - 0x1000;
        }
        if ((short)_DAT_1f8000c4 < -0x800) {
          _DAT_1f8000c4 = _DAT_1f8000c4 + 0x1000;
        }
        if (param_3 == 0) {
          trap(0x1c00);
        }
        if ((param_3 == -1) && ((short)_DAT_1f8000c0 == -0x80000000)) {
          trap(0x1800);
        }
        *(short *)(iVar3->sprite_ptr1 + 0x10) = (short)_DAT_1f8000c0 / param_3;
        if (param_3 == 0) {
          trap(0x1c00);
        }
        if ((param_3 == -1) && ((short)_DAT_1f8000c2 == -0x80000000)) {
          trap(0x1800);
        }
        *(short *)(iVar3->sprite_ptr1 + 0x12) = (short)_DAT_1f8000c2 / param_3;
        if (param_3 == 0) {
          trap(0x1c00);
        }
        if ((param_3 == -1) && ((short)_DAT_1f8000c4 == -0x80000000)) {
          trap(0x1800);
        }
        iVar2 = iVar2 + 1;
        *(short *)(iVar3->sprite_ptr1 + 0x14) = (short)_DAT_1f8000c4 / param_3;
        iVar3 = iVar3 + 4;
      } while (iVar2 < (int)(uint)param_1->counter2);
    }
  }
  else {
    if (((int)uVar10 >> 0x18 & 0x80U) != 0) {
      uVar10 = (int)((uint)*pbVar7 << 0x18) >> 0x14 | (uint)(pbVar7->flags >> 4);
      _DAT_1f8000c0 = (ushort)uVar10;
      _DAT_1f8000c2 = (ushort)((int)((uint)pbVar7->flags << 0x1c) >> 0x14) | (ushort)pbVar7->kind;
      _DAT_1f8000c4 = (ushort)((int)((uint)pbVar7->sub_type << 0x18) >> 0x14) | (ushort)(pbVar7->state >> 4);
      iVar1 = (int)param_3;
      iVar3 = uVar10 - (int)param_1->gte_input;
      if (iVar1 == 0) {
        trap(0x1c00);
      }
      if ((iVar1 == -1) && (iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      param_1->move_speed = (short)(iVar3 / iVar1);
      iVar3 = (int)(short)_DAT_1f8000c2 - (int)*(short *)(param_1 + 0x8a);
      if (iVar1 == 0) {
        trap(0x1c00);
      }
      if ((iVar1 == -1) && (iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      param_1->gte_offset_y = (short)(iVar3 / iVar1);
      iVar3 = (int)(short)_DAT_1f8000c4 - (int)*(short *)(param_1 + 0x8c);
      if (iVar1 == 0) {
        trap(0x1c00);
      }
      if ((iVar1 == -1) && (iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      pbVar7 = pbVar7 + 9;
      param_1->gte_offset_z = (short)(iVar3 / iVar1);
    }
    iVar3 = 0;
    param_1->counter1 = param_1->counter1 & 0x3f;
    iVar1 = param_1;
    if (param_1->counter2 != '\0') {
      do {
        if ((int)(uint)param_1->counter1 <= iVar3) {
          return;
        }
        _DAT_1f8000c0 = (ushort)*pbVar7 << 4 | (ushort)(pbVar7->flags >> 4);
        _DAT_1f8000c2 = (pbVar7->flags & 0xf) << 8 | (ushort)pbVar7->kind;
        _DAT_1f8000c4 = (ushort)pbVar7->sub_type << 4 | (ushort)(pbVar7->state >> 4);
        *(ushort *)(iVar1->sprite_ptr1 + 0x38) = (pbVar7->state & 0xf) << 8;
        *(ushort *)(iVar1->sprite_ptr1 + 0x38) =
             *(ushort *)(iVar1->sprite_ptr1 + 0x38) | (ushort)pbVar7->behavior_state;
        *(short *)(iVar1->sprite_ptr1 + 0x38) = *(short *)(iVar1->sprite_ptr1 + 0x38) << 3;
        *(ushort *)(iVar1->sprite_ptr1 + 0x3a) = (ushort)pbVar7->action_state << 4;
        *(ushort *)(iVar1->sprite_ptr1 + 0x3a) =
             *(ushort *)(iVar1->sprite_ptr1 + 0x3a) | (ushort)(pbVar7->sub_action >> 4);
        *(short *)(iVar1->sprite_ptr1 + 0x3a) = *(short *)(iVar1->sprite_ptr1 + 0x3a) << 3;
        *(ushort *)(iVar1->sprite_ptr1 + 0x3c) = (pbVar7->sub_action & 0xf) << 8;
        *(ushort *)(iVar1->sprite_ptr1 + 0x3c) =
             *(ushort *)(iVar1->sprite_ptr1 + 0x3c) | (ushort)pbVar7->counter1;
        *(short *)(iVar1->sprite_ptr1 + 0x3c) = *(short *)(iVar1->sprite_ptr1 + 0x3c) << 3;
        iVar4 = (uint)_DAT_1f8000c0 - (uint)*(ushort *)(iVar1->sprite_ptr1 + 8);
        _DAT_1f8000c0 = (ushort)iVar4;
        iVar6 = (uint)_DAT_1f8000c2 - (uint)*(ushort *)(iVar1->sprite_ptr1 + 10);
        _DAT_1f8000c2 = (ushort)iVar6;
        pbVar7 = pbVar7 + 9;
        iVar2 = (uint)_DAT_1f8000c4 - (uint)*(ushort *)(iVar1->sprite_ptr1 + 0xc);
        _DAT_1f8000c4 = (ushort)iVar2;
        if (0x800 < iVar4 * 0x10000 >> 0x10) {
          _DAT_1f8000c0 = _DAT_1f8000c0 + -0x1000;
        }
        if ((short)_DAT_1f8000c0 < -0x800) {
          _DAT_1f8000c0 = _DAT_1f8000c0 + 0x1000;
        }
        if (0x800 < iVar6 * 0x10000 >> 0x10) {
          _DAT_1f8000c2 = _DAT_1f8000c2 - 0x1000;
        }
        if ((short)_DAT_1f8000c2 < -0x800) {
          _DAT_1f8000c2 = _DAT_1f8000c2 + 0x1000;
        }
        if (0x800 < iVar2 * 0x10000 >> 0x10) {
          _DAT_1f8000c4 = _DAT_1f8000c4 - 0x1000;
        }
        if ((short)_DAT_1f8000c4 < -0x800) {
          _DAT_1f8000c4 = _DAT_1f8000c4 + 0x1000;
        }
        if (param_3 == 0) {
          trap(0x1c00);
        }
        if ((param_3 == -1) && ((short)_DAT_1f8000c0 == -0x80000000)) {
          trap(0x1800);
        }
        *(short *)(iVar1->sprite_ptr1 + 0x10) = (short)_DAT_1f8000c0 / param_3;
        if (param_3 == 0) {
          trap(0x1c00);
        }
        if ((param_3 == -1) && ((short)_DAT_1f8000c2 == -0x80000000)) {
          trap(0x1800);
        }
        *(short *)(iVar1->sprite_ptr1 + 0x12) = (short)_DAT_1f8000c2 / param_3;
        if (param_3 == 0) {
          trap(0x1c00);
        }
        if ((param_3 == -1) && ((short)_DAT_1f8000c4 == -0x80000000)) {
          trap(0x1800);
        }
        iVar3 = iVar3 + 1;
        *(short *)(iVar1->sprite_ptr1 + 0x14) = (short)_DAT_1f8000c4 / param_3;
        iVar1 = iVar1 + 4;
      } while (iVar3 < (int)(uint)param_1->counter2);
    }
  }
  return;
}
