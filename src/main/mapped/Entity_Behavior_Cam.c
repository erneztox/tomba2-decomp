/**
 * @brief Entity camera behavior: entity[4] state 0->1->2->3 transitions
 * @note Original: func_8006C478 at 0x8006C478
 */
// Entity_Behavior_Cam



void FUN_8006c478(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        param_1[4] = 3;
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      FUN_8007ab44(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1[0x5f] = 0x80;
    FUN_8006acac(param_1);
    **(undefined2 **)(param_1 + 0xc0) = 0xff6a;
    *param_1 = 2;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    param_1[4] = param_1[4] + '\x01';
    if (param_1[3] == '\0') {
      param_1[5] = 1;
    }
    else {
      FUN_80031558(param_1,(byte)param_1[2] - 1);
    }
  }
  if (param_1[5] == '\0') {
    FUN_8006c328(param_1);
  }
  else if (param_1[5] == '\x01') {
    FUN_8006c0c4(param_1);
  }
  FUN_8006b020(param_1,1);
  param_1[1] = 1;
  return;
}
