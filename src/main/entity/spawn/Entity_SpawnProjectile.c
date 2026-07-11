/**
 * @brief Spawns projectile entity 0x1B at entity position with scale 0x200, type 1, behavior 4
 * @note Original: func_80068214 at 0x80068214
 */
// Entity_SpawnProjectile



#include "tomba.h"
void FUN_80068214(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (DAT_1f800236 == '\x06') {
    FUN_800525d0(param_1,1);
  }
  else {
    iVar2 = FUN_800310f4(0x1b,0xffffffa0);
    if (iVar2 != 0) {
      iVar2->alloc_flags = iVar2->alloc_flags | 0x80;
      iVar2->pos_x = param_1->pos_y;
      iVar2->pos_y = *(short *)(param_1 + 0x32) + param_1->angle_delta * 2;
      uVar1 = param_1->pos_z;
      *(undefined4 *)(iVar2 + 0x54) = 0x200;
      *(undefined4 *)(iVar2 + 0x58) = 0x200;
      iVar2->state = 1;
      *(undefined4 *)(iVar2 + 0x50) = 0;
      iVar2->behavior_state = 4;
      *(undefined2 *)(iVar2 + 0x30) = uVar1;
    }
  }
  return;
}
