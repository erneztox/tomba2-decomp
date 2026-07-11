/**
 * @brief Initializes player entity: sets global ptr, positions 0, scales 0x200, angles 0, entity->render_flags=0xF
 * @note Original: func_800716B4 at 0x800716B4
 */
// Entity_InitPlayer



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_InitPlayer(int param_1)

{
  s32 uVar1;
  int iVar2;
  
  _g_PlayerEntity = param_1;
  iVar2 = Entity_AllocFromPool(param_1,0xc,_g_EntityConfig,&DAT_800a4bc8);
  uVar1 = _g_EntityConfig2;
  if (iVar2 == 0) {
    param_1->render_flags = 0xf;
    param_1->scale_y = 0;
    param_1->pos_y_fixed = 0;
    *(s32 *)(param_1 + 0x2c) = 0;
    param_1->scale_z = 0x200;
    param_1->scale_y = 0x200;
    param_1->scale_x = 0x200;
    param_1->rot_z = 0;
    param_1->rot_y = 0;
    param_1->rot_x = 0;
    param_1->state_7B = 0;
    param_1->sprite_data = uVar1;
    Entity_InitFromScript(param_1,&PTR_DAT_8001b860,&DAT_800a3cd0);
    param_1->state = param_1->state + '\x01';
  }
  return;
}
