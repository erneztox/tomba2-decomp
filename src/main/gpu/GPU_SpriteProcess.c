/**
 * @brief GPU sprite processor: reads sprite data, builds primitives
 * @note Original: func_8007CC00 at 0x8007CC00
 */
// GPU_SpriteProcess



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void GPU_SpriteProcess(int param_1)

{
  int iVar1;
  u16 uVar2;
  s16 *puVar3;
  u8 *pbVar4;
  int iVar5;
  s16 *puVar6;
  u16 uVar7;
  uint *puVar8;
  
  if (param_1->sub_anim_id == '\x01') {
    uVar7 = 0xff;
    if (param_1->sub_type == '\x01') {
      uVar7 = 0x12;
      _DAT_1f80000e = 0x7cbe;
    }
  }
  else {
    uVar7 = 0xff;
  }
  puVar6 = (s16 *)&DAT_800ecb88;
  iVar5 = 0;
  DAT_1f800007 = 0x65;
  _g_GTE_Data10 = 8;
  _DAT_1f800012 = 0x10;
  puVar8 = _g_OT_Buffer;
  if (0 < _DAT_1f80017e) {
    pbVar4 = &DAT_800ecb8b;
    puVar3 = (s16 *)((int)_g_OT_Buffer + 0x12);
    do {
      uVar2 = *pbVar4 & 0x7f;
      if ((uVar2 != uVar7) && (uVar7 != 0x12)) {
        _DAT_1f80000e = (uVar2 + 0x1f0) * 0x40 | 0x3f;
        uVar7 = uVar2;
      }
      *(u8 *)((int)puVar3 + -0xb) = DAT_1f800007;
      puVar3[-2] = _DAT_1f80000e;
      puVar3[-5] = *puVar6;
      puVar3[-4] = (u16)pbVar4[-1];
      *(u8 *)(puVar3 + -3) = pbVar4->flags;
      *(u8 *)((int)puVar3 + -5) = pbVar4->sub_type;
      if ((*pbVar4 & 0x80) == 0) {
        puVar3[-1] = _g_GTE_Data10;
      }
      else {
        puVar3[-1] = _g_GTE_Data10 << 1;
      }
      *puVar3 = _DAT_1f800012;
      iVar1 = _g_EntityBuffer;
      *puVar8 = *(uint *)(_g_EntityBuffer + 8) | 0x4000000;
      *(uint **)(iVar1 + 8) = puVar8;
      puVar3 = puVar3 + 10;
      puVar8 = puVar8 + 5;
      iVar5 = iVar5 + 1;
      pbVar4 = pbVar4 + 8;
      puVar6 = puVar6 + 4;
    } while (iVar5 < _DAT_1f80017e);
  }
  _g_OT_Buffer = puVar8 + 3;
  GPU_SetupDrawMode2(puVar8,0,0,0x1f,0);
  iVar5 = _g_EntityBuffer;
  *puVar8 = *(uint *)(_g_EntityBuffer + 8) | 0x2000000;
  *(uint **)(iVar5 + 8) = puVar8;
  return;
}
