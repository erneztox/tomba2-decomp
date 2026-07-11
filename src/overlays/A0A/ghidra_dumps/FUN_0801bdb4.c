// FUN_0801bdb4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801bdb4(int param_1)

{
  short sVar1;
  
  func_0x0004766c();
  func_0x00048750(param_1);
  sVar1 = _DAT_1f8001a0;
  *(short *)(param_1 + 0x56) = _DAT_1f8001a0;
  if (*(char *)(param_1 + 3) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x56) = sVar1 + 0x200;
  *(undefined1 *)(param_1 + 0x47) = 0;
  func_0x00114630(param_1);
  return;
}

