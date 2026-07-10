// FUN_80094150

byte FUN_80094150(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  ushort uVar11;
  uint uVar12;
  
  uVar3 = DAT_800ac3f4;
  uVar11 = 0xffff;
  cVar9 = '\0';
  uVar7 = 0;
  bVar8 = 99;
  uVar12 = (uint)DAT_80105d07;
  bVar10 = 99;
  if (0 < (char)DAT_80105cec) {
    uVar4 = 0;
    bVar6 = 0;
    do {
      bVar10 = bVar6;
      if ((DAT_800ac3f4 & 1 << (uVar4 & 0x1f)) == 0) {
        if (((&DAT_801054e5)[uVar4 * 0x38] == '\0') && (*(short *)(uVar4 * 0x38 + -0x7fefab32) == 0)
           ) break;
        iVar5 = (uint)bVar10 * 0x38;
        if ((int)*(short *)(iVar5 + -0x7fefab1e) < (int)(uVar12 & 0xffff)) {
          uVar11 = *(ushort *)(iVar5 + -0x7fefab32);
          uVar7 = (uint)*(ushort *)(iVar5 + -0x7fefab36);
          cVar9 = '\x01';
          uVar12 = (uint)*(ushort *)(iVar5 + -0x7fefab1e);
          bVar8 = bVar10;
        }
        else if ((int)*(short *)(iVar5 + -0x7fefab1e) == (uVar12 & 0xffff)) {
          uVar1 = *(ushort *)(iVar5 + -0x7fefab32);
          cVar9 = cVar9 + '\x01';
          if (uVar1 < uVar11) {
            uVar2 = *(ushort *)(iVar5 + -0x7fefab36);
            uVar11 = uVar1;
          }
          else if ((uVar1 != uVar11) ||
                  (uVar2 = *(ushort *)(iVar5 + -0x7fefab36),
                  (int)*(short *)(iVar5 + -0x7fefab36) <= (int)uVar7)) goto LAB_800942b4;
          uVar7 = (uint)uVar2;
          bVar8 = bVar10;
        }
      }
LAB_800942b4:
      bVar6 = bVar10 + 1;
      uVar4 = (uint)bVar6;
      bVar10 = 99;
    } while ((int)(uint)bVar6 < (int)(char)DAT_80105cec);
  }
  if ((bVar10 == 99) && (bVar10 = bVar8, cVar9 == '\0')) {
    bVar10 = DAT_80105cec;
  }
  iVar5 = (int)(char)DAT_80105cec;
  if ((int)(uint)bVar10 < iVar5) {
    uVar12 = 0;
    if (0 < iVar5) {
      uVar7 = 0;
      do {
        if ((uVar3 & 1 << (uVar7 & 0x1f)) == 0) {
          *(short *)(uVar7 * 0x38 + -0x7fefab36) = *(short *)(uVar7 * 0x38 + -0x7fefab36) + 1;
        }
        uVar12 = uVar12 + 1;
        uVar7 = uVar12 & 0xff;
      } while ((int)(uVar12 & 0xff) < iVar5);
    }
    iVar5 = (uint)bVar10 * 0x38;
    *(undefined2 *)(iVar5 + -0x7fefab36) = 0;
    cVar9 = DAT_80105d07;
    *(undefined2 *)(iVar5 + -0x7fefab0e) = 0;
    *(undefined2 *)(iVar5 + -0x7fefab1a) = 0;
    *(short *)(iVar5 + -0x7fefab1e) = (short)cVar9;
  }
  return bVar10;
}

