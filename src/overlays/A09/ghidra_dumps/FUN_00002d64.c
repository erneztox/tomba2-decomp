// FUN_00002d64

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00002d64(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x2b) == '\x03') {
      *(undefined1 *)(param_1 + 6) = 2;
      func_0x00040b48((int)*(short *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7fef1c68));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(*(short *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7fef1c68) + -0x7ff4074c) != '\0')
    {
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (*(char *)(*(short *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7fef1c68) + -0x7ff4074c) !=
          '\0') {
        return 1;
      }
      *(undefined1 *)(param_1 + 6) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
    iVar2 = func_0x00042728();
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

