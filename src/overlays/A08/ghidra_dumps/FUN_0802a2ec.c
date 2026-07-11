// FUN_0802a2ec

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802a2ec(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((byte)param_1[3] < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0802a490 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef6278))();
      return;
    }
    if (param_1[1] == '\0') {
      return;
    }
    if (param_1[3] == '\a') {
      func_0x00051844(param_1);
    }
    else {
      func_0x000517f8(param_1);
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      if ((byte)param_1[3] < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0802a36c */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef6298))();
        return;
      }
      param_1[4] = param_1[4] + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

