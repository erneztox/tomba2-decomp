// FUN_08028b18

/* WARNING: Control flow encountered bad instruction data */

void FUN_08028b18(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    bVar1 = *(byte *)(param_1 + 0x5e);
    if (bVar1 == 1) {
      func_0x001211b0(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x00120fd4(param_1);
      }
    }
    else if (bVar1 == 2) {
      func_0x0012168c(param_1);
    }
    else if (bVar1 == 3) {
      func_0x001218b0(param_1);
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
    if (bVar1 == 0) {
      func_0x00040cdc(param_1,0x8014005c,0x800a3d18);
      *(undefined1 *)(param_1 + 0x7b) = 0x17;
      func_0x00041718(param_1,0x17,0);
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      if (DAT_800bf9d7 != 2) {
        if (DAT_800bf9d7 < 3) {
          *(undefined1 *)(param_1 + 0x5e) = 0;
        }
        else {
          if (DAT_800bf9d7 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined1 *)(param_1 + 0x5e) = 2;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar2 = 1;
      if (DAT_800bf8db == -1) {
        uVar2 = 3;
      }
      *(undefined1 *)(param_1 + 0x5e) = uVar2;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
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

