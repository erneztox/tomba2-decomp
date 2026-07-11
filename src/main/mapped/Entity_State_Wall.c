/**
 * @brief Entity wall state: entity[7] state, wall collision
 * @note Original: func_8006483C at 0x8006483C
 */
// Entity_State_Wall



void FUN_8006483c(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return;
        }
        FUN_80056b48(param_1,1);
        FUN_80055d5c(param_1);
        sVar4 = *(short *)(param_1 + 0x4a) + 0x360;
        *(short *)(param_1 + 0x4a) = sVar4;
        if (0x3e00 < sVar4) {
          *(undefined2 *)(param_1 + 0x4a) = 0x3e00;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
        FUN_80076d68(param_1);
        FUN_8005444c(param_1);
        return;
      }
      FUN_80056b48(param_1,1);
      FUN_80055d5c(param_1);
      uVar3 = *(short *)(param_1 + 0x4a) + 0x580;
      *(ushort *)(param_1 + 0x4a) = uVar3;
      if (0 < (int)((uint)uVar3 << 0x10)) {
        *(undefined1 *)(param_1 + 0x145) = 2;
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
        if (param_2 == 0) {
          *(undefined1 *)(param_1 + 0x144) = 1;
        }
        *(undefined4 *)(param_1 + 0x158) = 0;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
      FUN_80076d68(param_1);
      goto LAB_80064b18;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x44) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x145) = 1;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    if (*(char *)(param_1 + 0x46) == '\x1a') {
      if (*(short *)(param_1 + 0x17e) < 0) {
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x20;
        iVar5 = FUN_80083f50((int)*(short *)(param_1 + 0x56));
        *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)(iVar5 * -0x23 >> 0xc);
        iVar5 = FUN_80083e80((int)*(short *)(param_1 + 0x56));
        *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) - (short)(iVar5 * -0x23 >> 0xc);
      }
      else {
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x40;
        iVar5 = FUN_80083f50((int)*(short *)(param_1 + 0x56));
        *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)(iVar5 * -0x46 >> 0xc);
        iVar5 = FUN_80083e80((int)*(short *)(param_1 + 0x56));
        *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) - (short)(iVar5 * -0x46 >> 0xc);
      }
    }
    FUN_80054d14(param_1,0x19,0);
  }
  if (*(short *)(param_1 + 0x17e) < 0) {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x20;
    iVar5 = FUN_80083f50((int)*(short *)(param_1 + 0x56));
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)(iVar5 * 5 >> 0xc);
    iVar5 = FUN_80083e80((int)*(short *)(param_1 + 0x56));
    iVar5 = iVar5 * 5;
  }
  else {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x40;
    iVar5 = FUN_80083f50((int)*(short *)(param_1 + 0x56));
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)(iVar5 * 10 >> 0xc);
    iVar5 = FUN_80083e80((int)*(short *)(param_1 + 0x56));
    iVar5 = iVar5 * 10;
  }
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) - (short)(iVar5 >> 0xc);
  FUN_80076d68(param_1);
  if (1 < *(ushort *)(*(int *)(param_1 + 0x38) + 2)) {
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    if (*(char *)(param_1 + 0x147) == '\0') {
      uVar2 = 0xc00;
    }
    else {
      uVar2 = 0xf400;
    }
    *(undefined2 *)(param_1 + 0x44) = uVar2;
  }
LAB_80064b18:
  FUN_800541f4(param_1,1);
  return;
}
