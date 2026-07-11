/**
 * @brief Entity action state variant 2: entity[6] dispatch
 * @note Original: func_8005A970 at 0x8005A970
 */
// Entity_State_Action2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8005a970(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(byte *)(param_1 + 6) == 0) {
    *(undefined2 *)(param_1 + 0x44) = 0;
    if (*(char *)(param_1 + 0x165) == '\0') {
      uVar2 = 2;
    }
    else {
      uVar2 = 0x11;
    }
    FUN_80054d14(param_1,uVar2,4);
    *(undefined2 *)(param_1 + 0x14e) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (3 < *(byte *)(param_1 + 6)) goto LAB_8005ac70;
  FUN_80055e28(param_1,1);
  FUN_80055fbc(param_1,*(undefined1 *)(param_1 + 0x14a));
  FUN_80056b48(param_1,0);
  FUN_80055d5c(param_1);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
  FUN_8005444c(param_1);
  iVar1 = FUN_800532a0(param_1);
  if (((iVar1 == 0) && (iVar3 = FUN_80055390(param_1), iVar3 == 0)) &&
     (iVar1 = FUN_800558b4(param_1), iVar1 == 0)) {
    if ((*(byte *)(param_1 + 0x14a) & 2) == 0) {
      *(undefined1 *)(param_1 + 5) = 1;
      *(undefined1 *)(param_1 + 6) = 0;
      if (*(char *)(param_1 + 0x46) == '\x02') {
        uVar2 = 4;
      }
      else {
        uVar2 = 1;
      }
      FUN_80054e80(param_1,uVar2);
      FUN_800538e0(param_1,param_1 + 0x2c,0);
    }
    else if (DAT_1f800137 == '\0') {
      uVar2 = FUN_80076d68(param_1);
      if (*(char *)(param_1 + 0x165) == '\0') {
        if (*(char *)(param_1 + 0x46) == '\x11') {
          FUN_80054d14(param_1,2,2);
        }
        FUN_8005a39c(param_1,uVar2);
      }
      else {
        FUN_80054d14(param_1,0x11,2);
      }
    }
    else {
      FUN_80054d14(param_1,2,4);
      FUN_80076d68(param_1);
    }
  }
  if ((*(byte *)(param_1 + 0x29) & 0x80) != 0) {
    if (((*(char *)(param_1 + 0x16b) == '\0') && (DAT_1f800137 == '\0')) &&
       (*(char *)(param_1 + 6) == '\x01')) {
      iVar1 = FUN_80049280(param_1,0x39,
                           (int)(((*(short *)(param_1 + 0x4a) * 0x39 >> 8) +
                                 (uint)*(ushort *)(param_1 + 0x62)) * 0x10000) >> 0x10);
      if (((iVar1 == 0) && ((int)*(short *)(param_1 + 0x32) - (int)_DAT_1f8001a4 < -500)) &&
         ((_DAT_1f80008c != _DAT_1f800212 && (*(char *)(param_1 + 5) == '\0')))) {
        *(undefined2 *)(param_1 + 0x40) = 0;
        FUN_80074590(0x25,0,0);
        FUN_80054d14(param_1,0x70,0);
        *(undefined1 *)(param_1 + 6) = 2;
        *(undefined1 *)(param_1 + 7) = 7;
      }
      _DAT_1f800212 = _DAT_1f80008c;
    }
    iVar1 = FUN_80055c30(param_1);
    if ((iVar1 == 0) && (iVar3 == 0)) {
      FUN_800559f4(param_1);
    }
  }
LAB_8005ac70:
  FUN_800551c4(param_1);
  FUN_80056c00(param_1,0);
  if ((*(byte *)(param_1 + 5) < 2) && (*(char *)(param_1 + 0x29) != '\0')) {
    DAT_800bf81e = 1;
  }
  return;
}
