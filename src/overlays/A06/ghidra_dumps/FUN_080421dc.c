// FUN_080421dc

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_080421dc(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x40) + 0x20;
    *(short *)(param_1 + 0x40) = sVar2;
    if (0x7f < sVar2) {
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x40) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -0x20;
    if (sVar2 == 0x20) {
      return 1;
    }
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x40);
  func_0x0007e9c8(uVar3 << 0x10 | uVar3 << 8 | uVar3,1,4);
  return 0;
}

