// FUN_08022274

/* WARNING: Control flow encountered bad instruction data */

void FUN_08022274(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  func_0x0011bfa4(param_1,0);
  uVar2 = func_0x0011bcb0(param_1);
  if (*(short *)(param_1 + 0x68) == 0) {
    if ((short)uVar2 < 2) {
      func_0x00077cfc(param_1,0x80141e14,0,4);
      *(undefined2 *)(param_1 + 0x66) = 0;
      *(undefined1 *)(param_1 + 5) = 1;
      halt_baddata();
    }
    iVar4 = func_0x0011c1d4(param_1,1);
    if (iVar4 != 0) {
      return;
    }
  }
  func_0x0011b9ec(param_1,0);
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    sVar3 = func_0x0011bb94(param_1);
    if (sVar3 == 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x40) = 1;
    *(byte *)(param_1 + 0xbe) = *(byte *)(param_1 + 0xbe) ^ 1;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar4 = func_0x0011cb08(param_1);
      if (iVar4 != 0) {
        *(undefined2 *)(param_1 + 0x72) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 6) = 2;
      *(undefined2 *)(param_1 + 0x40) = 1;
    }
  }
  else if (bVar1 == 2) {
    sVar3 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar3 + -1;
    if (sVar3 != 1) {
      return;
    }
    uVar6 = 10;
    if (((uVar2 & 1) == 0) && (uVar6 = 0, (uVar2 & 2) != 0)) {
      uVar6 = 0xe;
    }
    uVar5 = func_0x0009a450();
    if ((uVar5 & 0xf) < uVar6) {
      *(undefined1 *)(param_1 + 5) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x40) = 0x3c;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (bVar1 == 3) {
    sVar3 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar3 + -1;
    if (sVar3 == 1) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

