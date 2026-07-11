/**
 * @brief Entity type lookup: switch on entity[2] returns sprite/animation mode
 * @note Original: func_8005B5E4 at 0x8005B5E4
 */
// Entity_LookupType



undefined4 FUN_8005b5e4(int param_1)

{
  switch(*(undefined1 *)(param_1 + 2)) {
  case 0:
  case 0x10:
  case 0x19:
  case 0x1b:
  case 0x5f:
    return 2;
  case 1:
  case 8:
  case 0x13:
  case 0x33:
    return 1;
  default:
    return 0;
  case 0x40:
    return 4;
  case 0x41:
    return 3;
  }
}
