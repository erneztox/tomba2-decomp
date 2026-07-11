// FUN_08017afc

/* WARNING: Control flow encountered bad instruction data */

void FUN_08017afc(int param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  bVar2 = *(byte *)(param_1 + 4);
  pcVar5 = (char *)(param_1 + 0x34);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    iVar4 = 0;
    pcVar3 = pcVar5;
    if (bVar2 != 0) {
      halt_baddata();
    }
    do {
      iVar4 = iVar4 + 1;
      bVar2 = func_0x0009a450();
      *pcVar3 = (bVar2 & 0x3f) + 0x40;
      bVar2 = func_0x0009a450();
      pcVar3[1] = (bVar2 & 0x3f) + 0x40;
      bVar2 = func_0x0009a450();
      pcVar3[2] = bVar2 & 0x7f;
      bVar2 = func_0x0009a450();
      pcVar3[3] = (bVar2 & 0x7f) + 0x40;
      pcVar3 = pcVar3 + 4;
    } while (iVar4 < 0x15);
    *(undefined1 *)(param_1 + 4) = 1;
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + 0x32;
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) - (*(short *)(param_1 + 0x32) >> 2);
  }
  iVar4 = 0;
  do {
    cVar1 = pcVar5[2];
    pcVar5[2] = cVar1 + 6U;
    if ((int)((uint)(byte)(cVar1 + 6U) << 0x18) < 0) {
      bVar2 = func_0x0009a450();
      *pcVar5 = (bVar2 & 0x3f) + 0x40;
      bVar2 = func_0x0009a450();
      pcVar5[1] = (bVar2 & 0x3f) + 0x40;
      bVar2 = func_0x0009a450();
      pcVar5[2] = bVar2 & 0x3f;
      bVar2 = func_0x0009a450();
      pcVar5[3] = (bVar2 & 0x7f) + 0x40;
    }
    iVar4 = iVar4 + 1;
    pcVar5 = pcVar5 + 4;
  } while (iVar4 < 0x15);
  func_0x0002b278(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

