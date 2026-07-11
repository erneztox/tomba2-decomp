// FUN_080186d4

/* WARNING: Control flow encountered bad instruction data */

void FUN_080186d4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  bVar1 = *(byte *)(param_1 + 4);
  pcVar6 = (char *)(param_1 + 0x34);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    iVar5 = 0;
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x2c) = 0x12e0;
    *(undefined2 *)(param_1 + 0x2e) = 0xfb5b;
    *(undefined2 *)(param_1 + 0x30) = 0x11a0;
    pcVar4 = pcVar6;
    do {
      iVar5 = iVar5 + 1;
      bVar1 = func_0x0009a450();
      *pcVar4 = (bVar1 & 0x7f) + 0x20;
      cVar2 = func_0x0009a450();
      pcVar4[1] = cVar2;
      pcVar4[2] = '\0';
      pcVar4[3] = -1;
      pcVar4 = pcVar4 + 4;
    } while (iVar5 < 0x15);
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 7) = 0x32;
  }
  cVar2 = *(char *)(param_1 + 7) + -1;
  *(char *)(param_1 + 7) = cVar2;
  iVar5 = 0;
  if (cVar2 == -1) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    do {
      iVar5 = iVar5 + 1;
      pcVar6[2] = pcVar6[2] + '\x02';
      iVar3 = func_0x0009a450();
      pcVar6[3] = pcVar6[3] - (((byte)(iVar3 >> 10) & 3) + 2);
      pcVar6 = pcVar6 + 4;
    } while (iVar5 < 0x15);
    *(undefined1 *)(param_1 + 1) = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

