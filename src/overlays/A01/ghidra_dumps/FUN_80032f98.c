// FUN_80032f98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80032f98(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined *puVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      goto LAB_80033068;
    }
    if (bVar1 != 0) {
      return;
    }
    if (DAT_800e7fc7 == '\0') {
      puVar3 = &DAT_8009e378;
    }
    else {
      puVar3 = &DAT_8009e730;
    }
    *(undefined **)(param_1 + 0x38) = puVar3;
    *(undefined **)(param_1 + 0x34) = puVar3;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 6) = 0x10;
    *(undefined2 *)(param_1 + 0x32) = 0xff6a;
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined2 *)(param_1 + 0x2c) = _DAT_800e7eae;
    *(undefined2 *)(param_1 + 0x2e) = _DAT_800e7eb2;
    uVar2 = _DAT_800e7eb6;
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined2 *)(param_1 + 0x30) = uVar2;
    return;
  }
  *(undefined1 *)(param_1 + 4) = 2;
LAB_80033068:
  FUN_8007a624();
  return;
}

