// FUN_0802bc34

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0802bc34(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = func_0x0009a450();
  if (((int)_DAT_800e7ffe & 0x8200U) != 0) {
    return 0;
  }
  if (*(int *)(*(int *)(param_1 + 0xfc) + 0x40) == 0) {
    if ((_DAT_800bfe56 & 0x10) == 0) {
      halt_baddata();
    }
  }
  else if ((_DAT_800bfe56 & 0x10) == 0) {
    sVar1 = func_0x000781e0((int)*(short *)(param_1 + 0x2e) - (int)_DAT_1f800160,
                            (int)*(short *)(param_1 + 0x36) - (int)_DAT_1f800164);
    if (((((int)_DAT_800e7ffe & 0x8200U) != 0) || (0x640 < sVar1)) || (0x44c < sVar1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = 2;
    if (600 < sVar1) {
      uVar2 = 1;
    }
    if (uVar2 == 1) {
      halt_baddata();
    }
    if (1 < uVar2) {
      if (uVar2 != 2) {
        halt_baddata();
      }
      return *(undefined1 *)((iVar3 >> 8 & 0xfU) + 0x80141884);
    }
    if (uVar2 != 0) {
      halt_baddata();
    }
    halt_baddata();
  }
  sVar1 = func_0x000781e0((int)*(short *)(param_1 + 0x2e) - (int)_DAT_1f800160,
                          (int)*(short *)(param_1 + 0x36) - (int)_DAT_1f800164);
  if (((((int)_DAT_800e7ffe & 0x8200U) == 0) && (sVar1 < 0x641)) && (sVar1 < 0x44d)) {
    uVar2 = 2;
    if (600 < sVar1) {
      uVar2 = 1;
    }
    if (uVar2 != 1) {
      if (uVar2 < 2) {
        if (uVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else if (uVar2 != 2) {
        halt_baddata();
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

