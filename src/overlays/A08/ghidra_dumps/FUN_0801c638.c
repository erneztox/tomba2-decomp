// FUN_0801c638

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801c638(int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  
  bVar2 = DAT_800e7eaa;
  bVar1 = *(byte *)(param_1 + 4);
  iVar14 = 0x7ffc;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x000752b4(6);
    uVar11 = 0;
    do {
      uVar12 = uVar11 + 1;
      *(undefined1 *)((short)uVar11 * 0x18 + -0x7febd01e) = 0;
      *(undefined1 *)((short)uVar11 * 0x18 + -0x7febd01d) = 0;
      uVar11 = uVar12;
    } while (uVar12 < 5);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  uVar13 = 0;
  iVar4 = 0;
  do {
    iVar7 = (iVar4 >> 0x10) * 0x18;
    uVar8 = 0;
    sVar3 = (short)uVar13;
    if (bVar2 < *(byte *)(iVar7 + -0x7febd018)) {
LAB_0801c88c:
      uVar8 = 0;
    }
    else if (((bVar2 <= *(byte *)(iVar7 + -0x7febd017)) && (DAT_800bf816 == '\0')) &&
            (DAT_800bf873 == '\0')) {
      iVar10 = (uint)*(ushort *)(iVar7 + -0x7febd02c) - (uint)_DAT_1f800160;
      iVar9 = (uint)*(ushort *)(iVar7 + -0x7febd028) - (uint)_DAT_1f800164;
      if (iVar4 >> 0x10 != 3) {
        func_0x00078240(iVar10 * 0x10000 >> 0x10,
                        (int)(((uint)*(ushort *)(iVar7 + -0x7febd02a) - (uint)_DAT_1f800162) *
                             0x10000) >> 0x10,iVar9 * 0x10000 >> 0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar5 = func_0x000781e0(iVar10 * 0x10000 >> 0x10,iVar9 * 0x10000 >> 0x10);
      uVar8 = 0;
      if (uVar5 < (uint)(int)sRam80143022) {
        iVar4 = (int)sRam80143026 - (uVar5 >> ((int)sRam80143024 & 0x1fU));
        if (-1 < iVar4) {
          if (0x7f < iVar4) {
            iVar4 = 0x7f;
          }
          uVar6 = func_0x00085690((int)(short)iVar9,(int)(short)iVar10);
          uVar8 = func_0x00074a60(iVar4,uVar6);
        }
        iVar14 = iVar14 - (sRam80143028 * iVar4 >> 7);
      }
      if ((sVar3 == 4) && (_DAT_800bf850 == 0)) goto LAB_0801c88c;
    }
    if (DAT_1f800137 == '\x01') {
      uVar8 = uVar8 >> 1 & 0x3fff3fff;
    }
    if (*(char *)(iVar7 + -0x7febd01e) == '\0') {
      *(undefined1 *)(iVar7 + -0x7febd01e) = 1;
      if (*(int *)(iVar7 + -0x7febd01c) != 0) {
        func_0x00074af0();
      }
      if ((uint)(int)sVar3 < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801c904 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(sVar3 * 4 + -0x7fef67f4))();
        return;
      }
    }
    else {
      if (*(char *)(iVar7 + -0x7febd01e) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar4 = func_0x0007496c(*(undefined4 *)(iVar7 + -0x7febd01c),uVar8 >> 0x10,uVar8 & 0xffff);
      if (iVar4 == 0) {
        *(undefined1 *)(iVar7 + -0x7febd01e) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00074a38(*(undefined4 *)(iVar7 + -0x7febd01c));
    }
    uVar13 = uVar13 + 1;
    iVar4 = uVar13 * 0x10000;
    if (4 < (uVar13 & 0xffff)) {
      iVar14 = iVar14 >> 2;
      if (iVar14 < 0) {
        iVar14 = 0;
      }
      func_0x00075d24(iVar14);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}

