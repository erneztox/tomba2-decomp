// FUN_08015498

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08015498(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        func_0x0010e160(param_1);
        _DAT_1f80020c = _DAT_1f80020c & 0xfffffff8;
        if (0xa71 < *(short *)(param_1 + 0x36)) {
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          halt_baddata();
        }
        _DAT_1f80020c = _DAT_1f80020c | 4;
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0010e160(param_1);
      if (DAT_800bf80d == '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 4) = 2;
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 6) = 1;
    _DAT_8011bb60 = func_0x0007e038(0x17,3);
  }
  func_0x0010e160(param_1);
  sVar2 = *(short *)(param_1 + 0x36);
  _DAT_1f80020c = _DAT_1f80020c & 0xfffffff8;
  if (-0x5bb < sVar2) {
    *(undefined1 *)(_DAT_8011bb60 + 4) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (sVar2 < -0x1829) {
    if (sVar2 < -0x2960) {
      uVar3 = _DAT_1f80020c | 1;
      if (sVar2 < -0x39c8) {
        return;
      }
    }
    else {
      uVar3 = _DAT_1f80020c | 2;
    }
  }
  else {
    uVar3 = _DAT_1f80020c | 3;
  }
  _DAT_1f80020c = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

