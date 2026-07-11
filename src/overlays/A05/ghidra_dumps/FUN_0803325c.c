// FUN_0803325c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803325c(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((byte)param_1[5] < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08033348 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef6210))();
      return;
    }
    func_0x0007778c(param_1);
    param_1[0x2b] = 0;
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
      if (DAT_800bf924 != -1) {
        return;
      }
      iVar2 = func_0x00051b70(param_1,0xc,0xd);
      if (iVar2 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 100;
      *(undefined2 *)(param_1 + 0x82) = 200;
      *(undefined2 *)(param_1 + 0x84) = 200;
      *(undefined2 *)(param_1 + 0x86) = 0x148;
      param_1[8] = 0;
      *param_1 = 1;
      param_1[0x2b] = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0xfc00;
      *(undefined2 *)(param_1 + 0x58) = 0;
      param_1[4] = param_1[4] + '\x01';
      func_0x000517f8();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

