// FUN_08023268

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08023268(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 6) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(iVar2 + 0xd8);
  iVar3 = *(int *)(iVar2 + 0xcc);
  sVar1 = *(short *)(iVar2 + 0x56);
  *(short *)(param_1 + 0x2e) = (short)((*(int *)(iVar4 + 0x2c) + *(int *)(iVar3 + 0x2c)) / 2);
  *(short *)(param_1 + 0x32) =
       (short)((*(int *)(iVar4 + 0x30) + *(int *)(iVar3 + 0x30)) / 2) + -0xaa;
  *(short *)(param_1 + 0x36) = (short)((*(int *)(iVar4 + 0x34) + *(int *)(iVar3 + 0x34)) / 2);
  iVar2 = func_0x00083f50((int)sVar1);
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) - (short)(iVar2 * -0x3c >> 0xc);
  iVar2 = func_0x00083e80((int)sVar1);
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) - (short)(iVar2 * 0x3c >> 0xc);
  return;
}

