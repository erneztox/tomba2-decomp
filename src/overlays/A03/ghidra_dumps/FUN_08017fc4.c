// FUN_08017fc4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017fc4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_zero;
  undefined4 extraout_at;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + 4);
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
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0x10;
  }
  iVar6 = 0xf;
  do {
    iVar5 = iVar6 * 4;
    iVar6 = iVar6 + -1;
    iVar4 = param_1 + 0x2c + iVar6 * 4;
    iVar5 = param_1 + 0x2c + iVar5;
    *(undefined2 *)(iVar5 + 0x10) = *(undefined2 *)(iVar4 + 0x10);
    *(undefined2 *)(iVar5 + 0x12) = *(undefined2 *)(iVar4 + 0x12);
  } while (0 < iVar6);
  func_0x000329e0(6);
  setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
  setCopReg(2,extraout_at,*(undefined4 *)(param_1 + 0x30));
  copFunction(2,0x180001);
  _DAT_1f800080 = getCopControlWord(2,0xf800);
  if (-1 < _DAT_1f800080) {
    iVar6 = getCopReg(2,0x13);
    _DAT_1f800080 = ((iVar6 >> 2) >> (iVar6 >> 0xc & 0x1fU)) + (iVar6 >> 0xc) * 0x200;
    if (0x7fb < _DAT_1f800080 - 4U) {
      _DAT_1f800080 = -1;
    }
    if (0 < _DAT_1f800080) {
      uVar2 = getCopReg(2,0xe);
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + *(short *)(param_1 + 0x34);
      *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + *(short *)(param_1 + 0x36);
      *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + *(short *)(param_1 + 0x38);
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + 2;
      if (*(char *)(param_1 + 5) == '\x10') {
        iVar4 = 1;
        iVar6 = param_1 + 0x30;
        do {
          iVar4 = iVar4 + 1;
          *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(param_1 + 0x3c);
          iVar6 = iVar6 + 4;
        } while (iVar4 < 0x10);
      }
      cVar3 = *(char *)(param_1 + 5) + -1;
      *(char *)(param_1 + 5) = cVar3;
      if (cVar3 == '\0') {
        *(undefined1 *)(param_1 + 4) = 2;
      }
      else {
        *(undefined1 *)(param_1 + 1) = 1;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

