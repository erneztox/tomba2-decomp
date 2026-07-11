// FUN_08029d10

/* WARNING: Control flow encountered bad instruction data */

void FUN_08029d10(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c();
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
      *(undefined2 *)(param_1 + 0x80) = 0x8c;
      *(undefined2 *)(param_1 + 0x82) = 0x118;
      *(undefined2 *)(param_1 + 0x84) = 400;
      *(undefined2 *)(param_1 + 0x86) = 800;
      param_1[8] = 0;
      param_1[9] = 0;
      *param_1 = 1;
      param_1[0xb] = 0;
      param_1[0x5e] = 0;
      param_1[0x29] = 0;
      param_1[0x2a] = 0x12;
      param_1[4] = param_1[4] + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

