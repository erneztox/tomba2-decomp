// FUN_08037c08

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08037c08(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = *(short *)(param_1 + 0x32);
  iVar3 = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(short *)(param_1 + 0x32) = sVar1 + -0x80;
  do {
    iVar2 = func_0x00130f50(param_1);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x29) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = iVar3 + 1;
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x20;
  } while (iVar3 < 200);
  *(short *)(param_1 + 0x32) = sVar1;
  return 0;
}

