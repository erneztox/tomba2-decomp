// FUN_0801ac28

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801ac28(int param_1)

{
  byte bVar1;
  
  func_0x001138f0(param_1,*(undefined4 *)(param_1 + 0xc4));
  *(undefined2 *)(*(int *)(param_1 + 200) + 10) = *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10);
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (DAT_800bf80f != '\0') {
      func_0x00051b04(*(int *)(param_1 + 0xc4),0xc,*(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x38))
      ;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(byte *)(param_1 + 5) < 6) {
      return;
    }
    *(undefined1 *)(param_1 + 6) = 2;
    func_0x00051b04(*(int *)(param_1 + 0xc4),0xc,*(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x38));
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bf816 == '\0') {
        return;
      }
      if (DAT_800bf80f != '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 6) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0xc4) + 0x40) = 0;
    }
  }
  else if (bVar1 == 2) {
    if (5 < *(byte *)(param_1 + 5)) {
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 0xc4) + 0x40) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + -1;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

