/**
 * @brief Entity state dispatch variant 2: switch on entity->behavior_state
 * @note Original: func_80026AD0 at 0x80026AD0
 */
// Entity_StateDispatch2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_80026ad0(int param_1)

{
  int iVar1;
  
  switch(param_1->behavior_state) {
  case 0:
    if (DAT_800bf818 != '\x01') {
      return 0;
    }
    param_1->sub_type = DAT_800bf817 + '\x01';
    FUN_800269bc(param_1);
    break;
  case 1:
    if (DAT_800bf80f == '\0') {
      FUN_800269ec(param_1);
      FUN_8001cf2c();
      iVar1 = _DAT_1f800138;
      _DAT_1f800138->normal_z = 3;
      iVar1->sprite_x = 0;
      param_1->behavior_state = 6;
      DAT_800bf818 = 2;
      return 0;
    }
    return 0;
  case 2:
    if (DAT_800bf80f != '\0') {
      return 0;
    }
    FUN_800269fc(param_1);
    break;
  case 3:
    if (DAT_800bf818 != '\x03') {
      return 0;
    }
    FUN_800269bc(param_1);
    break;
  case 4:
    if (DAT_800bf80f != '\0') {
      return 0;
    }
    FUN_80026a1c(param_1);
    FUN_800269ec(param_1);
    iVar1 = _DAT_1f800138;
    _DAT_1f800138->normal_z = 2;
    iVar1->sprite_x = 4;
    DAT_800bf818 = '\x04';
    break;
  case 5:
    if (DAT_800bf80f == '\0') {
      param_1->behavior_state = 0;
      FUN_800269fc(param_1);
      return 0;
    }
    return 0;
  case 6:
    param_1->behavior_state = 2;
    return 1;
  default:
    goto switchD_80026b0c_default;
  }
  param_1->behavior_state = param_1->behavior_state + '\x01';
switchD_80026b0c_default:
  return 0;
}
