// FUN_0802fc10

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802fc10(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    bVar1 = *(byte *)(param_1 + 0x5e);
    if (bVar1 == 1) {
      func_0x00128798(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x00128594(param_1);
      }
    }
    else if (bVar1 == 2) {
      func_0x00128980(param_1);
      if (*(char *)(param_1 + 1) != '\0') {
        func_0x000518fc(param_1);
      }
      *(undefined1 *)(param_1 + 0x2b) = 0;
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = func_0x000519e0(param_1,0x10,_DAT_800ecfac,0x80131ac8);
    if (iVar2 == 0) {
      func_0x00051b04(*(undefined4 *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0),0x15,0xf);
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x00040cdc(param_1,0x8014005c,0x800a3d18);
      *(undefined1 *)(param_1 + 0xb) = 0x40;
      *(undefined2 *)(param_1 + 0x80) = 0x90;
      *(undefined2 *)(param_1 + 0x84) = 0xc0;
      *(undefined2 *)(param_1 + 0x82) = 0x120;
      *(undefined2 *)(param_1 + 0x86) = 0x120;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined1 *)(param_1 + 0x7b) = 0x22;
      func_0x00041718(param_1,0x22,0);
      if (DAT_800bf8da == -1) {
        if (DAT_800bf8d9 == -1) {
          *(undefined1 *)(param_1 + 0x5e) = 2;
          *(undefined1 *)(param_1 + 0x2b) = 0;
          *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 0x5e) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x5e) = 0;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

