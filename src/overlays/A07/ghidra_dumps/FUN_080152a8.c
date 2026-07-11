// FUN_080152a8

/* WARNING: Control flow encountered bad instruction data */

void FUN_080152a8(int param_1)

{
  byte bVar1;
  short sVar2;
  
  func_0x00076d68();
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        DAT_800bf80e = 0;
        *(undefined1 *)(param_1 + 0x146) = 0;
        func_0x00053d90(param_1);
        func_0x00054198(param_1);
        func_0x00054d14(param_1,0xe1,4);
        func_0x00074590(0x39,0,0);
        *(undefined2 *)(param_1 + 0x40) = 0x1e;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x000551c4(param_1);
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 == 1) {
        DAT_800bf80e = 1;
        *(undefined1 *)(param_1 + 4) = 4;
        *(undefined1 *)(param_1 + 5) = 0x20;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x146) = 0;
    func_0x00053d90(param_1);
    func_0x00054198(param_1);
    func_0x00054d14(param_1,0xe1,4);
    func_0x00074590(0x39,0,0);
    *(undefined2 *)(param_1 + 0x40) = 0x1e;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    func_0x000551c4(param_1);
  }
  func_0x00055d5c(param_1);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 10;
  func_0x0010df90(param_1);
  if (*(char *)(param_1 + 0x29) == '\0') {
    sVar2 = *(short *)(param_1 + 0x50) + 0x800;
    *(short *)(param_1 + 0x50) = sVar2;
    if (0x3000 < sVar2) {
      *(undefined2 *)(param_1 + 0x50) = 0x3000;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
    if (*(short *)(param_1 + 0x40) == 0) {
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
    }
    else {
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0x1400 < *(short *)(param_1 + 0x50)) {
    func_0x00074590(3,0,0);
  }
  *(undefined2 *)(param_1 + 0x50) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

