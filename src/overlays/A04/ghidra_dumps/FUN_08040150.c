// FUN_08040150

/* WARNING: Control flow encountered bad instruction data */

void FUN_08040150(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 5) == '\0') {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined2 *)(param_1 + 0x42) = 2;
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    uVar2 = *(short *)(param_1 + 0x4e) + 0x200U & 0xfff;
    *(ushort *)(param_1 + 0x4e) = uVar2;
    if ((uVar2 == 0) &&
       (sVar1 = *(short *)(param_1 + 0x42), *(short *)(param_1 + 0x42) = sVar1 + -1, sVar1 == 1)) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x4e));
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x66) + (short)((iVar3 << 5) >> 0xc);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

