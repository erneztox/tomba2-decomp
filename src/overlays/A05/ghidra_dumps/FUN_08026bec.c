// FUN_08026bec

/* WARNING: Control flow encountered bad instruction data */

void FUN_08026bec(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 5) == '\0') {
    iVar1 = func_0x0007778c(param_1);
    if (iVar1 == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x2b) == '\x03') {
      func_0x00042354(1,1);
      func_0x00040d68(param_1,0x8013e26c);
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    if ((*(char *)(param_1 + 0x70) == -1) && (*(byte *)(param_1 + 6) < 5)) {
                    /* WARNING: Could not emulate address calculation at 0x08026cac */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6530))();
      return;
    }
  }
  func_0x00041098(param_1);
  func_0x0004190c(param_1);
  return;
}

