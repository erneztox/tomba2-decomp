// FUN_00001fc4

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00001fc4(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x42);
    *(short *)(param_1 + 0x42) = sVar2 + -1;
    uVar3 = 0;
    if (sVar2 == 1) {
      DAT_800bf9b4 = 3;
      func_0x00054d14(param_1,0xb4,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0x78) = 1;
      *(undefined2 *)(param_1 + 0x42) = 0x1e;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 2) {
      sVar2 = *(short *)(param_1 + 0x42);
      *(short *)(param_1 + 0x42) = sVar2 + -1;
      uVar3 = 0;
      if (sVar2 == 1) {
        func_0x00054d14(param_1,2,6);
        *(undefined2 *)(param_1 + 0x42) = 0x1e;
        *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 3) {
        halt_baddata();
      }
      sVar2 = *(short *)(param_1 + 0x42);
      *(short *)(param_1 + 0x42) = sVar2 + -1;
      uVar3 = 1;
      if (sVar2 != 1) {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

