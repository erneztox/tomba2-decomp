// FUN_080254e0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080254e0(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 1) {
      func_0x0011e6ec(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x0011e674(param_1);
      }
    }
    else if (bVar1 == 2) {
      func_0x0011e76c(param_1);
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
    func_0x00051b04(*(undefined4 *)(param_1 + 0xcc),0x14,0xf);
    *(undefined4 *)(*(int *)(param_1 + 0xd0) + 0x40) = 0;
    func_0x00040cdc(param_1,0x80139240,0x800a3cd0);
    func_0x00041718(param_1,0,0);
    if (DAT_800bf8c3 == '\0') {
      *(undefined1 *)(param_1 + 0x5e) = 3;
    }
    else if (DAT_800bf907 == -1) {
      if (DAT_800bf908 == -1) {
        *(undefined1 *)(param_1 + 0x5e) = 5;
      }
      else {
        *(undefined1 *)(param_1 + 0x5e) = 4;
      }
    }
    else if (DAT_800bf906 == '\0') {
      *(undefined1 *)(param_1 + 0x5e) = 0;
    }
    else {
      if (DAT_800bf906 != -1) {
        *(undefined1 *)(param_1 + 0x5e) = 1;
        *(undefined1 **)(param_1 + 0x14) = &DAT_8012ae70;
        *(undefined1 *)(param_1 + 0x5f) = DAT_8012ae70;
        uVar2 = DAT_8012ae72;
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
        *(undefined1 *)(param_1 + 0x7b) = uVar2;
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

