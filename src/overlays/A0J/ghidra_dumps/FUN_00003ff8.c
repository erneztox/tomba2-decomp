// FUN_00003ff8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003ff8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(char *)(param_1 + 5) == '\0') {
    if (_DAT_800bf850 == 1) {
      func_0x0004ed94(0x6f,0x42);
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    func_0x0004bd64(param_1,0,_DAT_800e7f5c,_DAT_800e7f50,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 5) != '\x01') {
    *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (_DAT_800bf850 == 2) {
    func_0x0004ed94(0x2c,0x42);
    *(undefined1 *)(param_1 + 4) = 3;
  }
  func_0x0004bd64(param_1,0,*(undefined4 *)(iVar1 + 0xdc),*(undefined4 *)(iVar1 + 0xd0),0);
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + -0x30;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

