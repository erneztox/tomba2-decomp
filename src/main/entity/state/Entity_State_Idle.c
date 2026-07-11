/**
 * @brief Entity idle state: entity[6]=0, checks ground, transitions
 * @note Original: func_80060064 at 0x80060064
 */
// Entity_State_Idle



void FUN_80060064(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 6) == '\0') {
    if (*(char *)(param_1 + 7) == '\0') {
      *(undefined1 *)(param_1 + 0x145) = 0;
      *(undefined1 *)(param_1 + 0x146) = 0;
      FUN_80053d90(param_1);
      *(undefined2 *)(param_1 + 0x58) = 0;
      FUN_80055e28(param_1,1);
      FUN_80055d5c(param_1);
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      FUN_80054d14(param_1,0x16,3);
    }
    else if (*(char *)(param_1 + 7) == '\x01') {
      FUN_80055e28(param_1,1);
      FUN_80055d5c(param_1);
      iVar2 = FUN_80076d68(param_1);
      if (iVar2 == 1) {
        *(undefined1 *)(param_1 + 7) = 0;
        *(undefined1 *)(param_1 + 0x145) = 1;
        *(undefined2 *)(param_1 + 0x50) = 0;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        FUN_80074590(0xf,0,0);
        FUN_80074590(0x25,0,0);
        FUN_80054d14(param_1,0x12,4);
        FUN_800538e0(param_1,param_1 + 0x2c,0);
        FUN_80055f48(param_1,0);
        iVar2 = FUN_80055844();
        if (iVar2 == 0) {
          *(undefined2 *)(param_1 + 0x4a) = 0xd800;
        }
        else {
          if (*(char *)(param_1 + 0x165) != '\0') {
            *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + -0x580;
          }
          *(short *)(param_1 + 0x4a) =
               *(short *)(param_1 + 0x4a) + (*(short *)(param_1 + 0x4a) >> 2);
        }
      }
    }
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    FUN_80055e28(param_1,1);
    FUN_80055fbc(param_1,*(undefined1 *)(param_1 + 0x14a));
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    FUN_80076d68(param_1);
    bVar1 = *(char *)(param_1 + 0x145) != '\x02';
    if (bVar1) {
      FUN_800574e0(param_1,0x11);
    }
    else {
      FUN_800574e0(param_1,0);
    }
    FUN_80057c08(param_1,bVar1);
  }
  FUN_800551c4(param_1);
  return;
}
