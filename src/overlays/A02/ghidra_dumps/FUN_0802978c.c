// FUN_0802978c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802978c(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[3];
    if (bVar1 == 1) {
      func_0x00122404(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (param_1[5] == '\0') {
          func_0x00040d68(param_1,0x8012c5a4);
          param_1[0x70] = 2;
          param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (param_1[5] != '\x01') {
          param_1[1] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (param_1[0x70] == -1) {
          param_1[3] = 1;
          param_1[5] = 0;
        }
        param_1[1] = 1;
        func_0x00077e7c(param_1);
        func_0x00041098(param_1);
        func_0x0004190c(param_1);
      }
    }
    else if (bVar1 == 2) {
      func_0x001225ec(param_1);
      if (param_1[1] != '\0') {
        func_0x000518fc(param_1);
      }
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (1 < bVar1) {
    if (3 < bVar1) {
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 == 0) {
    if (param_1[5] != '\0') {
      param_1[5] = 0;
      iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfa0,0x80129348);
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x00040cdc(param_1,0x80139240,0x800a3d18);
      bVar1 = param_1[3];
      param_1[0xb] = 0x40;
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0xaa;
      *(undefined2 *)(param_1 + 0x82) = 0x154;
      *(undefined2 *)(param_1 + 0x84) = 0x90;
      *(undefined2 *)(param_1 + 0x86) = 0xf0;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      if (bVar1 != 1) {
        if (bVar1 < 2) {
          if (bVar1 == 0) {
            *(undefined4 *)(param_1 + 0x2c) = 0x266a0000;
            *(undefined4 *)(param_1 + 0x30) = 0xf8f80000;
            *(undefined4 *)(param_1 + 0x34) = 0x28de0000;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else if (bVar1 == 2) {
          param_1[0x7b] = 0;
          *(undefined2 *)(param_1 + 0x56) = 0xc00;
          func_0x00126c18(param_1);
          func_0x00041718(param_1,param_1[0x7b],0);
          param_1[4] = param_1[4] + '\x01';
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1[0x7b] = 0xf;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[5] = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

