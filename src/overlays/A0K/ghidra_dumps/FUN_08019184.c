// FUN_08019184

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019184(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    sVar3 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar3;
    if (sVar3 == -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cVar2 = '\x03';
      if (DAT_800bf871 == '\x04') {
        *(undefined2 *)(param_1 + 0x40) = 0xf;
        *(undefined1 *)(param_1 + 5) = 1;
        *(undefined2 *)(param_1 + 0x50) = 0x400;
        func_0x00072efc(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 2) {
        *(undefined1 *)(param_1 + 1) = 1;
        halt_baddata();
      }
      iVar4 = func_0x00072f14(param_1);
      if (iVar4 == 0) goto LAB_08019250;
      cVar2 = *(char *)(param_1 + 5) + '\x01';
    }
    *(char *)(param_1 + 5) = cVar2;
  }
LAB_08019250:
  *(undefined1 *)(param_1 + 1) = 1;
  *(short *)(param_1 + 0x32) = _DAT_1f800240 + -0x5c0;
  func_0x000517f8();
  return;
}

