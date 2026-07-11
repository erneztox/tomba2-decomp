// FUN_0801b3b8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0801b5b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801b3b8(undefined1 *param_1)

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
    if (bVar1 == 0) {
      iVar2 = func_0x000519e0(param_1,0xd,_DAT_800ecfe0,0x8013ba8c);
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfe4;
      func_0x00077c40(param_1,0x80141af8,0);
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x96;
      *(undefined2 *)(param_1 + 0x82) = 300;
      *(undefined2 *)(param_1 + 0x84) = 0x80;
      *(undefined2 *)(param_1 + 0x86) = 0x100;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      param_1[0x5e] = 0;
      param_1[0xb] = 0xf;
      param_1[4] = param_1[4] + '\x01';
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[5] == '\0') {
    if ((DAT_800bf9bf & 0x80) == 0) {
      func_0x001141f8(param_1);
    }
    else {
      param_1[5] = 1;
    }
  }
  else if (param_1[5] == '\x01') {
    bVar1 = param_1[6];
    if (bVar1 == 1) {
      func_0x00041098(param_1);
      if (param_1[0x70] == -1) {
        func_0x00040cdc(param_1,0x80141af8,0x8013c83c);
        param_1[0x70] = 1;
        param_1[6] = param_1[6] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar1 < 2) {
        if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[6] = 1;
        func_0x00040cdc(param_1,0x80141af8,0x8013c748);
        param_1[0x70] = 1;
        halt_baddata();
      }
      if (bVar1 != 2) {
        halt_baddata();
      }
      func_0x00041098(param_1);
      if (param_1[0x70] == -1) {
        param_1[6] = 0;
        halt_baddata();
      }
    }
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 != 0) {
      func_0x0004190c(param_1);
      func_0x000518fc(param_1);
      halt_baddata();
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

