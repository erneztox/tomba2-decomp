/**
 * @brief UI item icon draw: renders item icon with 0x8000 flag + color code
 * @note Original: func_8004ED0C at 0x8004ED0C
 */
// UI_DrawItemIcon



void FUN_8004ed0c(undefined2 param_1,ushort param_2)

{
  undefined4 uVar1;
  undefined2 local_10;
  ushort local_e;
  undefined2 local_c;
  
  local_e = param_2 | 0x8000;
  local_c = 0xfffe;
  if (param_2 == 1) {
    uVar1 = 0x41;
    goto LAB_8004ed7c;
  }
  if ((short)param_2 < 2) {
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
  FUN_8004fa38(&local_10,1,uVar1);
  return;
}
