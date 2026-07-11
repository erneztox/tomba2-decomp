/**
 * @brief Entity move behavior: entity[0x2B]=0, uses timer entity[0x40]
 * @note Original: func_80068A94 at 0x80068A94
 */
// Entity_Behavior_Move



void FUN_80068a94(undefined1 *param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[0x2b] == '\0') {
    sVar1 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar1 + -1;
    if (sVar1 == 1) {
      param_1[0x2b] = 2;
      *param_1 = 2;
      param_1[4] = 3;
    }
  }
  else {
    *param_1 = 2;
    param_1[4] = 2;
    param_1[5] = 0;
  }
  *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x200;
  iVar3 = FUN_80083e80((int)*(short *)(param_1 + 0xbe));
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar3 * *(short *)(param_1 + 0x44) * 0x10;
  iVar3 = FUN_80083f50((int)*(short *)(param_1 + 0xbe));
  iVar4 = iVar3 * *(short *)(param_1 + 0x44) >> 4;
  iVar3 = *(short *)(param_1 + 0x4c) * iVar4;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar4;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar3;
  if ((param_1[0x46] & 8) == 0) {
    uVar2 = FUN_80085690(-iVar3);
    *(undefined2 *)(param_1 + 0x56) = uVar2;
  }
  iVar3 = FUN_80069858(param_1,0,0);
  if (iVar3 != 0) {
    param_1[0x2b] = 2;
    FUN_80074590(0xe,0,0);
    FUN_80031470(2,param_1 + 0x2c,0,param_1 + 0x68);
  }
  return;
}
