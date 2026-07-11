// FUN_0803de44

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803de44(undefined1 *param_1)

{
  short sVar1;
  
  func_0x0004766c();
  if (param_1[6] != '\0') {
    if (param_1[6] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar1 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar1 + -1;
    if (sVar1 == 1) {
      *param_1 = 1;
      param_1[4] = 1;
      param_1[5] = 1;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[0xd] = 0;
      param_1[0x1b] = param_1[0x1b] & 0xbf;
      func_0x00077cfc(param_1,0x80149588,1,4);
      *(undefined2 *)(param_1 + 0x74) = 0;
    }
    return;
  }
  if ((param_1[0x1b] & 0x40) == 0) {
    func_0x000331d8(param_1,*(undefined4 *)(param_1 + 0xc0),0xffffff9c,0);
    param_1[0x1b] = param_1[0x1b] | 0x40;
  }
  func_0x00077c40(param_1,0x80149588,0x17);
  *(undefined2 *)(param_1 + 0x40) = 100;
  param_1[0x46] = 1;
  param_1[0x2b] = 0;
  if (param_1[5] == '\x04') {
    func_0x00077e20(param_1,0x40,0x70,0xa0);
    *(undefined2 *)(param_1 + 0x74) = 1;
  }
  else if (param_1[5] == '\x05') {
    func_0x00077e20(param_1,0x90,0x80,0x81);
    *(undefined2 *)(param_1 + 0x74) = 0;
    if (param_1[1] != '\0') {
      func_0x00074590(0x8f,0,0);
    }
    param_1[6] = param_1[6] + '\x01';
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

