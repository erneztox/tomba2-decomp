// FUN_0802a07c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802a07c(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (DAT_800bf931 == -1) {
      param_1[4] = 3;
      halt_baddata();
    }
    iVar2 = func_0x000519e0(param_1,0x12,_DAT_800ecf6c,0x800a43e8);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf70;
      func_0x00077c40(param_1,0x8001b354,9);
      *(undefined2 *)(param_1 + 0x80) = 0xf0;
      *(undefined2 *)(param_1 + 0x82) = 0x1e0;
      *(undefined2 *)(param_1 + 0x84) = 0x88;
      *(undefined2 *)(param_1 + 0x86) = 0x100;
      *(undefined2 *)(param_1 + 0x56) = 0x100;
      param_1[0x18] = 0x38;
      param_1[0x19] = 0x3c;
      *param_1 = 1;
      param_1[0x29] = 0;
      param_1[0x2b] = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      param_1[0xb] = 1;
      param_1[0x1a] = 0x40;
      param_1[4] = param_1[4] + '\x01';
      halt_baddata();
    }
    return;
  }
  func_0x0007778c(param_1);
  bVar1 = param_1[5];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if ((_DAT_800bf854 & 0x80) != 0) {
        param_1[5] = 1;
        halt_baddata();
      }
      if (param_1[6] == '\0') {
        if (param_1[0x2b] == '\x03') {
          param_1[6] = 1;
          DAT_800e7e84 = 4;
          DAT_800e7e85 = 0x21;
          DAT_800e7e86 = 0;
          DAT_800e7ee1 = 0;
          if (DAT_800bf931 == '\0') {
            func_0x00042354(1,4);
          }
          else {
            func_0x00042354(1,2);
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (param_1[6] != '\x01') {
          halt_baddata();
        }
        func_0x00041098(param_1);
        if (param_1[0x70] == -1) {
          func_0x00042310();
          DAT_800bf809 = 0;
          param_1[6] = 0;
          halt_baddata();
        }
      }
      goto LAB_0802a338;
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
    func_0x0004190c(param_1);
  }
  if (param_1[6] == '\0') {
    param_1[6] = 1;
    func_0x00040cdc(param_1,0x8001b354,0x80145100);
    param_1[0x70] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[6] != '\x01') {
    halt_baddata();
  }
  func_0x00041098(param_1);
  if (param_1[0x70] == -1) {
    func_0x00042310();
    param_1[4] = 3;
  }
LAB_0802a338:
  if (param_1[1] != '\0') {
    func_0x000518fc(param_1);
  }
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

