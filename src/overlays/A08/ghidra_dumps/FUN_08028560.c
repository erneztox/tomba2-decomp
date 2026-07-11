// FUN_08028560

/* WARNING: Control flow encountered bad instruction data */

void FUN_08028560(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (DAT_1f800207 == '\x06') {
      func_0x0007703c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0007778c(param_1);
    if ((byte)param_1[5] < 7) {
                    /* WARNING: Could not emulate address calculation at 0x080286b0 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef62cc))();
      return;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(undefined2 *)(param_1 + 0x80) = 0x140;
        *(undefined2 *)(param_1 + 0x82) = 0x280;
        *(undefined2 *)(param_1 + 0x84) = 0x1a0;
        *(undefined2 *)(param_1 + 0x86) = 0x1a0;
        param_1[4] = 1;
        if (DAT_800bfa35 == '\0') {
          *(undefined2 *)(param_1 + 0x32) = 0xe6a0;
          *param_1 = 2;
          func_0x00051b70(param_1,0xc,0x39);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x32) = 0xe500;
        func_0x00051b70(param_1,0xc,0x3a);
        param_1[5] = 1;
        param_1[0xd] = param_1[0xd] | 4;
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x3c;
        param_1[0x29] = 0;
        param_1[0x46] = 0;
        func_0x000517f8();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
    }
  }
  return;
}

