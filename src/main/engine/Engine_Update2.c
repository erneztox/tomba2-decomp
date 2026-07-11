/**
 * @brief Engine update variant 2: checks DAT_800a3b0c, updates subsystems
 * @note Original: func_8003E030 at 0x8003E030
 */
// Engine_Update2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Engine_Update2(void)

{
  s32 bVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  
  if (DAT_800a3b0c == '\x02') {
    DAT_800a3b10 = DAT_800a3b10 + 0x88;
    DAT_800a3b14 = DAT_800a3b14 + 0x20;
    iVar7 = _DAT_1f800094 * 0x180 >> 8;
    iVar4 = Math_CosGTE();
    iVar5 = Math_Cos(DAT_800a3b10);
    puVar2 = _g_OT_Buffer;
    uVar8 = 0;
    GPU_SetupPrimitive2(_g_OT_Buffer,0);
    puVar3 = _g_EntityBuffer;
    bVar1 = DAT_1f800135 == '\0';
    *puVar2 = *puVar2 & 0xff000000 | *_g_EntityBuffer & 0xffffff;
    _g_OT_Buffer = puVar2 + 3;
    *puVar3 = *puVar3 & 0xff000000 | (uint)puVar2 & 0xffffff;
    do {
      puVar2 = _g_OT_Buffer;
      *(u8 *)((int)_g_OT_Buffer + 6) = 0x80;
      *(u8 *)((int)puVar2 + 5) = 0x80;
      puVar2->flags = 0x80;
      *(s16 *)((int)puVar2 + 10) = (s16)(iVar5 * iVar7 >> 0x12);
      *(u8 *)((int)puVar2 + 0xd) = 0;
      puVar2->sub_type = 0;
      *(s16 *)((int)puVar2 + 0xe) = 0;
      *(s16 *)(puVar2 + 2) = (s16)uVar8 + (s16)(iVar4 * iVar7 * 3 >> 0x12);
      *(s16 *)(puVar2 + 4) = 0x40;
      *(s16 *)((int)puVar2 + 0x12) = 0x100;
      GPU_SetTilePrimHeader(puVar2);
      Entity_SetFlagBit1(puVar2,1);
      puVar3 = _g_EntityBuffer;
      *puVar2 = *puVar2 & 0xff000000 | *_g_EntityBuffer & 0xffffff;
      puVar6 = puVar2 + 5;
      _g_OT_Buffer = puVar6;
      *puVar3 = *puVar3 & 0xff000000 | (uint)puVar2 & 0xffffff;
      GPU_SetupDrawMode2(puVar6,1,1,(uint)bVar1 << 4 | (uVar8 & 0x3ff) >> 6 | 0x100,0);
      OT_LinkPrimitives(_g_EntityBuffer,puVar6);
      _g_OT_Buffer = puVar2 + 8;
      uVar8 = uVar8 + 0x40;
    } while ((uVar8 & 0xffff) < 0x140);
  }
  return;
}
