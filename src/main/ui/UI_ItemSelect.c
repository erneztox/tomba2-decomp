/**
 * @brief UI item selector: switch on entity[0x60] value, selects item
 * @note Original: func_8004E29C at 0x8004E29C
 */
// UI_ItemSelect



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8004e29c(int param_1)

{
  undefined4 uVar1;
  
  switch((int)((param_1->draw_x - 0x6f) * 0x10000) >> 0x10) {
  case 0:
  case 1:
    if (DAT_800bf870 != '\x01') {
      return 0;
    }
    if (DAT_1f800207 != '\v') {
      return 0;
    }
    if (0x1494 < _DAT_1f800164) {
      return 0;
    }
    if (DAT_800bf916 != '\0') {
      return 2;
    }
    uVar1 = 0x62;
    break;
  case 2:
  case 3:
    if (DAT_800bf870 != '\x04') {
      return 0;
    }
    if (DAT_1f800207 != '\x0f') {
      return 0;
    }
    if (0x16d1 < _DAT_1f800164) {
      return 0;
    }
    if (DAT_800bf917 != '\0') {
      return 2;
    }
    uVar1 = 99;
    break;
  case 4:
  case 5:
    if (DAT_800bf870 != '\x06') {
      return 0;
    }
    if (DAT_1f800207 != '\x0e') {
      return 0;
    }
    if (_DAT_1f800164 < 0x5fe0) {
      return 0;
    }
    if (DAT_800bf918 != '\0') {
      return 2;
    }
    uVar1 = 100;
    break;
  default:
    return 0;
  }
  FUN_80040b48(uVar1);
  return 1;
}
