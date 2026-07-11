/**
 * @brief Entity behavior type variant 4: entity[4]=1, complex
 * @note Original: func_800683B8 at 0x800683B8
 */
// Entity_BehaviorType4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800683b8(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined **)(param_1 + 0x38) = &DAT_800a0d50;
    *(undefined **)(param_1 + 0x34) = &DAT_800a0d50;
  }
  switch(*(undefined1 *)(param_1 + 5)) {
  case 0:
    cVar4 = *(char *)(param_1 + 0x2a) + -1;
    *(char *)(param_1 + 0x2a) = cVar4;
    if (cVar4 != '\0') goto LAB_800685bc;
    goto LAB_8006853c;
  case 1:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x24;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 7;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 7;
    _DAT_800e7efa = *(undefined2 *)(param_1 + 0x54);
    _DAT_800e7efc = 7;
    sVar2 = *(short *)(param_1 + 0x68);
    *(short *)(param_1 + 0x68) = sVar2 + -1;
    if (sVar2 != 1) goto LAB_800685bc;
    *(undefined2 *)(param_1 + 0x68) = 0x1e;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    break;
  case 2:
    sVar2 = *(short *)(param_1 + 0x68);
    *(short *)(param_1 + 0x68) = sVar2 + -1;
    if (sVar2 != 1) goto LAB_800685bc;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    _DAT_800e7efe = 1;
    break;
  case 4:
    if (_DAT_800e7efe == 0) goto LAB_800685bc;
LAB_8006853c:
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    *(undefined2 *)(param_1 + 0x68) = 0x40;
    break;
  case 5:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x3c;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -7;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -7;
    sVar2 = *(short *)(param_1 + 0x68);
    *(short *)(param_1 + 0x68) = sVar2 + -1;
    if (sVar2 != 1) goto LAB_800685bc;
    DAT_1f800137 = 0;
    DAT_1f800236 = 0;
    DAT_800e806c = 0;
    *(undefined1 *)(param_1 + 4) = 3;
  }
LAB_800685bc:
  *(undefined2 *)(param_1 + 0x2c) = _DAT_1f800160;
  sVar3 = _DAT_800e7ee2;
  *(undefined2 *)(param_1 + 0x30) = _DAT_1f800164;
  sVar2 = _DAT_1f800162;
  *(undefined1 *)(param_1 + 1) = 1;
  *(short *)(param_1 + 0x2e) = sVar2 + sVar3 * 2;
  return;
}
