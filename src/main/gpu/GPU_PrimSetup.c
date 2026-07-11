/**
 * @brief GPU primitive setup: creates sprite prim at _g_OT_Buffer with params
 * @note Original: func_8007CDD4 at 0x8007CDD4
 */
// GPU_PrimSetup



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void GPU_PrimSetup(s16 *param_1)

{
  int iVar1;
  uint *puVar2;
  
  *(u8 *)((int)_g_OT_Buffer + 7) = 0x65;
  *(s16 *)((int)_g_OT_Buffer + 0xe) = 0x7c3f;
  *(s16 *)(_g_OT_Buffer + 2) = *param_1 + param_1->kind + -0x10;
  *(s16 *)((int)_g_OT_Buffer + 10) = param_1->flags + param_1->sub_type + -0x10;
  if (DAT_800bfe4c == '\0') {
    _g_OT_Buffer->sub_type = 0;
  }
  else {
    if (DAT_800bfe4c != '\x01') {
      *(u8 *)((int)_g_OT_Buffer + 0xd) = 0x78;
      goto LAB_8007ce68;
    }
    _g_OT_Buffer->sub_type = 0x10;
  }
  *(u8 *)((int)_g_OT_Buffer + 0xd) = 0x78;
LAB_8007ce68:
  *(s16 *)(_g_OT_Buffer + 4) = 0x10;
  *(s16 *)((int)_g_OT_Buffer + 0x12) = 0x10;
  iVar1 = _g_EntityBuffer;
  *_g_OT_Buffer = *(uint *)(_g_EntityBuffer + 8) | 0x4000000;
  *(uint **)(iVar1 + 8) = _g_OT_Buffer;
  puVar2 = _g_OT_Buffer + 5;
  _g_OT_Buffer = _g_OT_Buffer + 8;
  GPU_SetupDrawMode2(puVar2,0,0,0x1f,0);
  iVar1 = _g_EntityBuffer;
  *puVar2 = *(uint *)(_g_EntityBuffer + 8) | 0x2000000;
  *(uint **)(iVar1 + 8) = puVar2;
  return;
}
