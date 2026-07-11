// FUN_0803d640

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803d640(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 5) == '\0') {
    func_0x0007778c(param_1);
    if (*(char *)(param_1 + 0x2b) == '\x03') {
      func_0x00042354(1,1);
      func_0x00040d68(param_1,0x80141e20);
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
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
    if (*(char *)(param_1 + 0x70) == -1) {
      uVar3 = (uint)*(byte *)(param_1 + 6);
      if (uVar3 < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0803d6fc */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(uVar3 * 4 + -0x7fef5d18))();
        return;
      }
    }
    else {
      uVar3 = (uint)*(byte *)(param_1 + 6);
    }
    if (uVar3 == 3) {
      sVar1 = *(short *)(param_1 + 0x50) + 0x20;
      *(short *)(param_1 + 0x50) = sVar1;
      iVar2 = func_0x00083e80((int)sVar1);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x3f;
      }
      *(short *)(param_1 + 0x32) = (short)(iVar2 >> 6) + -0x1bbc;
      iVar2 = *(int *)(param_1 + 0x14);
      *(short *)(iVar2 + 0x2e) = *(short *)(param_1 + 0x2e) + 0x11;
      *(short *)(iVar2 + 0x32) = *(short *)(param_1 + 0x32) + 0x11;
      *(short *)(iVar2 + 0x36) = *(short *)(param_1 + 0x36) + 0x11;
      *(undefined2 *)(iVar2 + 0x56) = *(undefined2 *)(param_1 + 0x56);
      *(undefined2 *)(iVar2 + 0x58) = *(undefined2 *)(param_1 + 0x58);
    }
  }
  *(undefined1 *)(param_1 + 8) = 0x10;
  *(undefined1 *)(param_1 + 9) = 0x10;
  func_0x00041098(param_1);
  func_0x0004190c(param_1);
  if (*(char *)(param_1 + 0x47) == '\0') {
    *(undefined1 *)(param_1 + 8) = 0xf;
    *(undefined1 *)(param_1 + 9) = 0xf;
    return;
  }
  *(undefined1 *)(param_1 + 8) = 0x10;
  *(undefined1 *)(param_1 + 9) = 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

