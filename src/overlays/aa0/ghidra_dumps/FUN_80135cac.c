// FUN_80135cac

/* WARNING: Control flow encountered bad instruction data */

void FUN_80135cac(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      FUN_8013ecf8();
      return;
    }
    *(undefined4 *)(param_1 + 0x40) = 0x8014bcc0;
    *(undefined4 *)(param_1 + 0x50) = 0x8014bcac;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x40) == 0) {
    *(undefined1 *)(param_1 + 4) = 2;
    FUN_8013ecf8();
    return;
  }
  iVar2 = func_0x8002b278(param_1);
  if (iVar2 != 0) {
    return;
  }
  func_0x80031744(param_1);
  FUN_8013ecf8();
  return;
}

