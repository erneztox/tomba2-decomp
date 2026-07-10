// FUN_000056b4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000056b4(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  
  if (*(char *)(param_1 + 5) == '\0') {
    if (1 < DAT_800bfa56) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (2 < DAT_800bfa57) {
      func_0x00041718(param_1,10,4);
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
  }
  sVar1 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
  uVar2 = func_0x000776f8((int)sVar1,(int)*(short *)(param_1 + 0x56),0x80);
  *(undefined2 *)(param_1 + 0x56) = uVar2;
  return;
}

