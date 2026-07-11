/**
 * @brief Entity state type check: switch on entity[0x176] returning entity[0x44] state
 * @note Original: func_8005376C at 0x8005376C
 */
// Entity_CheckStateType



bool FUN_8005376c(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x176)) {
  case 0:
  case 1:
  case 2:
  case 6:
  case 7:
  case 8:
    return *(char *)(param_1 + 0x79) != '\0';
  case 3:
  case 4:
  case 5:
  case 9:
    return false;
  default:
    return false;
  }
}
