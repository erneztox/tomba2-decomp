// FUN_0801b834

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801b834(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  
  if (param_1[5] == '\0') {
    if ((DAT_800bf8fa == -1) && (DAT_800bfa52 != '\0')) {
      param_1[5] = 1;
      *param_1 = 2;
    }
    else {
      bVar1 = param_1[6];
      if (bVar1 == 1) {
        param_1[6] = 2;
        func_0x00040cdc(param_1,0x8001b4dc,0x8011d4f8);
        uVar2 = 0xe;
        if ((DAT_800bf8fc != -1) && (uVar2 = 4, DAT_800bf8fc != '\0')) {
          uVar2 = 10;
        }
        param_1[0x7a] = uVar2;
        param_1[0x70] = 1;
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          if (param_1[0x2b] != '\x03') {
            return;
          }
          param_1[6] = 1;
          func_0x00042354(1,3);
        }
      }
      else if (bVar1 == 2) {
        func_0x00041098(param_1);
        if (param_1[0x70] != -1) {
          return;
        }
        param_1[6] = 0;
        func_0x00042310();
      }
    }
  }
  else if (param_1[5] == '\x01') {
    bVar1 = param_1[6];
    if (bVar1 == 1) {
      func_0x00041098(param_1);
      if (param_1[0x70] == -1) {
        param_1[6] = param_1[6] + '\x01';
      }
    }
    else if ((bVar1 < 2) && (bVar1 == 0)) {
      param_1[6] = 1;
      func_0x00040cdc(param_1,0x8001b4dc,0x8011d528);
      param_1[0x70] = 1;
      halt_baddata();
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

