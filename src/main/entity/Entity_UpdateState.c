/**
 * @brief Updates entity state machine
 * @note Original address: 0x800726D4
 */
// Entity_UpdateState

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_UpdateState(int param_1)

{
  u8 *puVar1;
  s16 sVar2;
  s16 sVar3;
  uint *puVar4;
  int iVar5;
  u8 uVar6;
  
  puVar4 = _g_OT_Buffer;
  sVar2 = **(s16 **)(param_1 + 0x10);
  sVar3 = **(s16 **)(param_1 + 0x10);
  if (-1 < sVar2) {
    puVar1 = (u8 *)((int)_g_OT_Buffer + 3);
    _g_OT_Buffer = _g_OT_Buffer + 4;
    *puVar1 = 3;
    *(u8 *)((int)puVar4 + 7) = 0x60;
    uVar6 = (u8)sVar3;
    *(u8 *)((int)puVar4 + 6) = uVar6;
    *(u8 *)((int)puVar4 + 5) = uVar6;
    puVar4->flags = uVar6;
    if (sVar2 != 0xff) {
      *(u8 *)((int)puVar4 + 7) = 0x62;
    }
    *(s16 *)(puVar4 + 3) = 0x140;
    *(s16 *)((int)puVar4 + 10) = 0;
    *(s16 *)(puVar4 + 2) = 0;
    *(s16 *)((int)puVar4 + 0xe) = 0xf0;
    iVar5 = _g_EntityBuffer;
    *puVar4 = *(uint *)(_g_EntityBuffer + 0x28) | 0x3000000;
    *(uint **)(iVar5 + 0x28) = puVar4;
    puVar4 = _g_OT_Buffer;
    FUN_80083de0(_g_OT_Buffer,0,0,0,0);
    iVar5 = _g_EntityBuffer;
    *puVar4 = *(uint *)(_g_EntityBuffer + 0x28) | 0x2000000;
    *(uint **)(iVar5 + 0x28) = puVar4;
    _g_OT_Buffer = _g_OT_Buffer + 3;
  }
  return;
}

