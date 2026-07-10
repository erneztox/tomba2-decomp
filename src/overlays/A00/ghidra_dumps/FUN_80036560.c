// FUN_80036560

undefined4 FUN_80036560(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 2;
  }
  else {
    if (param_1 == 1) {
      *param_2 = 2;
      return 4;
    }
    if (param_1 == 2) {
      *param_2 = 6;
      return 3;
    }
    if (param_1 == 3) {
      *param_2 = 9;
      return 3;
    }
    if (param_1 == 4) {
      *param_2 = 0xc;
      return 1;
    }
    uVar1 = 0;
    if (param_1 == 5) {
      *param_2 = 0xd;
      return 1;
    }
  }
  *param_2 = 0;
  return uVar1;
}

