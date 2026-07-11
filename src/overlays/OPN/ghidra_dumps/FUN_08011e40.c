// FUN_08011e40

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011e40(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 6) == '\0') {
    DAT_800bf80e = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = func_0x00076d68(param_1);
  if (iVar1 == 1) {
    DAT_800bf80e = 1;
  }
  if (_DAT_1f800184 == 1) {
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00065478(param_1,1);
  if (DAT_800bf89c == '\x03') {
    DAT_800e7e84 = 7;
    DAT_800e7e85 = 0;
    DAT_800e7e86 = 0;
    DAT_800e7e87 = 0;
  }
  return;
}

