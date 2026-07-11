// FUN_8010e28c

void FUN_8010e28c(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 3) != '\0') {
      if (*(char *)(param_1 + 3) != '\x01') {
        FUN_801173f0();
        return;
      }
      FUN_80116e3c(param_1);
      FUN_801173f0();
      return;
    }
    if (*(char *)(param_1 + 0x5e) == '\0') {
      FUN_80116f64(param_1);
      FUN_801173f0();
      return;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        FUN_801173f0();
        return;
      }
      if (*(char *)(param_1 + 3) != '\0') {
        if (*(char *)(param_1 + 3) != '\x01') {
          FUN_80117310();
          return;
        }
        iVar2 = func_0x80051b70(param_1,1,2);
        if (iVar2 == 0) {
          *(undefined2 *)(param_1 + 0x80) = 0x28;
          *(undefined2 *)(param_1 + 0x82) = 0x50;
          *(undefined2 *)(param_1 + 0x84) = 0x4b;
          *(undefined2 *)(param_1 + 0x86) = 0x73;
          *(undefined2 *)(param_1 + 0x54) = 0;
          *(undefined2 *)(param_1 + 0x56) = 0;
          *(undefined2 *)(param_1 + 0x58) = 0;
          *(undefined1 *)(param_1 + 0x29) = 0;
          if (DAT_800bf9e5 == '\x04') {
            *(undefined1 *)(param_1 + 0x5e) = 1;
          }
        }
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
        FUN_801173f0();
        return;
      }
      func_0x8004bef4(param_1);
      FUN_80117310();
      return;
    }
    if (bVar1 == 2) {
      if ((((*(char *)(param_1 + 3) != '\0') && (*(char *)(param_1 + 3) == '\x01')) &&
          (*(char *)(param_1 + 5) == '\0')) && (iVar2 = func_0x80040c00(6), -1 < iVar2)) {
        func_0x80040b48(7);
        func_0x8004d4c4(0x29,1);
        func_0x8004b0d8(param_1);
        *(undefined1 *)(param_1 + 0x5e) = 2;
        *(undefined1 *)(param_1 + 4) = 1;
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined1 *)(param_1 + 6) = 0;
        DAT_800bf9e5 = 6;
        FUN_801173f0();
        return;
      }
    }
    else {
      if (bVar1 != 3) {
        FUN_801173f0();
        return;
      }
      func_0x8007a624(param_1);
    }
  }
  return;
}

