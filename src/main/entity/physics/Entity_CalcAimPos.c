/**
 * @brief Calculates aim position: GTE cos/sin on entity[0x56], offset from entity[0x2E/0x32/0x36]
 * @note Original: func_80024AF0 at 0x80024AF0
 */
// Entity_CalcAimPos



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_CalcAimPos(int param_1)

{
  u16 uVar1;
  int iVar2;
  s16 sVar3;
  
  if (param_1->direction == '\0') {
    uVar1 = param_1->draw_angle;
  }
  else {
    uVar1 = param_1->draw_angle - 0x800U & 0xfff;
  }
  param_1->rot_y = uVar1;
  if (param_1->entity_flags < 0) {
    _DAT_1f800088 = 0x14;
    sVar3 = *(s16 *)(param_1 + 0x66) + -10;
  }
  else {
    _DAT_1f800088 = 0x28;
    sVar3 = *(s16 *)(param_1 + 0x66) + -0x1e;
  }
  iVar2 = Math_CosGTE((int)param_1->rot_y);
  param_1->draw_pos_x = param_1->pos_y + (s16)(iVar2 * sVar3 >> 0xc);
  iVar2 = Math_Cos((int)param_1->rot_y);
  param_1->draw_pos_y = *(s16 *)(param_1 + 0x32) - param_1->target_angle;
  param_1->draw_pos_z = param_1->pos_z - (s16)(iVar2 * sVar3 >> 0xc);
  return;
}
