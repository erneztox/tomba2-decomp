/**
 * @brief UI item icon draw: renders item icon with 0x8000 flag + color code
 * @note Original: func_8004ED0C at 0x8004ED0C
 */
// UI_DrawItemIcon



void UI_DrawItemIcon(s16 param_1,u16 param_2)

{
  s32 uVar1;
  s16 local_10;
  u16 local_e;
  s16 local_c;
  
  local_e = param_2 | 0x8000;
  local_c = 0xfffe;
  if (param_2 == 1) {
    uVar1 = 0x41;
    goto LAB_8004ed7c;
  }
  if ((s16)param_2 < 2) {
    uVar1 = 0x41;
    if (param_2 != 0) goto LAB_8004ed7c;
  }
  else {
    if (param_2 == 2) {
      uVar1 = 0x42;
      goto LAB_8004ed7c;
    }
    uVar1 = 0x41;
    if (param_2 != 3) goto LAB_8004ed7c;
  }
  uVar1 = 0x40;
LAB_8004ed7c:
  local_10 = param_1;
  UI_DrawPanel2(&local_10,1,uVar1);
  return;
}
