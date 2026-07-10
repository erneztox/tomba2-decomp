// FUN_800674f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800674f4(int param_1)

{
  short sVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  undefined2 local_12;
  undefined2 local_e;
  
  if (*(char *)(param_1 + 7) == '\0') {
    sVar1 = *(short *)(param_1 + 0x4a);
    sVar3 = *(short *)(param_1 + 0x4a) + -0x400;
    *(short *)(param_1 + 0x4a) = sVar3;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar1 * 0x100;
    if (-0x1400 < sVar3) {
      return;
    }
    cVar2 = *(char *)(param_1 + 7) + '\x01';
    goto LAB_80067618;
  }
  if (*(char *)(param_1 + 7) != '\x01') {
    return;
  }
  sVar1 = *(short *)(param_1 + 0x4a);
  sVar3 = *(short *)(param_1 + 0x4a) + 0x400;
  *(short *)(param_1 + 0x4a) = sVar3;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar1 * 0x100;
  if (sVar3 < 0x1400) {
    return;
  }
  local_16 = *(undefined2 *)(param_1 + 0x2e);
  local_12 = _DAT_1f80019e;
  local_e = *(undefined2 *)(param_1 + 0x36);
  if (DAT_800bf870 == '\0') {
    FUN_8003116c(0x10d,auStack_18,0xfffffff6);
  }
  else {
    if (DAT_800bf870 == '\x06') {
      uVar4 = 0x704;
    }
    else if (DAT_800bf870 == '\b') {
      uVar4 = 0x909;
    }
    else {
      uVar4 = 0xf06;
      if (DAT_800bf870 != '\x0e') goto LAB_8006760c;
    }
    FUN_800312d4(uVar4,auStack_18,0xfffffff6);
  }
LAB_8006760c:
  cVar2 = *(char *)(param_1 + 7) + -1;
LAB_80067618:
  *(char *)(param_1 + 7) = cVar2;
  return;
}

