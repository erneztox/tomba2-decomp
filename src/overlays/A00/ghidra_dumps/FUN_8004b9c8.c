// FUN_8004b9c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004b9c8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (_DAT_800e7fee != 0) {
      FUN_8004d650(DAT_800e7eee,1);
      FUN_8004d4f4(99,1);
      uVar2 = 0x38;
      if (DAT_800e7eee == '(') {
        uVar2 = 0x24;
      }
      FUN_8004ed94(uVar2,0x41);
      FUN_80040c00(3);
      FUN_80040b48(4);
      DAT_800bf81c = 0;
      DAT_800bf88e = 0;
      DAT_800e7eee = '\0';
      *(undefined1 *)(_DAT_800e7ef4 + 4) = 3;
      _DAT_800e7ef4 = 0;
    }
  }
  else if (1 < bVar1) {
    if (bVar1 == 2) {
      FUN_8004d650(DAT_800e7eee,1);
      FUN_8004d4f4(100,1);
      FUN_8004ed94(0x33,0x41);
      DAT_800bf81c = 0;
      DAT_800bf88e = 0;
      DAT_800e7eee = '\0';
      *(undefined1 *)(_DAT_800e7ef4 + 4) = 3;
    }
    else {
      if (bVar1 != 3) {
        return;
      }
      FUN_8004d650(DAT_800e7eee,1);
      FUN_8004d4f4(0x65,1);
      FUN_8004ed94(0x59,0x41);
      DAT_800bf81c = 0;
      DAT_800bf88e = 0;
      DAT_800e7eee = '\0';
      *(undefined1 *)(_DAT_800e7ef4 + 4) = 3;
    }
    _DAT_800e7ef4 = 0;
  }
  return;
}

