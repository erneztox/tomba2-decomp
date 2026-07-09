// FUN_80133458

/* WARNING: Control flow encountered bad instruction data */

void FUN_80133458(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
LAB_801334bc:
    if (DAT_800e7feb == '\x01') {
      return;
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined4 *)(param_1 + 0x34) = 0x8014ac18;
      if (*(byte *)(param_1 + 3) == 0x80) {
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined1 *)(param_1 + 4) = 3;
        goto LAB_8013c528;
      }
      if (*(byte *)(param_1 + 3) < 2) {
        FUN_8013c4c8();
        return;
      }
      if (0xf < DAT_800bf9e0) {
        *(undefined4 *)(param_1 + 0x34) = 0x8014af20;
        *(undefined1 *)(param_1 + 3) = 0x80;
      }
    }
    if (DAT_800e7eaa < 0xc) {
      iVar3 = func_0x8002b278(param_1);
      if (iVar3 != 0) {
        return;
      }
      func_0x80031780(param_1);
      goto LAB_8013c528;
    }
  }
  else {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8013c520();
      return;
    }
    if (bVar1 != 0) goto LAB_8013c528;
    if (DAT_800bf9e0 < 0x1c) {
      *(undefined2 *)(param_1 + 4) = 1;
      goto LAB_801334bc;
    }
  }
  *(undefined1 *)(param_1 + 4) = 3;
LAB_8013c528:
  sVar2 = FUN_801409c0();
  if (sVar2 != 0) {
    *(char *)(param_1 + 5) = (char)sVar2;
    *(undefined1 *)(param_1 + 6) = 0;
    FUN_801454f0();
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0x301;
  *(undefined1 *)(param_1 + 3) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

