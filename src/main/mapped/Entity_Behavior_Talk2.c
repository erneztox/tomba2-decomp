/**
 * @brief Entity talk behavior variant 2: entity[5]=1, dialog
 * @note Original: func_8004B788 at 0x8004B788
 */
// Entity_Behavior_Talk2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004b788(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 5);
  iVar4 = *(int *)(param_1 + 0x14);
  if (bVar1 == 1) {
    iVar4 = FUN_80041438(&DAT_800e7e80,(int)*(short *)(param_1 + 0x60),0x100);
    if (iVar4 != 0) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    *(undefined2 *)(param_1 + 0x56) = _DAT_800e7ed6;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800e7e85 != '\x12') {
        return;
      }
      *(undefined1 *)(param_1 + 5) = 1;
      DAT_1f800137 = 2;
      uVar2 = FUN_800782b0(&DAT_800e7eac,(int)*(short *)(iVar4 + 0x2e),(int)*(short *)(iVar4 + 0x36)
                          );
      *(undefined2 *)(param_1 + 0x60) = uVar2;
      FUN_80054198(&DAT_800e7e80);
      return;
    }
  }
  else if (bVar1 == 2) {
    iVar3 = FUN_8004b528(param_1,iVar4);
    if (iVar3 == 1) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      *(undefined1 *)(iVar4 + 0x29) = 1;
    }
  }
  else if ((bVar1 == 3) && (iVar3 = FUN_8004b528(param_1,iVar4), iVar3 == 2)) {
    if ((DAT_800bf870 == '\0') &&
       ((DAT_800bf8b8 != -1 && (iVar3 = FUN_80072ddc(param_1,0x81,5,1), iVar3 != 0)))) {
      *(code **)(iVar3 + 0x1c) = FUN_8004bb38;
      *(undefined1 *)(iVar3 + 3) = 0;
      *(undefined2 *)(iVar3 + 0x5c) = 0;
      *(undefined1 *)(iVar3 + 0x5e) = 0;
      if (iVar3 != 0) {
        DAT_800bf88e = 0x28;
        DAT_800e7eee = 0x28;
        _DAT_800e7ef4 = iVar3;
      }
    }
    *(undefined1 *)(param_1 + 4) = 3;
    *(undefined1 *)(iVar4 + 0x29) = 2;
  }
  iVar3 = _DAT_800e7f5c;
  iVar4 = _DAT_800e7f50;
  *(short *)(param_1 + 0x2e) =
       (short)((*(int *)(_DAT_800e7f5c + 0x2c) + *(int *)(_DAT_800e7f50 + 0x2c)) / 2);
  *(short *)(param_1 + 0x32) = (short)((*(int *)(iVar3 + 0x30) + *(int *)(iVar4 + 0x30)) / 2);
  *(short *)(param_1 + 0x36) = (short)((*(int *)(iVar3 + 0x34) + *(int *)(iVar4 + 0x34)) / 2);
  if ((*(byte *)(param_1 + 0x28) & 0x7f) != 0) {
    FUN_800517f8(param_1);
  }
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_80077efc(param_1);
  return;
}
