// FUN_08027454

/* WARNING: Control flow encountered bad instruction data */

void FUN_08027454(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 1) {
      func_0x00120610(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x00120564(param_1);
      }
    }
    else if (bVar1 == 2) {
      func_0x0012067c(param_1);
      func_0x000518fc(param_1);
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
    func_0x00040cdc(param_1,0x80139240,0x8012b504);
    func_0x00041718(param_1,0,0);
    if (DAT_800bf901 < 2) {
      *(undefined1 *)(param_1 + 0x5e) = 0;
    }
    else {
      if (DAT_800bf901 != 0xff) {
        *(undefined1 *)(param_1 + 0x5e) = 1;
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0x5e) = 2;
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

