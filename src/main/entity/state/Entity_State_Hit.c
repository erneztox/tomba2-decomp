/**
 * @brief Entity hit state: entity[0x158] ptr, checks hit reaction
 * @note Original: func_80057A68 at 0x80057A68
 */
// Entity_State_Hit



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80057a68(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_80024548(param_1,0);
  *(int *)(param_1 + 0x158) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  param_1[0x16a] = 0;
  param_1[0x181] = 0;
  uVar4 = _DAT_1f800084;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  param_1[0x145] = 0;
  param_1[0x144] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  bVar1 = param_1[0x164];
  param_1[0x14a] = param_1[0x147] | 2;
  if (bVar1 == 6) {
    uVar2 = 0x16;
LAB_80057bd4:
    param_1[5] = uVar2;
    uVar4 = 4;
  }
  else {
    if (bVar1 < 7) {
      if (bVar1 == 3) {
        param_1[5] = 8;
        uVar4 = 5;
        goto LAB_80057be4;
      }
      if (3 < bVar1) {
        uVar2 = 0x14;
        if ((bVar1 != 4) && (uVar2 = 0x15, bVar1 != 5)) {
          return 1;
        }
        goto LAB_80057bd4;
      }
      if (bVar1 != 1) {
        if (bVar1 != 2) {
          return 1;
        }
        goto LAB_80057ba8;
      }
    }
    else if (bVar1 != 9) {
      if (bVar1 < 9) {
LAB_80057ba8:
        uVar4 = 5;
        *(undefined2 *)(param_1 + 0x44) = 0;
        param_1[5] = 7;
        goto LAB_80057be4;
      }
      if (bVar1 != 0xb) {
        uVar2 = 0x15;
        if (10 < bVar1) {
          if (bVar1 != 0x81) {
            return 1;
          }
          uVar4 = 5;
          param_1[5] = 0x18;
          *param_1 = 6;
          *(undefined2 *)(param_1 + 0x44) = 0;
          param_1[6] = 0xc;
          param_1[0x164] = param_1[0x164] & 1;
          goto LAB_80057be4;
        }
        goto LAB_80057bd4;
      }
    }
    uVar4 = 5;
    *(undefined2 *)(param_1 + 0x44) = 0;
    param_1[5] = 4;
  }
LAB_80057be4:
  FUN_80074590(uVar4,0,0);
  return 1;
}
