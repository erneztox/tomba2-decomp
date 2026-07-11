/**
 * @brief Entity behavior dispatch variant 2: sets entity[0x176] type
 * @note Original: func_80053670 at 0x80053670
 */
// Entity_BehaviorDispatch2



void FUN_80053670(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 8) {
    *(undefined1 *)(param_1 + 0x176) = *(undefined1 *)(param_1 + 0x6c);
  }
  iVar1 = FUN_800535d4(param_1);
  switch(*(undefined1 *)(param_1 + 0x176)) {
  case 0:
  case 1:
  case 2:
  case 6:
  case 7:
  case 8:
    if (param_3 != 8) {
      FUN_800534b0(param_1,param_2,param_3,iVar1);
    }
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0x79) = 1;
      return;
    }
  default:
    *(undefined1 *)(param_1 + 0x79) = 0;
    break;
  case 3:
  case 4:
  case 5:
    *(undefined1 *)(param_1 + 0x79) = 0;
    if (param_3 != 8) {
      FUN_800534b0(param_1,param_2,param_3,iVar1);
    }
    break;
  case 9:
    *(undefined1 *)(param_1 + 0x79) = 0;
    if (param_3 != 8) {
      FUN_800534b0(param_1,param_2,param_3,iVar1 + 1);
    }
  }
  return;
}
