// FUN_08041a5c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08041dac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08041a5c(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    func_0x0004190c(param_1);
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      if (param_1[6] == '\0') {
        if (DAT_800bf80f == '\0') {
          param_1[6] = 1;
          func_0x00042354(1,2);
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
          param_1[6] = param_1[6] + '\x01';
          func_0x00042310();
          DAT_1f800137 = 2;
          _DAT_800bf854 = 1;
          halt_baddata();
        }
      }
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar2 = func_0x0013a7d4(param_1);
      if (iVar2 == 2) {
        param_1[5] = 2;
        param_1[6] = 1;
        halt_baddata();
      }
    }
    else if (bVar1 == 2) {
      if (param_1[6] == '\0') {
        if (DAT_800bf80f == '\0') {
          param_1[6] = 1;
          func_0x00042354(1,2);
          func_0x00040cdc(param_1,0x80148790,0x801478e4);
          param_1[0x70] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (param_1[6] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x00041098(param_1);
        if (param_1[0x70] == -1) {
          param_1[6] = 0;
          func_0x00042310();
          halt_baddata();
        }
      }
    }
    else {
      if (bVar1 != 3) {
        halt_baddata();
      }
      if (param_1[6] == '\0') {
        if (param_1[0x2b] == '\x03') {
          param_1[6] = 1;
          func_0x00042354(1,2);
          if (DAT_800bf928 != -1) {
            func_0x00040cdc(param_1,0x80148790,0x8014791c);
            param_1[0x70] = 1;
            halt_baddata();
          }
          halt_baddata();
        }
      }
      else {
        if (param_1[6] != '\x01') {
          halt_baddata();
        }
        func_0x00041098(param_1);
        if (param_1[0x70] == -1) {
          param_1[6] = 0;
          func_0x00042310();
        }
      }
    }
    func_0x000518fc(param_1);
    param_1[0x2b] = 0;
    if (DAT_800bf922 == -1) {
      return;
    }
    param_1[1] = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfd0,0x80141524);
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x00077c40(param_1,0x80148790,0);
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x50;
      *(undefined2 *)(param_1 + 0x82) = 0xa0;
      *(undefined2 *)(param_1 + 0x84) = 0xc0;
      *(undefined2 *)(param_1 + 0x86) = 0x156;
      *(undefined2 *)(param_1 + 0x56) = 0x800;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      param_1[4] = param_1[4] + '\x01';
      if (DAT_800bf922 == -1) {
        param_1[5] = 3;
        *(undefined2 *)(param_1 + 0x32) = 0xf0e2;
        *(undefined2 *)(param_1 + 0x36) = 0x1602;
      }
      else if (DAT_800bf922 == '\0') {
        param_1[5] = 0;
      }
      else if ((((_DAT_800bf89e & 0x200) == 0) && ((DAT_800bf881 & 4) == 0)) &&
              (DAT_800bfb04 != '\0')) {
        param_1[5] = 2;
      }
      else {
        param_1[5] = 1;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

