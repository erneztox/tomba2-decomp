// FUN_0804171c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0804171c(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x71) == -1) {
    bVar1 = *(byte *)(param_1 + 0x5e);
    if (bVar1 == 2) {
      DAT_800bf939 = DAT_800bf939 | 0x40;
    }
    else if (bVar1 < 3) {
      if (bVar1 != 0) {
        *(undefined1 *)(param_1 + 5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (bVar1 != 4) {
      *(undefined1 *)(param_1 + 5) = 0;
      halt_baddata();
    }
    *(char *)(param_1 + 0x5e) = *(char *)(param_1 + 0x5e) + '\x01';
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x5e) != '\x04') {
      return;
    }
    bVar1 = *(byte *)(param_1 + 6);
    iVar2 = *(int *)(param_1 + 0x14);
    if (bVar1 == 3) {
      *(undefined1 *)(iVar2 + 6) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 < 4) {
      if (bVar1 == 1) {
        iVar2 = func_0x0011c364(param_1,0);
        *(int *)(param_1 + 0x14) = iVar2;
        if (iVar2 != 0) {
          func_0x0004ed0c(0x95,4);
          func_0x0004d650(0x95,1);
          halt_baddata();
        }
        return;
      }
    }
    else if (bVar1 == 5) {
      *(undefined1 *)(iVar2 + 5) = 1;
      *(undefined1 *)(iVar2 + 6) = 0;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

