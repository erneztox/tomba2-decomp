// FUN_08012a88

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_08012a88(int param_1)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = _DAT_800bf860;
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    sVar3 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar3;
    if (sVar3 == -1) {
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
      _DAT_800bf864 = func_0x0003116c(0xa00,param_1 + 0x2c,0);
      *(undefined2 *)(param_1 + 0x40) = 0x1e;
    }
    else {
      *(short *)(iVar2 + 0x30) = *(short *)(iVar2 + 0x30) + 0x10;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      *(undefined2 *)(param_1 + 0x40) = 10;
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    sVar3 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar3;
    return sVar3 == -1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

