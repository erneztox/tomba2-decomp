// FUN_00001fb0

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001fb0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 6) == '\x0e') {
    func_0x00055e28(param_1,1);
    func_0x00055d5c(param_1);
    func_0x00055f48(param_1,0);
    *(undefined1 *)(param_1 + 0x146) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    func_0x00053d90(param_1);
    *(undefined2 *)(param_1 + 0x58) = 0;
    func_0x00054d14(param_1,0x16,3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 6) != '\x0f') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00055e28(param_1,1);
  func_0x00055d5c(param_1);
  iVar1 = func_0x00076d68(param_1);
  if (iVar1 == 1) {
    *(undefined1 *)(param_1 + 5) = 0x17;
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)(param_1 + 0x145) = 1;
    *(undefined2 *)(param_1 + 0x50) = 0;
    iVar1 = func_0x00055844();
    if (iVar1 != 0) {
      if (*(char *)(param_1 + 0x165) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + -0x400;
    }
    func_0x00074590(0xf,0,0);
    func_0x00074590(0x25,0,0);
    func_0x00054d14(param_1,0x12,4);
    func_0x000538e0(param_1,param_1 + 0x2c,0);
  }
  func_0x000551c4(param_1);
  return;
}

