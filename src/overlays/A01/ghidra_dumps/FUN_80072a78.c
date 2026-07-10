// FUN_80072a78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80072a78(void)

{
  bool bVar1;
  byte bVar2;
  undefined2 uVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  
  if ((DAT_800bf870 == 5) && (DAT_800bf871 - 1 < 3)) {
    pbVar4 = &DAT_8013c1a4;
  }
  else if ((DAT_800bf870 == 1) && (0xe < DAT_800bf871)) {
    pbVar4 = &DAT_80134918;
  }
  else if (DAT_800bf870 == 6) {
    if (DAT_800bf871 < 6) {
      pbVar4 = &DAT_801437ac;
    }
    else if (DAT_800bf871 < 9) {
      pbVar4 = &DAT_80143acc;
    }
    else {
      pbVar4 = &DAT_80143ae0;
    }
  }
  else if (DAT_800bf870 == 8) {
    if (DAT_800bf871 < 9) {
      pbVar4 = &DAT_8014304c;
    }
    else if (DAT_800bf871 < 0x10) {
      pbVar4 = &DAT_801432b8;
    }
    else if (DAT_800bf871 < 0x15) {
      pbVar4 = &DAT_80143470;
    }
    else {
      pbVar4 = &DAT_80143614;
    }
  }
  else if (DAT_800bf870 == 0x15) {
    if (DAT_800bf871 == 0) {
      pbVar4 = &DAT_80115004;
    }
    else if (DAT_800bf871 == 1) {
      pbVar4 = &DAT_80115018;
    }
    else if (DAT_800bf871 == 2) {
      pbVar4 = &DAT_801150f4;
    }
    else if (DAT_800bf871 == 3) {
      pbVar4 = &DAT_80115180;
    }
    else if (DAT_800bf871 == 4) {
      pbVar4 = &DAT_801151f8;
    }
    else {
      pbVar4 = &DAT_80115310;
    }
  }
  else {
    if (_DAT_800bf870 == 0x704) {
      return;
    }
    pbVar4 = *(byte **)(&DAT_800a4c28 + (uint)DAT_800bf870 * 4);
    if (pbVar4 == (byte *)0x0) {
      return;
    }
  }
  if (*pbVar4 != 0xff) {
    pbVar7 = pbVar4 + 0xc;
    do {
      if (((*(short *)(pbVar7 + 2) != 1) ||
          (((int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f) & 1U) == 0)) &&
         ((*(short *)(pbVar7 + 2) != 2 || (DAT_800bf873 == '\0')))) {
        bVar6 = pbVar7[-0xb];
        bVar1 = bVar6 != 3;
        if (bVar1) {
          bVar2 = *pbVar4;
        }
        else {
          bVar6 = 3;
          bVar2 = *pbVar4;
        }
        iVar5 = FUN_8007a980(bVar2 & 0x7f,bVar6,!bVar1);
        if (iVar5 != 0) {
          *(byte *)(iVar5 + 0x28) = *pbVar4;
          *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(pbVar7 + 4);
          *(byte *)(iVar5 + 2) = pbVar7[-4];
          *(byte *)(iVar5 + 3) = pbVar7[-3];
          *(undefined2 *)(iVar5 + 0x2e) = *(undefined2 *)(pbVar7 + -10);
          *(undefined2 *)(iVar5 + 0x32) = *(undefined2 *)(pbVar7 + -8);
          uVar3 = *(undefined2 *)(pbVar7 + -6);
          *(undefined2 *)(iVar5 + 0x54) = 0;
          *(undefined2 *)(iVar5 + 0x36) = uVar3;
          *(ushort *)(iVar5 + 0x56) =
               (short)((ulonglong)((longlong)(*(short *)(pbVar7 + -2) * 0x1000) * 0xb60b60b7) >>
                      0x28) - (*(short *)(pbVar7 + -2) >> 0xf) & 0xfff;
          *(ushort *)(iVar5 + 0x58) =
               (short)((ulonglong)((longlong)(*(short *)pbVar7 * 0x1000) * 0xb60b60b7) >> 0x28) -
               (*(short *)pbVar7 >> 0xf) & 0xfff;
        }
      }
      pbVar4 = pbVar4 + 0x14;
      pbVar7 = pbVar7 + 0x14;
    } while (*pbVar4 != 0xff);
  }
  return;
}

