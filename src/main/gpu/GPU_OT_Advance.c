/**
 * @brief GPU OT advance: increments ordering table pointer, wraps at limit
 * @note Original: func_8007FC24 at 0x8007FC24
 */
// GPU_OT_Advance



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8007fc24(void)

{
  u8 *puVar1;
  uint *puVar2;
  int iVar3;
  
  puVar2 = _g_OT_Buffer;
  puVar1 = (u8 *)((int)_g_OT_Buffer + 7);
  _g_OT_Buffer = _g_OT_Buffer + 9;
  *puVar1 = 0x38;
  *(u8 *)((int)puVar2 + 6) = 0x46;
  *(u8 *)((int)puVar2 + 0xe) = 0x46;
  *(u8 *)((int)puVar2 + 0x16) = 0x46;
  *(u8 *)((int)puVar2 + 0x1e) = 0x10;
  puVar2->flags = 0;
  *(u8 *)((int)puVar2 + 5) = 0;
  puVar2->sub_type = 0;
  *(u8 *)((int)puVar2 + 0xd) = 0;
  puVar2->behavior_state = 0;
  *(u8 *)((int)puVar2 + 0x15) = 0;
  puVar2->sub_action = 0;
  *(u8 *)((int)puVar2 + 0x1d) = 0;
  *(s16 *)(puVar2 + 2) = 0;
  *(s16 *)((int)puVar2 + 10) = 0;
  *(s16 *)(puVar2 + 4) = 0x140;
  *(s16 *)((int)puVar2 + 0x12) = 0;
  *(s16 *)(puVar2 + 6) = 0;
  *(s16 *)((int)puVar2 + 0x1a) = 0xf0;
  *(s16 *)(puVar2 + 8) = 0x140;
  *(s16 *)((int)puVar2 + 0x22) = 0xf0;
  iVar3 = _g_EntityBuffer;
  *puVar2 = *(uint *)(_g_EntityBuffer + 4) | 0x8000000;
  *(uint **)(iVar3 + 4) = puVar2;
  return;
}
