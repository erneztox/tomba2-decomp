// FUN_0804011c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0804011c(int param_1)

{
  short sVar1;
  short sVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  short *psVar7;
  undefined1 *puVar8;
  char *pcVar9;
  int iVar10;
  
  bVar4 = *(byte *)(param_1 + 4);
  puVar8 = (undefined1 *)(param_1 + 0x2c);
  if (bVar4 != 1) {
    if (1 < bVar4) {
      if (bVar4 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    iVar10 = 0;
    if (bVar4 != 0) {
      halt_baddata();
    }
    psVar7 = (short *)(param_1 + 0x32);
    *(undefined1 *)(param_1 + 7) = 0xff;
    sVar2 = _DAT_1f8000d6;
    sVar1 = _DAT_1f8000da + (short)((uint)(_DAT_1f800108 * 0x4b) >> 8);
    do {
      iVar10 = iVar10 + 1;
      uVar3 = func_0x0009a450();
      *puVar8 = uVar3;
      bVar4 = func_0x0009a450();
      *(byte *)((int)psVar7 + -5) = (bVar4 & 7) + 6;
      bVar4 = func_0x0009a450();
      *(byte *)(psVar7 + -2) = (bVar4 & 3) + 6;
      *(undefined1 *)((int)psVar7 + -3) = 3;
      uVar6 = func_0x0009a450();
      psVar7[-1] = sVar1 + (uVar6 & 0x3ff) + -0x200;
      *psVar7 = sVar2 + -500;
      psVar7 = psVar7 + 4;
      puVar8 = puVar8 + 8;
    } while (iVar10 < 0xb);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  pcVar9 = (char *)(param_1 + 0x2c);
  cVar5 = *(char *)(param_1 + 7) + -1;
  *(char *)(param_1 + 7) = cVar5;
  iVar10 = 0;
  if (cVar5 == '\0') {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    psVar7 = (short *)(param_1 + 0x32);
    do {
      iVar10 = iVar10 + 1;
      *pcVar9 = *pcVar9 + *(char *)((int)psVar7 + -5);
      pcVar9 = pcVar9 + 8;
      *psVar7 = *psVar7 + (ushort)*(byte *)((int)psVar7 + -5);
      psVar7 = psVar7 + 4;
    } while (iVar10 < 0xb);
    *(undefined1 *)(param_1 + 1) = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

