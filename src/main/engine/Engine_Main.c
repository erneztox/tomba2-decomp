/**
 * @brief Engine main loop: processes frame, updates subsystems, draws
 * @note Original: func_8003EBE0 at 0x8003EBE0
 */
// Engine_Main



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Engine_Main(void)

{
  s32 bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  s16 sVar8;
  int iVar9;
  int iVar10;
  
  Engine_Update2();
  if (_DAT_1f800098 == 0) {
    _DAT_1f800094 = _DAT_1f800094 + 2;
    if (0xff < _DAT_1f800094) {
      _DAT_1f800098 = 1;
    }
  }
  else if (0 < _DAT_1f800094) {
    _DAT_1f800094 = _DAT_1f800094 + -2;
  }
  _g_GTE_Work8C = _DAT_1f800090 + -0x1e;
  if (_g_GTE_Work8C < 0x100) {
    if (_g_GTE_Work8C < 0) {
      _g_GTE_Work8C = 0;
    }
  }
  else {
    _g_GTE_Work8C = 0xff;
  }
  bVar1 = 0x1a3 < _DAT_1f800090;
  if (bVar1) {
    DAT_800a3b0c = 0;
  }
  iVar7 = 0;
  _DAT_1f800090 = _DAT_1f800090 + 1;
  do {
    iVar9 = _g_GTE_Work8C;
    if (iVar7 != 0) {
      iVar9 = 0x100 - _g_GTE_Work8C;
    }
    uVar3 = iVar9 >> 1;
    iVar10 = 0;
    iVar9 = 0;
    sVar8 = 0;
    do {
      puVar2 = _g_OT_Buffer;
      _g_OT_Buffer->flags = uVar3 << 0x10 | uVar3 << 8 | uVar3;
      puVar2->state = 0x1000080;
      *(s16 *)((int)puVar2 + 10) = 0;
      if (iVar7 == 0) {
        puVar2->sub_type = 0x7fe80000;
        if (iVar10 == 0) {
          puVar2->sub_type = 0x40;
          *(s16 *)(puVar2 + 4) = 0x40;
          *(s16 *)(puVar2 + 2) = 0;
        }
        else {
          *(s16 *)(puVar2 + 2) = sVar8 + -0x40;
        }
      }
      else {
        puVar2->sub_type = 0x7fa80000;
        *(s16 *)(puVar2 + 2) = sVar8;
      }
      GPU_SetTilePrimHeader(puVar2);
      Entity_SetFlagBit1(puVar2,iVar7 == 0);
      puVar5 = puVar2 + 5;
      OT_LinkPrimitives(_g_EntityBuffer,puVar2);
      if (iVar7 == 0) {
        uVar4 = iVar9 + 0x2c0;
      }
      else {
        uVar4 = iVar9 + 0x240;
      }
      _g_OT_Buffer = puVar5;
      GPU_SetupDrawMode2(puVar5,1,1,(int)(uVar4 & 0x3ff) >> 6 | 0xb0,0);
      puVar6 = puVar2 + 8;
      OT_LinkPrimitives(_g_EntityBuffer,puVar5);
      iVar9 = iVar9 + 0x40;
      iVar10 = iVar10 + 1;
      sVar8 = sVar8 + 0x80;
      _g_OT_Buffer = puVar6;
    } while (iVar10 < 3);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  if ((DAT_800a3b0c < 3) && (DAT_800a3b0c != 0)) {
    GPU_SetupPrimitive2(puVar6,1);
    iVar7 = _g_EntityBuffer;
    *puVar6 = *puVar6 & 0xff000000 | *(uint *)(_g_EntityBuffer + 0x1ffc) & 0xffffff;
    _g_OT_Buffer = puVar2 + 0xb;
    *(uint *)(iVar7 + 0x1ffc) = *(uint *)(iVar7 + 0x1ffc) & 0xff000000 | (uint)puVar6 & 0xffffff;
  }
  return bVar1;
}
