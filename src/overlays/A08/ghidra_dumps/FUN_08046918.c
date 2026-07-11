// FUN_08046918

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08046918(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = param_1[1];
  if (bVar1 == 1) {
    cVar2 = param_1[0x50];
    param_1[0x50] = cVar2 + 1U;
    if (4 < (byte)(cVar2 + 1U)) {
      param_1[1] = param_1[1] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_080469e0:
    if ((_DAT_800e7e68 & 0x2000) != 0) {
      func_0x0001cba8(param_1,0);
      func_0x0001cba8(param_1,1);
      *(undefined2 *)(_DAT_1f800138 + 0x50) = 2;
    }
    if ((_DAT_800e7e68 & 0x1000) != 0) {
      func_0x0001cba8(param_1,0);
      func_0x0001cba8(param_1,1);
      *(undefined2 *)(_DAT_1f800138 + 0x50) = 3;
    }
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1[0x50] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    if ((((param_1[0x4a] != -4) && (param_1[0x4a] != '\x01')) && (param_1[0x4b] != -4)) &&
       (param_1[0x4b] != '\x01')) {
      param_1[1] = 0;
      *param_1 = 0x65;
    }
    goto LAB_080469e0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

