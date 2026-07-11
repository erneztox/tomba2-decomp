/**
 * @brief Entity move state: entity[6] state 0->1->2, applies movement
 * @note Original: func_8005F1B0 at 0x8005F1B0
 */
// Entity_State_Move



void FUN_8005f1b0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      FUN_80066538(param_1);
      if (*(char *)(param_1 + 0x29) == '\0') {
        if (0x2700 < *(short *)(param_1 + 0x4a)) {
          *(undefined1 *)(param_1 + 4) = 1;
          *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x4a);
          FUN_80056d44(param_1,0);
          *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0x50);
        }
      }
      else {
        FUN_8005314c(param_1);
        *(undefined1 *)(param_1 + 0x145) = 0;
        *(undefined1 *)(param_1 + 0x144) = 0;
        *(undefined2 *)(param_1 + 0x50) = 0;
        *(undefined1 *)(param_1 + 0x148) = 0;
        *(undefined1 *)(param_1 + 4) = 1;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        iVar2 = FUN_8005344c(param_1);
        if (iVar2 == 0) {
          *(undefined2 *)(param_1 + 0x44) = 0;
          FUN_80054d14(param_1,2,4);
          *(undefined1 *)(param_1 + 5) = 0;
        }
      }
      FUN_800551c4(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    FUN_80074590(0x23,0,0);
    FUN_80053d90(param_1);
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x61) = 0;
    *(undefined1 *)(param_1 + 0x146) = 0;
    FUN_800663a8(param_1,1);
  }
  FUN_80066478(param_1);
  return;
}
