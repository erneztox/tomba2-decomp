/**
 * @brief Processes one item from the render queue (D_800BF548)
 * @note Original address: 0x8004FB4C
 */
// Render_ProcessQueueItem

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Render_ProcessQueueItem(s32 *param_1)

{
  uint *puVar1;
  int iVar2;
  s16 local_30;
  s16 sStack_2e;
  s16 local_2c;
  s16 uStack_2a;
  s16 local_28;
  s16 local_26;
  s16 local_24;
  s16 local_22;
  
  puVar1 = _g_OT_Buffer;
  local_30 = (s16)*param_1;
  local_2c = (s16)param_1->flags;
  sStack_2e = (s16)((uint)*param_1 >> 0x10);
  _local_30 = CONCAT22(sStack_2e,local_30 + -4);
  uStack_2a = (s16)((uint)param_1->flags >> 0x10);
  _local_2c = CONCAT22(uStack_2a,local_2c + 8);
  if ((*(u8 *)((int)param_1 + 10) < 3) && (*(u8 *)((int)param_1 + 10) != 0)) {
    local_24 = 0x140;
    local_22 = 0xf0;
    local_28 = 0;
    _g_OT_Buffer = _g_OT_Buffer + 3;
    local_26 = (u16)DAT_1f800135 << 8;
    FUN_80081cf8(puVar1,&local_28);
    iVar2 = _g_EntityBuffer;
    *puVar1 = *(uint *)(_g_EntityBuffer + 0xc) | 0x2000000;
    *(uint **)(iVar2 + 0xc) = puVar1;
    FUN_8004eb94(param_1 + 4,
                 (int)(((uint)*(u16 *)((int)param_1 + 2) + (uint)*(u8 *)((int)param_1 + 0xb)) *
                      0x10000) >> 0x10);
    if (*(s8*)((int)param_1 + 10) == '\x01') {
      FUN_8004eb94((int)param_1 + 0x3d,
                   (int)(((uint)*(u16 *)((int)param_1 + 2) + (uint)*(u8 *)((int)param_1 + 0xb)
                         + -8) * 0x10000) >> 0x10);
    }
    puVar1 = _g_OT_Buffer;
    _g_OT_Buffer = _g_OT_Buffer + 3;
    local_28 = local_30;
    local_22 = uStack_2a;
    local_26 = sStack_2e + (u16)DAT_1f800135 * 0x100;
    local_24 = local_2c;
    FUN_80081cf8(puVar1,&local_28);
    iVar2 = _g_EntityBuffer;
    *puVar1 = *(uint *)(_g_EntityBuffer + 0xc) | 0x2000000;
    *(uint **)(iVar2 + 0xc) = puVar1;
  }
  else {
    FUN_8004eb94(param_1 + 4,
                 (int)(((uint)*(u16 *)((int)param_1 + 2) + (uint)*(u8 *)((int)param_1 + 0xb)) *
                      0x10000) >> 0x10);
  }
  FUN_8005019c(&local_30,*(u8 *)(param_1 + 0x22),0,3);
  return;
}

