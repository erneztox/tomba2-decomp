// FUN_080348a8

/* WARNING: Control flow encountered bad instruction data */

void FUN_080348a8(int param_1)

{
  short sVar1;
  
  func_0x0012f054();
  if (*(char *)(param_1 + 6) == '\0') {
    func_0x0012f41c(param_1,8,4);
    if (*(short *)(param_1 + 0x6e) != 0) {
      *(short *)(param_1 + 0x70) = *(short *)((uint)*(byte *)(param_1 + 3) * 6 + -0x7febe51e) + -400
      ;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(param_1 + 0x40) =
         *(short *)((uint)*(byte *)(param_1 + 3) * 6 + -0x7febe51e) - *(short *)(param_1 + 0x32);
    *(undefined2 *)(param_1 + 0x4a) = 0x100;
    *(undefined2 *)(param_1 + 0x44) = 0x600;
    *(undefined1 *)(param_1 + 7) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    func_0x0004766c(param_1);
    sVar1 = func_0x0012eaf4(param_1,0x1400);
    if (sVar1 != 1) {
      if (sVar1 == 2) {
        if (*(short *)(param_1 + 0x6e) != 0) {
          *(undefined2 *)(param_1 + 0x6e) = 0;
          func_0x0012f41c(param_1,10,8);
          *(undefined2 *)(param_1 + 0x40) = 0x1e;
          *(undefined2 *)(param_1 + 0x42) = 1;
          *(undefined1 *)(param_1 + 5) = 1;
          *(undefined1 *)(param_1 + 6) = 2;
          halt_baddata();
        }
        *(undefined2 *)(param_1 + 0x4a) = 0xff00;
        *(undefined2 *)(param_1 + 0x72) = 0;
        *(undefined2 *)(param_1 + 0x44) = 0x600;
        *(undefined1 *)(param_1 + 5) = 1;
        *(undefined1 *)(param_1 + 6) = 1;
        *(undefined1 *)(param_1 + 7) = 0;
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x32) - *(short *)(param_1 + 0x70);
      }
      return;
    }
    *(undefined2 *)(param_1 + 0x6e) = 0;
    func_0x0012f41c(param_1,1,8);
    *(undefined2 *)(param_1 + 0x40) = 0x1e;
    *(undefined2 *)(param_1 + 0x42) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 8;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined2 *)(param_1 + 0x72) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

