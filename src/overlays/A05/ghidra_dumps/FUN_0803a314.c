// FUN_0803a314

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803a314(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    iVar3 = func_0x00132de4(param_1,0x301d,0x49d9,1);
    if (iVar3 == 0) {
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    if ((_DAT_800e7ffe & 0x200) != 0) {
      return;
    }
    bVar2 = _DAT_1f800160 < 0x300c;
    if (0x306f < _DAT_1f800160) {
      if (0x3138 < _DAT_1f800160) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      iVar3 = func_0x00132de4(param_1,0x31c8,0x46cf,0);
      if (iVar3 == 0) {
        return;
      }
      *(undefined1 *)(param_1 + 5) = 0;
      return;
    }
    if ((_DAT_800e7ffe & 0x200) != 0) {
      return;
    }
    bVar2 = _DAT_1f800160 < 0x2e2c;
    if (0x2e7b < _DAT_1f800160) {
      if (0x2f44 < _DAT_1f800160) {
        return;
      }
      halt_baddata();
    }
  }
  if (!bVar2) {
    *(undefined1 *)(param_1 + 6) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

