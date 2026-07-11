/**
 * @brief GPU OT processor: processes ordering table, submits primitives
 * @note Original: func_8003E264 at 0x8003E264
 */
// GPU_OT_Process



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void GPU_OT_Process(void)

{
  s32 bVar1;
  uint *puVar2;
  s32 in_zero;
  s32 extraout_at;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  s32 local_30;
  s32 local_2c;
  
  uVar5 = 0;
  bVar1 = DAT_1f800135 == '\0';
  do {
    puVar2 = _g_OT_Buffer;
    *(s16 *)(_g_OT_Buffer + 4) = 0x40;
    *(u8 *)((int)puVar2 + 6) = 0x80;
    *(u8 *)((int)puVar2 + 5) = 0x80;
    puVar2->flags = 0x80;
    *(s16 *)(puVar2 + 2) = (s16)uVar5;
    *(s16 *)((int)puVar2 + 10) = 0;
    *(u8 *)((int)puVar2 + 0xd) = 0;
    puVar2->sub_type = 0;
    *(s16 *)((int)puVar2 + 0xe) = 0;
    *(s16 *)((int)puVar2 + 0x12) = 0x100;
    GPU_SetTilePrimHeader(puVar2);
    Entity_SetFlagBit1(puVar2,0);
    puVar4 = _g_EntityBuffer;
    *puVar2 = *puVar2 & 0xff000000 | *_g_EntityBuffer & 0xffffff;
    puVar3 = puVar2 + 5;
    _g_OT_Buffer = puVar3;
    *puVar4 = *puVar4 & 0xff000000 | (uint)puVar2 & 0xffffff;
    GPU_SetupDrawMode2(puVar3,1,1,(uint)bVar1 << 4 | (uVar5 & 0x3ff) >> 6 | 0x100,0);
    OT_LinkPrimitives(_g_EntityBuffer,puVar3);
    puVar4 = puVar2 + 8;
    uVar5 = uVar5 + 0x40;
    _g_OT_Buffer = puVar4;
  } while ((uVar5 & 0xffff) < 0x140);
  GPU_SetupPrimitive2(puVar4,1);
  puVar3 = _g_EntityBuffer;
  *puVar4 = *puVar4 & 0xff000000 | _g_EntityBuffer[0x7ff] & 0xffffff;
  puVar3[0x7ff] = puVar3[0x7ff] & 0xff000000 | (uint)puVar4 & 0xffffff;
  _g_OT_Buffer = puVar2 + 0xb;
  local_30 = CONCAT22(_g_CameraTargetY,_g_CameraTargetX);
  local_2c = CONCAT22(local_2c._2_2_,_g_CameraTargetZ);
  GTE_SetProjectionDist(6);
  setCopReg(2,in_zero,local_30);
  setCopReg(2,extraout_at,local_2c);
  GTE_DepthCheck(0);
  return;
}
