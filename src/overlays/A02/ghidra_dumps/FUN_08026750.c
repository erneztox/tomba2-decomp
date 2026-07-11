// FUN_08026750

/* WARNING: Control flow encountered bad instruction data */

void FUN_08026750(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  if (param_1[5] == '\0') {
    iVar3 = func_0x0007778c(param_1);
    if (iVar3 == 0) {
      return;
    }
    if (DAT_1f800137 != '\0') {
      return;
    }
    if (param_1[0x2b] == '\x03') {
      *param_1 = 3;
      func_0x00042354(1,1);
      func_0x00040d68(param_1,0x800a3d18);
      param_1[0x70] = 2;
      param_1[6] = 0;
      param_1[5] = param_1[5] + '\x01';
      halt_baddata();
    }
  }
  else {
    if (param_1[5] != '\x01') {
      halt_baddata();
    }
    param_1[1] = 1;
    func_0x00077e7c(param_1);
    if (param_1[0x70] == -1) {
      bVar1 = param_1[6];
      if (bVar1 == 1) {
        *(undefined2 *)(param_1 + 0x40) = 0x10;
        param_1[6] = param_1[6] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        if (DAT_800bf9f9 - 1 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08026860 */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((DAT_800bf9f9 - 1) * 4 + -0x7fef68b0))();
          return;
        }
        func_0x00040d68(param_1,0x8012b470);
        param_1[0x70] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 != 2) {
        halt_baddata();
      }
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 == 1) {
        *param_1 = 9;
        param_1[5] = 0;
      }
    }
  }
  func_0x00041098(param_1);
  func_0x0004190c(param_1);
  return;
}

