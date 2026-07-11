// FUN_0801299c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801299c(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  *(byte *)(param_1 + 0x177) = *(byte *)(param_1 + 0x177) | 2;
  func_0x00076d68();
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    iVar6 = (int)*(short *)(param_1 + 0x44);
    iVar5 = iVar6;
    if (iVar6 < 0) {
      iVar5 = -iVar6;
    }
    sVar4 = (short)(iVar5 + -0xe0);
    if ((iVar5 + -0xe0) * 0x10000 < 1) {
      sVar4 = 0;
    }
    if (-1 < iVar6) {
      *(short *)(param_1 + 0x44) = sVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(param_1 + 0x44) = -sVar4;
    func_0x00056b48(param_1,1);
    func_0x00055d5c(param_1);
    uVar3 = *(short *)(param_1 + 0x4a) + 0x400;
    *(ushort *)(param_1 + 0x4a) = uVar3;
    if (0 < (int)((uint)uVar3 << 0x10)) {
      *(undefined1 *)(param_1 + 0x145) = 2;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    func_0x000551c4();
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 7) == '\0') {
        func_0x00074590(0x23,0,0);
        func_0x000312d4(6,param_1 + 0x2c,0xffffffb0);
      }
      DAT_800bf809 = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined1 *)(param_1 + 0x61) = 0;
      *(undefined1 *)(param_1 + 0x146) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      func_0x00053d90(param_1);
      cVar2 = *(char *)(param_1 + 0x147) + '\x02';
      *(char *)(param_1 + 0x14a) = cVar2;
      *(char *)(param_1 + 0x149) = cVar2;
      func_0x00054d14(param_1,2,4);
      iVar5 = func_0x0007a980(2,3,1);
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 0x1c) = 0x80114608;
        *(undefined1 *)(iVar5 + 2) = 0;
        *(byte *)(iVar5 + 0x28) = *(byte *)(iVar5 + 0x28) | 0x80;
      }
      func_0x000551c4(param_1);
      if (*(char *)(param_1 + 0x145) == '\x01') {
        *(undefined1 *)(param_1 + 6) = 1;
      }
      else {
        if (*(char *)(param_1 + 0x145) != '\x02') {
          *(undefined1 *)(param_1 + 0x145) = 0;
          *(undefined1 *)(param_1 + 4) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 6) = 2;
      }
    }
  }
  else if (bVar1 == 2) {
    iVar6 = (int)*(short *)(param_1 + 0x44);
    iVar5 = iVar6;
    if (iVar6 < 0) {
      iVar5 = -iVar6;
    }
    sVar4 = (short)(iVar5 + -0xe0);
    if ((iVar5 + -0xe0) * 0x10000 < 1) {
      sVar4 = 0;
    }
    if (iVar6 < 0) {
      *(short *)(param_1 + 0x44) = -sVar4;
      func_0x00056b48(param_1,1);
      func_0x00055d5c(param_1);
      sVar4 = *(short *)(param_1 + 0x4a) + 0x400;
      *(short *)(param_1 + 0x4a) = sVar4;
      if (0x3e00 < sVar4) {
        *(undefined2 *)(param_1 + 0x4a) = 0x3e00;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
      func_0x0005444c(param_1);
      if (*(char *)(param_1 + 0x29) != '\0') {
        func_0x0005314c(param_1);
        func_0x000551c4(param_1);
        *(undefined1 *)(param_1 + 4) = 1;
        *(undefined1 *)(param_1 + 0x148) = 0;
        *(undefined2 *)(param_1 + 0x50) = 0;
        *(undefined1 *)(param_1 + 0x145) = 0;
        *(undefined1 *)(param_1 + 5) = 0x1a;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
      }
      return;
    }
    *(short *)(param_1 + 0x44) = sVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

