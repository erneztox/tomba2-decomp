/**
 * @brief Entity walk state: entity[6] state 0->1->2, moves entity
 * @note Original: func_8006670C at 0x8006670C
 */
// Entity_State_Walk



void FUN_8006670c(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      FUN_80066538(param_1);
      iVar3 = FUN_800665f4(param_1);
      if (iVar3 != 0) {
        return;
      }
      if (*(char *)(param_1 + 0x29) == '\0') {
        if ((0x27ff < *(short *)(param_1 + 0x4a)) || (0xc < *(short *)(param_1 + 0x40))) {
          *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x4a);
          *(undefined1 *)(param_1 + 4) = 1;
          FUN_80056d44(param_1,0);
          uVar2 = *(undefined2 *)(param_1 + 0x50);
          *(undefined2 *)(param_1 + 0x50) = 0;
          *(undefined2 *)(param_1 + 0x4a) = uVar2;
        }
      }
      else {
        FUN_8005314c(param_1);
        *(undefined1 *)(param_1 + 0x144) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x50) = 0;
        *(undefined1 *)(param_1 + 0x145) = 0;
        *(undefined1 *)(param_1 + 0x148) = 0;
        *(undefined1 *)(param_1 + 4) = 1;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        iVar3 = FUN_8005344c(param_1);
        if (iVar3 == 0) {
          *(undefined2 *)(param_1 + 0x44) = 0;
          FUN_80054d14(param_1,2,0);
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
    FUN_800312d4(6,param_1 + 0x2c,0xffffffb0);
    *(undefined1 *)(param_1 + 0x61) = 0;
    *(undefined1 *)(param_1 + 0x146) = 0;
    *(undefined1 *)(param_1 + 0x181) = 0;
    FUN_800663a8(param_1,0);
  }
  FUN_80066478(param_1);
  return;
}
