// FUN_08014894

/* WARNING: Control flow encountered bad instruction data */

void FUN_08014894(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x0010d394(param_1);
    param_1[4] = param_1[4] + '\x01';
    *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x56);
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined2 *)(param_1 + 0x66) = 1;
    *param_1 = 2;
    *(undefined2 *)(param_1 + 0x54) = 0x400;
    param_1[0x2b] = 0;
    *(ushort *)(param_1 + 0x76) = (ushort)*(byte *)((byte)param_1[3] + 0x8011a9e4);
  }
  func_0x0007778c(param_1);
  func_0x0010ce24(param_1);
  func_0x00051844(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

