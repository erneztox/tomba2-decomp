// FUN_0803a180

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803a180(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    iVar4 = func_0x00132de4(param_1,0x2bcd,0x4619,3);
    if (iVar4 == 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x40) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (0x15e < _DAT_1f800160 - 0x2e7c) {
      return;
    }
    if ((_DAT_800e7ffe & 0x200) != 0) {
      halt_baddata();
    }
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      if (_DAT_1f800160 - 0x2e7c < 0x15f) {
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 5) = 1;
        halt_baddata();
      }
      iVar4 = func_0x00132de4(param_1,0x2dad,0x4749,0x82);
      if (iVar4 == 0) {
        return;
      }
      *(undefined1 *)(param_1 + 5) = 0;
      return;
    }
    uVar3 = func_0x00085690((int)*(short *)(param_1 + 0x36) - (int)_DAT_1f800164,
                            (int)(short)_DAT_1f800160 - (int)*(short *)(param_1 + 0x2e));
    func_0x00041438(param_1,uVar3 & 0xfff,0x100);
    if (_DAT_1f800160 - 0x2e7c < 0x15f) {
      *(undefined2 *)(param_1 + 0x40) = 0;
      halt_baddata();
    }
    sVar2 = *(short *)(param_1 + 0x40) + 1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 < 0x5a) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 6) = 0;
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

