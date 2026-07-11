// FUN_80125218

/* WARNING: Control flow encountered bad instruction data */

void FUN_80125218(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x40);
        if (*(int *)(param_1 + 0x40) == 0) {
          *(undefined4 *)(param_1 + 0x40) = 0x8013881c;
          *(undefined4 *)(param_1 + 0x3c) = 0x8013881c;
        }
        iVar4 = *(short *)(param_1 + 0x36) + -0x20;
        *(undefined1 *)(param_1 + 1) = 1;
        if (iVar4 < 0x61) {
          iVar4 = 0x60;
          *(undefined1 *)(param_1 + 4) = 3;
        }
        *(int *)(param_1 + 0x34) = iVar4 * 0x10000 + 0x100;
        FUN_8012e35c();
        return;
      }
      if (bVar1 == 3) {
        func_0x8007a624(param_1);
        return;
      }
      FUN_8012e35c();
      return;
    }
    if (bVar1 != 0) {
      FUN_8012e35c();
      return;
    }
    *(undefined4 *)(param_1 + 0x40) = 0x8013881c;
    if ((*(byte *)(param_1 + 7) < 3) && (*(byte *)(param_1 + 7) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(param_1 + 0x50) = 0x801387dc;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined2 *)(param_1 + 0x32) = 0xffce;
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0x8013881c;
    *(undefined4 *)(param_1 + 0x3c) = 0x8013881c;
  }
  cVar2 = *(char *)(*(int *)(param_1 + 0x10) + 1);
  *(char *)(param_1 + 1) = cVar2;
  if ((cVar2 != '\0') && (*(char *)(param_1 + 3) != -0x7d)) {
    bVar1 = *(byte *)(param_1 + 7);
    if (bVar1 == 1) {
      FUN_8012e2e4();
      return;
    }
    if (bVar1 < 2) {
      uVar5 = 0x1000000;
      if (bVar1 != 0) {
        FUN_8012e2e4();
        return;
      }
    }
    else if (bVar1 == 2) {
      uVar5 = 0x2000000;
    }
    else {
      uVar5 = 0x1000000;
      if (bVar1 != 3) {
        FUN_8012e2e4();
        return;
      }
    }
    uVar3 = func_0x8009a450();
    *(uint *)(param_1 + 0x34) = (uVar5 | 0x100) + (uVar3 & 0x2f) * 0x10000;
    FUN_8012e35c();
    return;
  }
  return;
}

