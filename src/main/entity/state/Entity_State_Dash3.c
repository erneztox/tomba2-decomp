/**
 * @brief Entity dash state variant 3: entity[6] state machine
 * @note Original: func_8005EF48 at 0x8005EF48
 */
// Entity_State_Dash3



void FUN_8005ef48(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        *(undefined1 *)(param_1 + 0x16a) = 0;
        return;
      }
      FUN_80053d90(param_1);
      *(undefined1 *)(param_1 + 0x145) = 0;
      *(undefined1 *)(param_1 + 0x146) = 0;
      FUN_80054e24(param_1,0,0);
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      if ((*(byte *)(param_1 + 0x16a) & 1) == 0) {
        *(undefined2 *)(param_1 + 0x44) = 0x800;
      }
      else {
        *(undefined2 *)(param_1 + 0x44) = 0xf800;
      }
    }
    else {
      if (bVar1 != 2) {
        *(undefined1 *)(param_1 + 0x16a) = 0;
        return;
      }
      FUN_80076d68(param_1);
      if ((*(byte *)(param_1 + 0x16a) & 2) != 0) {
        uVar3 = 0xf800;
        if ((*(byte *)(param_1 + 0x16a) & 1) == 0) {
          uVar3 = 0x800;
        }
        *(undefined2 *)(param_1 + 0x44) = uVar3;
      }
      FUN_80055e28(param_1,1);
      FUN_80056b48(param_1,1);
      FUN_800574e0(param_1,0);
      FUN_80055d5c(param_1);
      FUN_80057c08(param_1,2);
      if ((*(int *)(param_1 + 0x158) == 0) &&
         (sVar2 = *(short *)(param_1 + 0x40), *(short *)(param_1 + 0x40) = sVar2 + -1, sVar2 == 1))
      {
        FUN_80054d14(param_1,0x14,0);
        *(undefined1 *)(param_1 + 5) = 2;
        *(undefined1 *)(param_1 + 6) = 1;
      }
    }
    goto LAB_8005f19c;
  }
  iVar4 = (int)*(short *)(param_1 + 0x44);
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (iVar4 < 0x800) {
    uVar3 = 0xf800;
    if ((*(byte *)(param_1 + 0x16a) & 1) == 0) {
      uVar3 = 0x800;
    }
    *(undefined2 *)(param_1 + 0x44) = uVar3;
  }
  FUN_80056b48(param_1,1);
  FUN_80055d5c(param_1);
  FUN_80076d68(param_1);
  if (((*(byte *)(param_1 + 0x29) & 0x80) == 0) || (iVar4 = FUN_80055824(), iVar4 == 0)) {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    FUN_8005444c(param_1);
    if (*(char *)(param_1 + 0x29) == '\0') {
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x40;
      FUN_80056d44(param_1,0);
      if (*(char *)(param_1 + 5) == '\x02') {
        *(undefined2 *)(param_1 + 0x40) = 10;
        *(undefined1 *)(param_1 + 5) = 0xf;
        *(undefined1 *)(param_1 + 6) = 2;
      }
      goto LAB_8005f19c;
    }
    if (*(char *)(param_1 + 0x16a) != '\0') goto LAB_8005f19c;
    *(undefined2 *)(param_1 + 0x44) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 5) = 2;
  }
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
LAB_8005f19c:
  *(undefined1 *)(param_1 + 0x16a) = 0;
  return;
}
