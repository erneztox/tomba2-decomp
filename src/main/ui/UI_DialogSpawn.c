/**
 * @brief UI dialog spawner: allocs child type 5, sets dialog callback
 * @note Original: func_8004DC84 at 0x8004DC84
 */
// UI_DialogSpawn



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int FUN_8004dc84(undefined4 param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_80072ddc(0,0x80,3,5);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      pcVar2 = FUN_8004df94;
      goto LAB_8004dd1c;
    }
    if (param_2 == 2) {
      pcVar2 = FUN_8004e414;
      goto LAB_8004dd1c;
    }
    if (param_2 == 3) {
      pcVar2 = FUN_8004e808;
      goto LAB_8004dd1c;
    }
    if (param_2 == 4) {
      pcVar2 = FUN_8004e928;
      goto LAB_8004dd1c;
    }
  }
  pcVar2 = FUN_8004de04;
LAB_8004dd1c:
  iVar1->callback = pcVar2;
  iVar1->draw_x = (short)param_1;
  uVar3 = FUN_8004dbc0(param_1);
  iVar1->sprite_data = _DAT_800ecf58;
  FUN_80077b38(iVar1,&PTR_DAT_80017334,uVar3);
  if (param_2 != 3) {
    DAT_800bf80a = 1;
    DAT_800bf80b = (undefined1)param_1;
    DAT_1f800137 = 2;
  }
  return iVar1;
}
