// FUN_8002b8f4

void FUN_8002b8f4(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
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
    *(undefined **)(param_1 + 0x40) = &DAT_800a2030;
    *(undefined ***)(param_1 + 0x50) = &PTR_DAT_800a2018;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x2c);
    *(short *)(param_1 + 0x5a) = *(short *)(param_1 + 0x2e) + -0x78;
    *(undefined2 *)(param_1 + 0x5c) = *(undefined2 *)(param_1 + 0x30);
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x40);
  if ((*(int *)(param_1 + 0x38) == 0) && (*(int *)(param_1 + 0x40) == 0)) {
    *(undefined1 *)(param_1 + 4) = 2;
    return;
  }
  if (*(byte *)(param_1 + 3) - 0x14 < 2) {
    cVar2 = *(char *)(param_1 + 7) + '\x01';
    *(char *)(param_1 + 7) = cVar2;
    if (cVar2 == '\a') {
      iVar5 = 0;
      if (6 < DAT_800e7e7c) {
        iVar4 = FUN_8007a980(0,6,1);
        iVar5 = 0;
        if (iVar4 != 0) {
          if (param_1 != -0x2c) {
            *(undefined2 *)(iVar4 + 0x2c) = *(undefined2 *)(param_1 + 0x2c);
            *(undefined2 *)(iVar4 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
            *(undefined2 *)(iVar4 + 0x30) = *(undefined2 *)(param_1 + 0x30);
          }
          *(undefined2 *)(iVar4 + 0x32) = 0xffce;
          FUN_80028e10(iVar4,3);
          iVar5 = iVar4;
        }
      }
      if (iVar5 != 0) {
        *(byte *)(iVar5 + 0x28) = *(byte *)(iVar5 + 0x28) | 0x80;
      }
    }
    if (*(char *)(param_1 + 3) == '\x15') {
      sVar3 = *(short *)(param_1 + 0x5a) + -0x10;
    }
    else {
      if (*(char *)(param_1 + 3) != '\x14') goto LAB_8002bab0;
      sVar3 = *(short *)(param_1 + 0x5a) + -10;
    }
    *(short *)(param_1 + 0x5a) = sVar3;
  }
LAB_8002bab0:
  iVar5 = FUN_8002b278(param_1);
  if (iVar5 == 0) {
    FUN_80031744(param_1);
    FUN_80031780(param_1);
  }
  return;
}

