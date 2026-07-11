// FUN_0801a4ec

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801a4ec(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  short sVar5;
  
  if (*(char *)(param_1 + 5) == '\0') {
    if (DAT_800bfa28 == 2) {
      *(undefined1 *)(param_1 + 5) = 1;
      *(undefined1 *)(param_1 + 6) = 0;
      halt_baddata();
    }
    bVar1 = *(byte *)(param_1 + 6);
    if (bVar1 == 1) {
      *(undefined1 *)(param_1 + 6) = 2;
      func_0x00040cdc(param_1,0x8001b4dc,0x8011cc2c);
      if (DAT_800bf8fc == -1) {
        *(undefined1 *)(param_1 + 0x7a) = 0xb;
      }
      else {
        if ((DAT_800bf8fc == '\0') && (DAT_800bf8fb == '\0')) {
          *(undefined1 *)(param_1 + 0x7a) = 0;
          *(undefined1 *)(param_1 + 0x70) = 1;
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 0x7a) = 5;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) == -1) {
        *(undefined1 *)(param_1 + 6) = 0;
        func_0x00042310();
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x2b) == '\x03') {
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x00042354(1,3);
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
      halt_baddata();
    }
    bVar1 = *(byte *)(param_1 + 6);
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 != 2) {
          halt_baddata();
        }
        sVar5 = *(short *)(param_1 + 0x40) + -1;
        *(short *)(param_1 + 0x40) = sVar5;
        if (sVar5 != -1) {
          return;
        }
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x60);
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x62);
        *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 100);
        func_0x00077c40(param_1,0x8001b4dc,5);
        return;
      }
      if (bVar1 != 0) {
        halt_baddata();
      }
      uVar2 = *(undefined2 *)(param_1 + 0x2e);
      *(undefined1 *)(param_1 + 6) = 1;
      uVar3 = *(undefined2 *)(param_1 + 0x36);
      uVar4 = *(undefined2 *)(param_1 + 0x56);
      *(undefined2 *)(param_1 + 0x2e) = 0x44a5;
      *(undefined2 *)(param_1 + 0x36) = 0x1f49;
      *(undefined2 *)(param_1 + 0x56) = 0x400;
      *(undefined2 *)(param_1 + 0x60) = uVar2;
      *(undefined2 *)(param_1 + 0x62) = uVar3;
      *(undefined2 *)(param_1 + 100) = uVar4;
      func_0x00077c40(param_1,0x8001b4dc,10);
    }
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -10;
    if (2 < DAT_800bfa28) {
      *(undefined2 *)(param_1 + 0x40) = 0x3c;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

