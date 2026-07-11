/**
 * @brief Event handler variant 2: switch on param_1, returns action code
 * @note Original: func_800364AC at 0x800364AC
 */
// Event_Handler2



void FUN_800364ac(int param_1,uint param_2,s32 *param_3,s32 *param_4)

{
  s32 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_1 == 1) {
      uVar1 = 1;
      if (param_2 < 3) goto LAB_80036540;
      uVar1 = 2;
    }
    else if (param_1 == 2) {
      uVar1 = 4;
      if ((param_2 != 0) && (uVar1 = 5, param_2 != 1)) {
        uVar1 = 5;
        param_2 = 1;
        goto LAB_80036540;
      }
    }
    else {
      if (param_1 == 3) {
        uVar1 = 6;
        goto LAB_80036540;
      }
      if (param_1 == 4) {
        uVar1 = 7;
      }
      else {
        uVar1 = 0;
        if (param_1 == 5) {
          uVar1 = 8;
        }
      }
    }
    param_2 = 0;
  }
LAB_80036540:
  *param_3 = uVar1;
  uVar1 = FUN_80078770(uVar1,param_2 & 0xff);
  *param_4 = uVar1;
  return;
}
