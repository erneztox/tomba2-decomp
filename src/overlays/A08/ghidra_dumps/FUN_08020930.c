// FUN_08020930

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08020930(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined4 *)(param_1 + 0x40) = 0x8014511c;
    *(undefined4 *)(param_1 + 0x3c) = 0x8014511c;
    *(undefined4 *)(param_1 + 0x50) = 0x801450b4;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  if (*(char *)(param_1 + 5) == '\0') {
    if ((int)*(short *)(param_1 + 0x2e) < *(int *)(param_1 + 0x54)) {
      *(undefined1 *)(param_1 + 5) = 1;
    }
    else {
      *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + -0x1a;
      iVar2 = func_0x0009a450();
      *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + -0x10 + (short)(iVar2 >> 0xb);
      iVar2 = func_0x0009a450();
      *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + -0x10 + (short)(iVar2 >> 0xb);
    }
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x40) == 0) {
      *(undefined1 *)(param_1 + 4) = 2;
    }
    iVar2 = func_0x0002b278(param_1);
    if (iVar2 == 0) {
      func_0x00031708(param_1);
    }
    else {
      *(short *)(param_1 + 0x48) = -_DAT_1f8000f0;
      *(short *)(param_1 + 0x4a) = -_DAT_1f8000f2;
      *(short *)(param_1 + 0x4c) = -_DAT_1f8000f4;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

