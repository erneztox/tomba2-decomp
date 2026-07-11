// FUN_08034488

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08034488(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 2) != '\x1c') && (iVar1 = func_0x0012f734(), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x2a) = 0x11;
    func_0x0012cf08(param_1);
    *(undefined2 *)(param_1 + 0x6e) = 0;
    func_0x0012f41c(param_1,1,8);
    *(undefined2 *)(param_1 + 0x40) = 0x1e;
    *(undefined2 *)(param_1 + 0x4a) = 8;
    *(undefined2 *)(param_1 + 0x42) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined2 *)(param_1 + 0x72) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0012f054(param_1);
  func_0x0004766c(param_1);
  func_0x00049760(param_1);
  *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0803454c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef5e80))();
    return;
  }
  return;
}

