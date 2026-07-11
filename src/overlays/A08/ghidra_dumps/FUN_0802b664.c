// FUN_0802b664

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802b664(undefined1 *param_1)

{
  func_0x00051b70(param_1,0xc,0x44);
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  param_1[0x2b] = 0;
  if ((DAT_800bfa42 & 0x80) == 0) {
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x80) = 0x40;
    *(undefined2 *)(param_1 + 0x82) = 0x80;
    *(undefined2 *)(param_1 + 0x84) = 0x80;
    *(undefined2 *)(param_1 + 0x86) = 0x100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x56) = 0xc00;
  param_1[6] = 10;
  param_1[4] = 2;
  return;
}

