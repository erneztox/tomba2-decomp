// FUN_08020748

/* WARNING: Control flow encountered bad instruction data */

void FUN_08020748(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined2 *)(param_1 + 0x50) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 6) != '\x01') {
    *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(ushort *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 0x40U & 0xfff;
  iVar2 = func_0x00083e80();
  sVar1 = (short)(iVar2 >> 2) + 0x1400;
  *(short *)(param_1 + 0x7a) = sVar1;
  *(short *)(param_1 + 0x7e) = sVar1;
  *(short *)(param_1 + 0x7c) = sVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

