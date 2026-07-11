/**
 * @brief Entity damage state: entity[6]=0->1, sets timer, applies knockback
 * @note Original: func_8006B9DC at 0x8006B9DC
 */
// Entity_State_Damage



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006b9dc(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined2 *)(param_1 + 0x40) = 1;
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    return;
  }
  sVar3 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar3 + -1;
  if (sVar3 == 1) {
    if (DAT_800e7f3e == '\0') {
      FUN_80074590(9,0,0);
      uVar2 = 0x12;
    }
    else {
      FUN_80074590(10,0,0);
      uVar2 = 10;
    }
    *(undefined2 *)(param_1 + 0x40) = uVar2;
  }
  if ((DAT_800e7f3e != '\0') && (*(char *)(param_1 + 0x5e) == '\0')) {
    *(undefined1 *)(param_1 + 0x5e) = 1;
    FUN_8006a8c8(param_1);
  }
  if ((DAT_800e7fc4 == '\x02') || (DAT_800e7fc6 == '\0')) {
    *(undefined1 *)(param_1 + 5) = 0;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
  }
  else if (DAT_800e7fc6 == '\x03') {
    *(undefined1 *)(param_1 + 0x46) = DAT_800e7fca;
    sVar3 = _DAT_800e7ed6;
    if (DAT_800e7e85 == '\t') {
      sVar3 = _DAT_800e7ed6 + -0x800;
    }
    *(short *)(param_1 + 0x68) = sVar3;
    uVar1 = DAT_800e7eaa;
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined1 *)(param_1 + 0x2a) = uVar1;
    FUN_8006b124(param_1);
    FUN_80069688(param_1);
    *(undefined1 *)(param_1 + 6) = 1;
  }
  FUN_8006b020(param_1,0);
  return;
}
