// FUN_0801a644

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801a644(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
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
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
    iVar3 = func_0x0009a450();
    *(char *)(param_1 + 6) = (char)(iVar3 >> 10) + '\x12';
  }
  iVar3 = func_0x0009a450();
  *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + (char)(iVar3 >> 9);
  sVar2 = func_0x0002b278(param_1);
  if (*(char *)(param_1 + 7) < '\0') {
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + -0x80;
  }
  else {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined1 *)(param_1 + 4) = 2;
    }
    else {
      if (sVar2 != 0) {
        return;
      }
      func_0x00031780(param_1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

