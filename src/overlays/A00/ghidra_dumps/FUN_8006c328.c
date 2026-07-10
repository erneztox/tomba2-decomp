// FUN_8006c328

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006c328(int param_1)

{
  short sVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined2 *)(param_1 + 0x40) = 1;
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    return;
  }
  sVar1 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar1 + -1;
  if (sVar1 == 1) {
    *(undefined2 *)(param_1 + 0x40) = 0x12;
    if (DAT_800e7f3e == '\0') {
      uVar3 = 6;
    }
    else {
      uVar3 = 3;
    }
    FUN_80074590(6,uVar3,0);
  }
  if ((DAT_800e7f3e != '\0') && (*(char *)(param_1 + 0x5e) == '\0')) {
    *(undefined1 *)(param_1 + 0x5e) = 1;
    FUN_8006a8c8(param_1);
  }
  if ((DAT_800e7fc4 == '\x02') || (DAT_800e7fc6 == '\0')) {
    *(undefined1 *)(param_1 + 5) = 0;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
  }
  else if (DAT_800e7fc6 == '\x03') {
    *(undefined2 *)(param_1 + 0x2e) = _DAT_800e7eae;
    *(undefined2 *)(param_1 + 0x32) = _DAT_800e7eb2;
    *(undefined2 *)(param_1 + 0x36) = _DAT_800e7eb6;
    *(undefined1 *)(param_1 + 0x46) = DAT_800e7fca;
    uVar2 = DAT_800e7eaa;
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined1 *)(param_1 + 0x2a) = uVar2;
    FUN_8006bdf0(param_1);
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return;
}

