// FUN_08014b28

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08014b28(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_1f80024c;
  if (*(char *)(param_1 + 3) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_1f8000c2 = 0xffc4;
  _DAT_1f8000c0 = 0;
  _DAT_1f8000c4 = 0;
  func_0x000844c0(*(int *)(_DAT_1f80024c + 0xe4) + 0x18,&DAT_1f8000c0,&DAT_1f8000c8);
  *(short *)(param_1 + 0x2e) = *(short *)(*(int *)(iVar1 + 0xe4) + 0x2c) + _DAT_1f8000c8;
  *(short *)(param_1 + 0x32) = *(short *)(*(int *)(iVar1 + 0xe4) + 0x30) + _DAT_1f8000ca;
  *(short *)(param_1 + 0x36) = *(short *)(*(int *)(iVar1 + 0xe4) + 0x34) + _DAT_1f8000cc;
  return;
}

