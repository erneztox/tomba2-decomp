// FUN_08021d28

/* WARNING: Control flow encountered bad instruction data */

void FUN_08021d28(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  if (*(short *)(param_1 + 0x68) == 0) {
    sVar2 = func_0x0011bcb0();
    if (sVar2 != 0) {
      *(undefined2 *)(param_1 + 0x66) = 0;
      *(undefined1 *)(param_1 + 5) = 1;
      *(undefined1 *)(param_1 + 6) = 0;
      halt_baddata();
    }
    iVar4 = func_0x0011c1d4(param_1,0);
    if (iVar4 != 0) {
      return;
    }
  }
  func_0x0011bfa4(param_1,0);
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 != 1) {
      return;
    }
    func_0x00077cfc(param_1,0x80141e14,0,4);
    *(undefined2 *)(param_1 + 0x40) = 0x3c;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 != 1) {
        return;
      }
      uVar3 = func_0x0009a450();
      *(ushort *)(param_1 + 0x40) = (uVar3 & 0x3f) + 0x1e;
      if ((uVar3 & 3) == 0) {
        *(undefined1 *)(param_1 + 6) = 2;
        *(undefined2 *)(param_1 + 0x72) = 0;
      }
      else {
        if ((uVar3 & 4) == 0) {
          return;
        }
        func_0x00077cfc(param_1,0x80141e14,0x1e,2);
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
    }
  }
  else if (bVar1 == 2) {
    sVar2 = func_0x0011bb94(param_1);
    if (sVar2 == 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x40) = 0x3c;
    *(undefined1 *)(param_1 + 6) = 0;
    *(byte *)(param_1 + 0xbe) = *(byte *)(param_1 + 0xbe) ^ 1;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

