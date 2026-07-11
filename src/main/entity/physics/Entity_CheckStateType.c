/**
 * @brief Entity state type check: switch on entity->behavior_type returning entity[0x44] state
 * @note Original: func_8005376C at 0x8005376C
 */
// Entity_CheckStateType



bool FUN_8005376c(int param_1)

{
  switch(param_1->behavior_type) {
  case 0:
  case 1:
  case 2:
  case 6:
  case 7:
  case 8:
    return param_1->sub_state2 != '\0';
  case 3:
  case 4:
  case 5:
  case 9:
    return false;
  default:
    return false;
  }
}
