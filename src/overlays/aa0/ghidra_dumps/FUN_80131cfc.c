// FUN_80131cfc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80131cfc(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  sVar2 = _DAT_1f800162;
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x5e) == '\0') {
      *(undefined2 *)(param_1 + 0x40) = 0;
      *(short *)(param_1 + 0x60) = sVar2;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      FUN_8013ada8();
      return;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_8013ada8();
      return;
    }
    if (*(char *)(param_1 + 0x29) != '\0') {
      _DAT_1f8000c0 = *(undefined2 *)(param_1 + 0x2e);
      _DAT_1f8000c2 = *(undefined2 *)(param_1 + 0x32);
      _DAT_1f8000c4 = *(undefined2 *)(param_1 + 0x36);
      iVar3 = FUN_8012e53c(param_1,(int)*(short *)(param_1 + 0x40));
      if (iVar3 != 0) {
        *(undefined1 *)(param_1 + 0x5e) = 1;
        *(undefined1 *)(param_1 + 5) = 1;
        FUN_8013ada8();
        return;
      }
    }
  }
  else {
    if (bVar1 != 2) {
      FUN_8013ada8();
      return;
    }
    if (*(short *)(param_1 + 0x40) < 0x2f) {
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
    }
    if (*(short *)(param_1 + 0x60) != _DAT_1f800162) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    *(short *)(param_1 + 0x60) = _DAT_1f800162;
  }
  return;
}

