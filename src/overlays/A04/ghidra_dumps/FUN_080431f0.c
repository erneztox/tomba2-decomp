// FUN_080431f0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080431f0(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    bVar1 = *(byte *)(param_1 + 5);
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x199;
    if (bVar1 == 1) {
      if (0 < *(short *)(param_1 + 0x50)) {
        *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + -0x199;
      }
      sVar2 = *(short *)(param_1 + 0x54) + 9;
      *(short *)(param_1 + 0x54) = sVar2;
      if (0x17f < sVar2) {
        *(undefined1 *)(param_1 + 5) = 2;
        halt_baddata();
      }
    }
    else {
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          *(undefined2 *)(param_1 + 0x50) = 0x1000;
          *(undefined2 *)(param_1 + 0x52) = 0;
          *(undefined2 *)(param_1 + 0x54) = 0;
          *(undefined1 *)(param_1 + 5) = 1;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 != 2) {
        halt_baddata();
      }
      if (*(short *)(param_1 + 0x50) < 0x1000) {
        *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 0x199;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 4) = 2;
      *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + 9;
    }
    *(ushort *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 2U & 0x1f;
    func_0x0002b278();
  }
  else {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

