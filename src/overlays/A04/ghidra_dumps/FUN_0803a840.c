// FUN_0803a840

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803a840(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x00116b48(param_1);
    if ((DAT_1f800137 == '\0') && (DAT_800bf809 == '\0')) {
      if (*(char *)(param_1 + 0x2b) == '\0') {
        bVar1 = *(byte *)(param_1 + 5);
        if (bVar1 == 1) {
          func_0x00132968(param_1);
        }
        else if (bVar1 < 2) {
          if (bVar1 == 0) {
            func_0x001326d0(param_1);
          }
        }
        else if (bVar1 == 2) {
          func_0x00132d10(param_1);
        }
        else if (bVar1 == 3) {
          func_0x00132ff4(param_1);
        }
      }
      else {
        *(char *)(param_1 + 0x2b) = *(char *)(param_1 + 0x2b) + -1;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      func_0x001324b0(param_1);
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    func_0x00116b48(param_1);
    if (*(byte *)(param_1 + 5) < 9) {
                    /* WARNING: Could not emulate address calculation at 0x0803a994 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef5dc8))();
      return;
    }
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x0004190c(param_1);
      func_0x000518fc(param_1);
    }
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

