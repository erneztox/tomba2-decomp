/**
 * @brief Entity sprite draw switch: switch on entity[3] type, sets entity[0x40]=1
 * @note Original: func_8007D0D0 at 0x8007D0D0
 */
// Entity_DrawSpriteSwitch



void FUN_8007d0d0(int param_1)

{
  switch(*(undefined1 *)(param_1 + 3)) {
  case 0:
  case 1:
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    *(undefined2 *)(param_1 + 0x40) = 1;
  default:
    return;
  }
  if (DAT_800bf8a3 == '\0') {
    *(undefined2 *)(param_1 + 0x40) = 3;
    return;
  }
  if (DAT_800bf8a3 == '\x01') {
    *(undefined2 *)(param_1 + 0x40) = 2;
    return;
  }
  *(undefined2 *)(param_1 + 0x40) = 1;
  return;
}
