// FUN_08024584

/* WARNING: Control flow encountered bad instruction data */

void FUN_08024584(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    func_0x0011d100(param_1);
    if (param_1[1] != '\0') {
      func_0x000517f8(param_1);
    }
    param_1[0x2b] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar3 = func_0x00051b70(param_1,0xc,0x36);
    if (iVar3 == 0) {
      *(undefined2 *)(param_1 + 0x80) = 0x1e;
      *(undefined2 *)(param_1 + 0x82) = 0x3c;
      *(undefined2 *)(param_1 + 0x84) = 0x32;
      *(undefined2 *)(param_1 + 0x86) = 100;
      *(undefined2 *)(param_1 + 0x50) = 0x780;
      param_1[4] = param_1[4] + '\x01';
      *param_1 = 1;
      param_1[0x29] = 0;
      sVar2 = *(short *)((uint)(byte)param_1[3] * 2 + -0x7febb164);
      *(short *)(param_1 + 0x62) = *(short *)(param_1 + 0x32);
      *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x32) - sVar2;
      if (((param_1[3] == '\0') && (DAT_800bf8d3 != -1)) && (DAT_800bfae4 == '\0')) {
        func_0x0012a900(param_1);
        halt_baddata();
      }
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

