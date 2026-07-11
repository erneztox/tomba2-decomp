// FUN_0802e980

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802e980(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    if (param_1[6] == '\0') {
      func_0x0007778c(param_1);
      if (DAT_800bf9d8 == '\x01') {
        func_0x00040d68(param_1,0x8013501c);
        param_1[0x70] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_0802eb5c:
      func_0x0004190c(param_1);
      return;
    }
    if (param_1[6] == '\x01') {
      param_1[1] = 1;
      func_0x00077e7c(param_1);
      func_0x00041098(param_1);
      if (param_1[0x70] != -1) goto LAB_0802eb5c;
      param_1[6] = 0;
      param_1[5] = 2;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *param_1 = 3;
      *(undefined2 *)(param_1 + 0x80) = 0xa0;
      *(undefined2 *)(param_1 + 0x82) = 0x140;
      *(undefined2 *)(param_1 + 0x56) = 0;
      param_1[0x7b] = 0x2a;
      func_0x00041718(param_1,0x2a,0);
      func_0x00130ba4(param_1);
      param_1[6] = 0;
      if (DAT_800bf9d8 == '\0') {
        param_1[5] = 1;
      }
      else {
        param_1[5] = 2;
      }
    }
  }
  else if (bVar1 == 2) {
    if (DAT_800bf8da == -1) {
      param_1[0x5e] = 1;
      param_1[6] = 0;
      param_1[5] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1[6] == '\0') {
      func_0x0007778c(param_1);
      if (DAT_800bf9d8 != '\b') goto LAB_0802eb5c;
      func_0x00040d68(param_1,0x8013503c);
      param_1[0x70] = 2;
      param_1[6] = param_1[6] + '\x01';
    }
    else if (param_1[6] == '\x01') {
      param_1[1] = 1;
      func_0x00077e7c(param_1);
      func_0x00041098(param_1);
      if (param_1[0x70] == -1) {
        param_1[6] = 0;
      }
      goto LAB_0802eb5c;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

