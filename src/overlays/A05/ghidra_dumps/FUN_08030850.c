// FUN_08030850

/* WARNING: Control flow encountered bad instruction data */

void FUN_08030850(undefined1 *param_1)

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
      param_1[8] = 0;
      param_1[9] = 0;
      *param_1 = 1;
      param_1[0xb] = 0;
      param_1[0x5e] = 0;
      param_1[0x29] = 0;
      param_1[4] = param_1[4] + '\x01';
      if (param_1[3] == '\0') {
        *(undefined2 *)(param_1 + 0x80) = 0x8c;
        *(undefined2 *)(param_1 + 0x82) = 0x118;
        *(undefined2 *)(param_1 + 0x84) = 500;
        *(undefined2 *)(param_1 + 0x86) = 1000;
        param_1[0x2a] = 4;
        *(undefined4 *)(param_1 + 0x2c) = 0x35200000;
        *(undefined4 *)(param_1 + 0x30) = 0xcec80000;
        *(undefined4 *)(param_1 + 0x34) = 0x35e80000;
      }
      bVar1 = param_1[3];
      param_1[3] = 2;
      *(ushort *)(param_1 + 0x60) = (ushort)bVar1;
      func_0x000517f8();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

