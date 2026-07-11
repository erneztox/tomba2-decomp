// FUN_80118d5c

void FUN_80118d5c(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    if (param_1[0x2b] == '\x03') {
      param_1[5] = 2;
      func_0x80042354(1,1);
      FUN_80121e04();
      return;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        FUN_80121e04();
        return;
      }
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x50;
      *(undefined2 *)(param_1 + 0x82) = 0xa0;
      *(undefined2 *)(param_1 + 0x84) = 0x80;
      param_1[5] = 1;
      *(undefined2 *)(param_1 + 0x86) = 0xe0;
      param_1[0xb] = 0;
      func_0x80077cfc(param_1,&DAT_8014e4ec,0,4);
      FUN_80121e04();
      return;
    }
    if (bVar1 == 2) {
      param_1[5] = 3;
      func_0x80040cdc(param_1,&DAT_8014e4ec,0x801494d0);
      param_1[0x70] = 1;
      FUN_80121e04();
      return;
    }
    if (bVar1 != 3) {
      FUN_80121e04();
      return;
    }
    func_0x80041098(param_1);
    if (param_1[0x70] == -1) {
      param_1[5] = 1;
      func_0x80042310();
    }
  }
  func_0x8004190c(param_1);
  func_0x8007778c(param_1);
  func_0x800518fc(param_1);
  return;
}

