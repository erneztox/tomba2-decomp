
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003ffcc(int param_1)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  code *pcVar4;
  
  if (*(char *)(param_1 + 6) == '\0') {
    FUN_80074590(0x1a,0,0);
    *(undefined2 *)(param_1 + 0x90) = 0x100;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    if (*(short *)(param_1 + 100) == 1) {
      iVar3 = FUN_80072ddc(param_1,*(undefined1 *)(param_1 + 0x68),5,0);
      pcVar4 = FUN_8004aac4;
    }
    else {
      iVar3 = FUN_80072ddc(param_1,*(undefined1 *)(param_1 + 0x68),5,4);
      pcVar4 = FUN_8004c238;
    }
    *(code **)(iVar3 + 0x1c) = pcVar4;
    if ((*(byte *)(param_1 + 0x28) & 0x80) == 0) {
      *(undefined2 *)(iVar3 + 0x6a) = 0;
    }
    else {
      *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
      *(undefined2 *)(iVar3 + 0x6a) = *(undefined2 *)(param_1 + 0x6a);
    }
    if ((DAT_800bf870 == '\x02') || (DAT_800bf870 == '\a')) {
      *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(param_1 + 0x34);
      *(int *)(iVar3 + 0x30) = *(int *)(param_1 + 0x30) + -0x28;
    }
    else {
      *(undefined4 *)(iVar3 + 0x2c) = _DAT_800e7eac;
      *(undefined4 *)(iVar3 + 0x34) = _DAT_800e7eb4;
      *(int *)(iVar3 + 0x30) = *(int *)(param_1 + 0x30) + -0x28;
      *(undefined1 *)(iVar3 + 0x2a) = DAT_800e7eaa;
    }
    *(undefined1 *)(iVar3 + 0x46) = *(undefined1 *)(param_1 + 0x46);
    *(undefined1 *)(iVar3 + 3) = *(undefined1 *)(param_1 + 0x60);
    uVar2 = *(undefined1 *)(param_1 + 0x62);
    *(undefined2 *)(iVar3 + 0x60) = 1;
    *(undefined1 *)(iVar3 + 0x5e) = uVar2;
    *(undefined2 *)(iVar3 + 0x62) = *(undefined2 *)(param_1 + 0xe);
    *(undefined2 *)(iVar3 + 100) = *(undefined2 *)(param_1 + 100);
    uVar1 = *(undefined2 *)(param_1 + 0x66);
    *(undefined2 *)(iVar3 + 0x4a) = 0;
    *(undefined2 *)(iVar3 + 0x66) = uVar1;
    return;
  }
  if (*(char *)(param_1 + 6) != '\x01') {
    return;
  }
  *(short *)(*(int *)(param_1 + 0xc4) + 8) =
       *(short *)(*(int *)(param_1 + 0xc4) + 8) - *(short *)(param_1 + 0x90);
  *(short *)(param_1 + 0x90) = *(short *)(param_1 + 0x90) + -0x18;
  if (-0x500 < *(short *)(*(int *)(param_1 + 0xc4) + 8)) {
    return;
  }
  if (*(char *)(param_1 + 3) == '\0') {
    FUN_80040c00(0x38);
  }
  switch(*(undefined1 *)(param_1 + 0x5e)) {
  case 0:
  case 5:
    uVar2 = 3;
    break;
  case 1:
  case 4:
  case 6:
    uVar2 = 4;
    break;
  case 2:
    uVar2 = 4;
    break;
  default:
    goto switchD_800401f0_caseD_3;
  case 7:
    uVar2 = 5;
  }
  *(undefined1 *)(param_1 + 5) = uVar2;
switchD_800401f0_caseD_3:
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}

