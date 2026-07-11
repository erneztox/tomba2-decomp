// FUN_0801d058

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801d058(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x47) == '\x02') {
    *(short *)(param_1 + 0x54) = -_DAT_1f8000f0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(short *)(param_1 + 0x56) = -_DAT_1f8000f2 - *(short *)(iVar1 + 0x56);
  func_0x00085480(param_1 + 0x54,param_1 + 0x98);
  func_0x00051d20(iVar1,param_1 + 0x88,param_1 + 0x90);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x90);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x92);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x94);
  *(int *)(param_1 + 0xac) = (int)*(short *)(param_1 + 0x2e);
  *(int *)(param_1 + 0xb0) = (int)*(short *)(param_1 + 0x32);
  *(int *)(param_1 + 0xb4) = (int)*(short *)(param_1 + 0x36);
  func_0x00084360(iVar1 + 0x98,param_1 + 0x98);
  func_0x00051300(param_1);
  return;
}

