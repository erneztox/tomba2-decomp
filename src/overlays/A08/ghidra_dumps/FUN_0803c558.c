// FUN_0803c558

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803c558(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 0xbf) != '\0') {
    func_0x00049760();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00049674(param_1);
  sVar1 = _DAT_1f8001a0;
  *(short *)(param_1 + 0x60) = _DAT_1f8001a0;
  if (*(short *)(param_1 + 0x6e) == -1) {
    if (*(char *)(param_1 + 0xbe) == '\0') {
      *(short *)(param_1 + 0x56) = sVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(ushort *)(param_1 + 0x56) = sVar1 + 0x800U & 0xfff;
  }
  return;
}

