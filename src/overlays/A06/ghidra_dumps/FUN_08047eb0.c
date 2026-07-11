// FUN_08047eb0

/* WARNING: Control flow encountered bad instruction data */

void FUN_08047eb0(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (DAT_800bfa20 < 6) {
      func_0x0007778c(param_1);
      bVar1 = param_1[0x5e];
      if (bVar1 == 1) {
        func_0x001408bc(param_1);
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          func_0x001406e8(param_1);
        }
      }
      else if (bVar1 == 2) {
        func_0x00140ccc(param_1);
      }
    }
    else {
      param_1[4] = 3;
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        func_0x0007778c(param_1);
        if ((byte)param_1[5] < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08048000 */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef5b04))();
          return;
        }
      }
      else {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      param_1[0xb] = 0x16;
      *(undefined4 *)(param_1 + 0x7c) = 0x80140088;
      param_1[0xd] = 1;
      *param_1 = 1;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined2 *)(param_1 + 0x80) = 0x28;
      *(undefined2 *)(param_1 + 0x82) = 0x50;
      *(undefined2 *)(param_1 + 0x84) = 0x28;
      *(undefined2 *)(param_1 + 0x86) = 0x50;
      param_1[4] = param_1[4] + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

