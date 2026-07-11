// FUN_08026708

/* WARNING: Control flow encountered bad instruction data */

void FUN_08026708(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0xbf) != -1) {
      if (DAT_800bf816 == '\0') {
        return;
      }
      if (DAT_800bf817 != *(char *)(param_1 + 0xbf)) {
        return;
      }
    }
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 == 0) {
      return;
    }
    func_0x00076d68(param_1);
    if (DAT_1f800137 != '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x2b) != '\x03') {
      return;
    }
    func_0x00130d80(1);
    *(undefined1 *)(param_1 + 6) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0xbf) == -1) {
        *(undefined1 *)(param_1 + 5) = 1;
      }
      if ((DAT_800bf816 != '\0') && (DAT_800bf817 == *(char *)(param_1 + 0xbf))) {
        func_0x00130ba4(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
  }
  else if (bVar1 == 2) {
    iVar2 = func_0x0011eff8(param_1);
    if (iVar2 == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 1;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

