
void FUN_80033278(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined *puVar3;
  short sVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624();
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    uVar2 = 0xff92;
    if (DAT_1f800236 == '\x03') {
      uVar2 = 0x6e;
    }
    *(undefined2 *)(param_1 + 0x4a) = uVar2;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) == 0) {
    if (DAT_1f800236 == '\x03') {
      puVar3 = &DAT_800a0c5c;
    }
    else {
      puVar3 = &DAT_800a0dcc;
    }
    *(undefined **)(param_1 + 0x38) = puVar3;
    *(undefined **)(param_1 + 0x34) = puVar3;
  }
  sVar4 = *(short *)(param_1 + 0x4e) + *(short *)(param_1 + 0x4a);
  *(short *)(param_1 + 0x4e) = sVar4;
  if (sVar4 < 0x301) {
    if (sVar4 < -0x300) {
      *(short *)(param_1 + 0x4e) = sVar4 + 0x300;
    }
  }
  else {
    *(short *)(param_1 + 0x4e) = sVar4 + -0x300;
  }
  return;
}

