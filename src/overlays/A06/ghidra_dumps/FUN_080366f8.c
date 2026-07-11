// FUN_080366f8

/* WARNING: Control flow encountered bad instruction data */

void FUN_080366f8(undefined1 *param_1)

{
  short sVar1;
  
  if (param_1[6] == '\0') {
    param_1[6] = 1;
    if (param_1[0x5e] == '\0') {
      param_1[0xd] = param_1[0xd] & 0xfe;
      func_0x0004ed94(0x3c,0x41);
      param_1[0x5e] = 1;
      func_0x00074590(0x91,0,0);
    }
    *param_1 = 1;
    if (param_1[3] == '\0') {
      *(undefined2 *)(param_1 + 0x40) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x40) = 0x10;
    func_0x00077c40(param_1,0x8014d97c,2);
  }
  else if (param_1[6] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar1 + -1;
  if ((short)(sVar1 + -1) == -1) {
    param_1[4] = 1;
    if (param_1[3] == '\0') {
      param_1[5] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[5] = 0;
    func_0x00077c40(param_1,0x8014d97c,1);
    param_1[6] = 0;
  }
  return;
}

