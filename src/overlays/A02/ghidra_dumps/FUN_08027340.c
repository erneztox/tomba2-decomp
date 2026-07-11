// FUN_08027340

/* WARNING: Control flow encountered bad instruction data */

void FUN_08027340(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x00120144(param_1);
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x000518fc(param_1);
    }
    *(undefined1 *)(param_1 + 0x2b) = 0;
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
      func_0x00040cdc(param_1,0x80139240,0x800a3d18);
      func_0x00051b04(*(undefined4 *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0),0x1b,4);
      func_0x00041718(param_1,1,0);
      uVar2 = 9;
      if (DAT_800bf8be == -1) {
        uVar2 = 10;
      }
      *(undefined1 *)(param_1 + 0x7a) = uVar2;
      *(undefined1 *)(param_1 + 0x7b) = 1;
      *(undefined2 *)(param_1 + 0x56) = 0x400;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

