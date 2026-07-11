// FUN_0803c300

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803c300(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    bVar1 = *(byte *)(param_1 + 0x47);
    if (bVar1 == 1) {
      if (DAT_1f800207 - 6 < 8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (DAT_1f800207 < 6) {
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
    if (DAT_1f800207 - 1 < 0xd) {
      return;
    }
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 != 0) {
      func_0x00077b5c(param_1);
    }
    if ((DAT_1f800137 == '\0') && (DAT_800bf809 == '\0')) {
      func_0x00134d54(param_1);
      *(undefined1 *)(param_1 + 0x29) = 0;
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      func_0x00134c0c(param_1);
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    if ((*(char *)(param_1 + 5) != '\x02') && (*(char *)(param_1 + 5) == '\v')) {
      if (*(char *)(param_1 + 6) == '\0') {
        iVar2 = func_0x00080750(param_1,0,0);
        if (iVar2 != 0) {
          if (*(int *)(param_1 + 0x10) != 0) {
            *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 3;
          }
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          halt_baddata();
        }
        iVar2 = func_0x0007778c(param_1);
        if (iVar2 != 0) {
          func_0x00077b5c(param_1);
        }
        *(undefined1 *)(param_1 + 5) = 2;
        halt_baddata();
      }
      if (*(char *)(param_1 + 6) != '\x01') {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 4) = 3;
      halt_baddata();
    }
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 != 0) {
      func_0x00077b5c(param_1);
    }
    func_0x0013500c(param_1);
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

