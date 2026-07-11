// FUN_08034958

/* WARNING: Control flow encountered bad instruction data */

void FUN_08034958(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  func_0x0004766c();
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x32) + 10;
    *(short *)(param_1 + 0x32) = sVar2;
    if (sVar2 < *(short *)(param_1 + 100)) {
      if ((*(char *)(param_1 + 0x29) == '\0') &&
         (iVar3 = func_0x00049250(param_1,0,0x1e), iVar3 != 1)) {
        return;
      }
      *(undefined1 *)(param_1 + 5) = 3;
    }
    else {
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 100);
      *(undefined1 *)(param_1 + 5) = 2;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      sVar2 = *(short *)(param_1 + 0x32) + -10;
      *(short *)(param_1 + 0x32) = sVar2;
      if (*(short *)(param_1 + 100) < sVar2) {
        return;
      }
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 100);
      *(undefined1 *)(param_1 + 5) = 2;
    }
  }
  else if (bVar1 == 2) {
    if (*(short *)(param_1 + 0x4a) == 0) {
      func_0x0011b344(param_1 + 0x2c,0xfffffff6,0x14,100);
    }
    iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x4a));
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 100) + (short)(iVar3 >> 7);
    *(ushort *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x40U & 0xfff;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

