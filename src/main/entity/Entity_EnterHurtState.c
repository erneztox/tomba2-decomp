/**
 * @brief Enters hurt state: sets entity=2, plays SFX 0x17, resets collision globals
 * @note Original: func_80073260 at 0x80073260
 */
// Entity_EnterHurtState



#include "tomba.h"
void FUN_80073260(u8 *param_1)

{
  *param_1 = 2;
  if (param_1->combat_flag != '\0') {
    FUN_80074590(0x17,0,0xf);
  }
  DAT_800e7fc5 = 0;
  FUN_80054198(&g_CollisionEntity);
  g_CollisionType = 0;
  DAT_800e7e86 = 0;
  DAT_800e7e87 = 0;
  return;
}
