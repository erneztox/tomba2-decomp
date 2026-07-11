// FUN_0801479c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801479c(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x0010d394(param_1);
    *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x56);
    param_1[4] = param_1[4] + '\x01';
    *(undefined2 *)(param_1 + 0x66) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *param_1 = 2;
    *(ushort *)(param_1 + 0x76) = (ushort)*(byte *)((byte)param_1[3] + 0x8011a9e4);
  }
  func_0x0007778c(param_1);
  func_0x0010c448(param_1);
  if (param_1[3] == '\0') {
    return;
  }
  func_0x00051844(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

