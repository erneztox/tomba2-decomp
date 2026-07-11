// FUN_0802582c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802582c(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x5e) != -1) {
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077e7c(param_1);
    }
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 1) {
      func_0x0011efc8(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x0011ef70(param_1);
      }
    }
    else if (bVar1 == 2) {
      func_0x0011ead4(param_1);
    }
    else if (bVar1 == 3) {
      func_0x0011ecc8(param_1);
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
    if (DAT_800bf8fd == 1) {
      if (DAT_800bfb00 != '\0') {
        func_0x00040cdc(param_1,0x80139240,0x8012b0c8);
        *(undefined1 *)(param_1 + 0x5e) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00040cdc(param_1,0x80139240,0x8012b130);
      *(undefined1 *)(param_1 + 0x5e) = 0;
      func_0x00041718(param_1,0x13,0);
    }
    else if (DAT_800bf8fd < 2) {
      if (DAT_800bf8fd == 0) {
        if (DAT_800bfa04 == '\0') {
          func_0x00040cdc(param_1,0x80139240,0x8012b0c8);
          func_0x00041718(param_1,0x11,0);
          *(undefined2 *)(param_1 + 0x56) = 0x800;
          iVar2 = func_0x0006fde8(param_1,1);
          _DAT_800bf844 = iVar2;
          if (iVar2 != 0) {
            *(undefined1 *)(iVar2 + 0x5e) = 2;
            *(undefined2 *)(iVar2 + 0x60) = 0x40;
            *(undefined2 *)(iVar2 + 0x62) = 0x20;
            *(undefined2 *)(iVar2 + 0x56) = *(undefined2 *)(param_1 + 0x56);
          }
          *(undefined1 *)(param_1 + 0x5e) = 3;
        }
        else {
          func_0x00040cdc(param_1,0x80139240,0x8012af40);
          func_0x00041718(param_1,0,0);
          *(undefined2 *)(param_1 + 0x2e) = 0xcba;
          *(undefined2 *)(param_1 + 0x36) = 5000;
          *(undefined2 *)(param_1 + 0x56) = 0xc00;
          *(undefined1 *)(param_1 + 0x5e) = 0xff;
          *(undefined1 *)(param_1 + 5) = 3;
        }
      }
    }
    else if (DAT_800bf8fd == 0xff) {
      func_0x00040cdc(param_1,0x80139240,0x8012b100);
      func_0x00041718(param_1,0,0);
      *(undefined1 *)(param_1 + 0x5e) = 2;
      *(undefined1 **)(param_1 + 0x14) = &DAT_8012af14;
      *(undefined1 *)(param_1 + 0x5f) = DAT_8012af14;
      *(undefined1 *)(param_1 + 0x7b) = DAT_8012af16;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      halt_baddata();
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

