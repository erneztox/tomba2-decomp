// FUN_08029d68

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08029d68(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[0x5e];
    if (bVar1 == 1) {
      func_0x00122874(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x001225ec(param_1);
      }
    }
    else if (bVar1 == 2) {
      func_0x00122abc(param_1);
      if (param_1[1] != '\0') {
        func_0x000518fc(param_1);
      }
      param_1[0x2b] = 0;
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x00040cdc(param_1,0x8014005c,0x800a3d18);
      param_1[0x7b] = 0x17;
      func_0x00041718(param_1,0x17,0);
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      if ((_DAT_800bfe56 & 0x80) == 0) {
        if (DAT_800bf8d8 == '\0') {
          *param_1 = 3;
          param_1[0x5e] = 0;
        }
        else {
          param_1[0x5e] = 1;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *param_1 = 3;
      param_1[0x5e] = 2;
      param_1[4] = param_1[4] + '\x01';
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

