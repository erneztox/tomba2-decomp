// FUN_000329e0

/* WARNING: Control flow encountered bad instruction data */

void FUN_000329e0(void)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  int in_v0;
  int in_v1;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  int unaff_s2;
  int iVar8;
  
  psVar7 = (short *)(unaff_s2 + 0x50);
  if (in_v1 != in_v0) {
    if (1 < in_v1) {
      if (in_v1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    iVar8 = 0;
    if (in_v1 != 0) {
      halt_baddata();
    }
    psVar6 = (short *)(unaff_s2 + 0x56);
    sVar4 = *(short *)(unaff_s2 + 0x2c);
    sVar1 = *(short *)(unaff_s2 + 0x2e);
    sVar2 = *(short *)(unaff_s2 + 0x30);
    *(undefined2 *)(unaff_s2 + 0x4e) = 3;
    do {
      uVar3 = func_0x0009a450();
      *psVar7 = sVar4 + (uVar3 & 0x3f) + -0x20;
      uVar3 = func_0x0009a450();
      psVar6[-2] = sVar1 + (uVar3 & 0x3f) + -0x20;
      uVar3 = func_0x0009a450();
      psVar6[-1] = sVar2 + (uVar3 & 0x3f) + -0x20;
      uVar3 = func_0x0009a450();
      iVar8 = iVar8 + 1;
      *psVar6 = (uVar3 & 0xff) + 0x80;
      psVar6 = psVar6 + 4;
      psVar7 = psVar7 + 4;
    } while (iVar8 * 0x10000 >> 0x10 < 3);
    *(undefined4 *)(unaff_s2 + 4) = 1;
  }
  psVar7 = (short *)(unaff_s2 + 0x50);
  iVar8 = func_0x0009a450();
  *(char *)(unaff_s2 + 7) = *(char *)(unaff_s2 + 7) + (char)(iVar8 >> 10);
  sVar4 = thunk_EXT_FUN_00134338();
  if (-1 < *(char *)(unaff_s2 + 7)) {
    *(int *)(unaff_s2 + 0x34) = *(int *)(unaff_s2 + 0x38);
    if (*(int *)(unaff_s2 + 0x38) == 0) {
      *(undefined1 *)(unaff_s2 + 4) = 2;
    }
    else {
      if (sVar4 == 0) {
        FUN_00031780();
      }
      iVar8 = 0;
      psVar6 = (short *)(unaff_s2 + 0x54);
      sVar4 = *(short *)(unaff_s2 + 0x2c);
      sVar1 = *(short *)(unaff_s2 + 0x2e);
      uVar5 = (uint)(*(byte *)(unaff_s2 + 7) >> 1);
      sVar2 = *(short *)(unaff_s2 + 0x30);
      *(byte *)(unaff_s2 + 7) = *(byte *)(unaff_s2 + 7) + 1;
      do {
        iVar8 = iVar8 + 1;
        *psVar7 = *psVar7 + (short)((int)*psVar7 - (int)sVar4 >> (uVar5 & 0x1f));
        psVar7 = psVar7 + 4;
        psVar6[-1] = psVar6[-1] + (short)((int)psVar6[-1] - (int)sVar1 >> (uVar5 & 0x1f)) + -3;
        *psVar6 = *psVar6 + (short)((int)*psVar6 - (int)sVar2 >> (uVar5 & 0x1f));
        psVar6 = psVar6 + 4;
      } while (iVar8 * 0x10000 >> 0x10 < 3);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_s2 + 7) = *(char *)(unaff_s2 + 7) + -0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

