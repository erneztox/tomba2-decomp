/**
 * @brief Spawns entity 0x35 at offset from entity[0x84] if entity type is 0 or 3
 * @note Original: func_800538E0 at 0x800538E0
 */
// Entity_Behavior_SpawnAtOffset



#include "tomba.h"
void FUN_800538e0(int param_1,int param_2,int param_3)

{
  u16 uVar1;
  int iVar2;
  u8 auStack_18->kind;
  s16 local_16;
  s16 local_12;
  s16 local_e;
  
  if ((param_3 == 0) &&
     ((uVar1 = param_1->type_flags >> 8, (uVar1 & 0xf) == 0 || ((uVar1 & 0xf) == 3)))) {
    local_16 = *(s16 *)(param_2 + 2);
    local_12 = *(s16 *)(param_2 + 6) + param_1->bounds_min_y;
    local_e = *(s16 *)(param_2 + 10);
    iVar2 = FUN_8003116c(0x35,auStack_18,0xffffffa6);
    if (iVar2 != 0) {
      iVar2->alloc_flags = iVar2->alloc_flags | 0x80;
    }
  }
  return;
}
