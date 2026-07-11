// FUN_0801bd50

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801bd50(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
  }
  else {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7fee3ea8);
      *(undefined2 *)(param_1 + 0x82) = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7fee3ea6);
      *(undefined2 *)(param_1 + 0x84) = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7fee3ea4);
      uVar2 = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7fee3ea2);
      param_1[8] = 0;
      param_1[9] = 0;
      *param_1 = 1;
      param_1[0xb] = 0;
      param_1[0x2b] = 0;
      *(undefined2 *)(param_1 + 0x7c) = 0;
      *(undefined2 *)(param_1 + 0x7e) = 0;
      param_1[4] = param_1[4] + '\x01';
      *(undefined2 *)(param_1 + 0x86) = uVar2;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

