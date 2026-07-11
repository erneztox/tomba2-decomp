// FUN_080313e8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080313e8(int param_1)

{
  if (*(char *)(param_1 + 0x5e) == '\0') {
    *(undefined1 *)(param_1 + 0x2a) = 0;
    func_0x00041194(param_1,(int)*(short *)(param_1 + 0x86) - (int)*(short *)(param_1 + 0x84),0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0004766c(param_1);
  func_0x00049760(param_1);
  *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
  *(undefined2 *)(param_1 + 0x62) = _DAT_1f8001a2;
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x60);
  func_0x0011ad34();
  return;
}

