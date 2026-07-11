// FUN_08039e38

/* WARNING: Control flow encountered bad instruction data */

void FUN_08039e38(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  
  bVar1 = *(byte *)(param_1 + 6);
  bVar4 = 0;
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 < 0xb) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((*(byte *)(param_1 + 0x5f) & 2) != 0) {
      bVar4 = *(byte *)(param_1 + 0xbe) ^ *(byte *)(param_1 + 0x5f) & 1 ^ 1;
    }
    sVar2 = func_0x001349cc(param_1);
    iVar3 = func_0x00135424(param_1,0,0,8);
    if (iVar3 == -1) {
      return;
    }
    func_0x001354f4(param_1);
    if (bVar4 == 0 && sVar2 == 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x40) = 10;
    func_0x00135630(param_1,1);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar3 = func_0x00135158(param_1);
      if (iVar3 == -1) {
        return;
      }
      *(undefined2 *)(param_1 + 0x44) = 0xc00;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + -0x100;
    func_0x001349cc(param_1);
    iVar3 = func_0x00135424(param_1,0,0,8);
    if (iVar3 == -1) {
      return;
    }
    func_0x001354f4(param_1);
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 != 1) {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 10;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 0x40) = 2;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

