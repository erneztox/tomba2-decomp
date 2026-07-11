// FUN_08036220

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08036220(int *param_1,short *param_2,short param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  
  iVar2 = _DAT_8013f72c;
  uVar12 = 0;
  if (DAT_800bf816 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = *param_1 + *param_2 * 0x10000;
  _DAT_1f8001ca = (short)((uint)iVar3 >> 0x10);
  iVar9 = (int)_DAT_1f8001ca;
  _DAT_1f8001cc = param_1[1] + param_2[1] * 0x10000;
  iVar7 = param_1[2] + param_2[2] * 0x10000;
  _DAT_1f8001d2 = (short)((uint)iVar7 >> 0x10);
  iVar4 = (int)_DAT_1f8001d2;
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0x1ff;
  }
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x1ff;
  }
  uVar5 = (uint)*(ushort *)(((iVar4 >> 9) * 0x40 + (iVar9 >> 9)) * 2 + _DAT_8013f728);
  iVar4 = 0;
  _DAT_1f8001c8 = iVar3;
  _DAT_1f8001d0 = iVar7;
  if (uVar5 == 0xffff) {
    _DAT_1f8001a4 = 0;
  }
  else {
    puVar8 = (ushort *)(uVar5 * 2 + _DAT_8013f724);
    iVar3 = 0;
    if (*puVar8 != 0xffff) {
      do {
        iVar7 = iVar2 + (uint)*puVar8 * 0x30;
        if ((*(uint *)(iVar7 + 4) & 0x8800) == 0) {
          iVar11 = 0;
          bVar1 = false;
          iVar9 = iVar7;
          piVar10 = (int *)&DAT_8013ff58;
          do {
            iVar6 = ((int)_DAT_1f8001ca - (int)*(short *)(iVar9 + 0x10)) *
                    (int)*(short *)(iVar9 + 0x20) +
                    ((int)_DAT_1f8001d2 - (int)*(short *)(iVar9 + 0x12)) *
                    (int)*(short *)(iVar9 + 0x22);
            *piVar10 = iVar6;
            if (0 < iVar6) goto LAB_080363bc;
            piVar10 = piVar10 + 1;
            iVar11 = iVar11 + 1;
            iVar9 = iVar9 + 4;
          } while (iVar11 < 4);
          bVar1 = true;
LAB_080363bc:
          if (bVar1) {
            iVar9 = -(int)*(short *)(iVar7 + 10);
            iVar11 = (int)*(short *)(iVar7 + 8) * (int)_DAT_1f8001ca +
                     (int)*(short *)(iVar7 + 0xc) * (int)_DAT_1f8001d2 +
                     *(short *)(iVar7 + 0xe) * 0x1000;
            iVar6 = iVar11 / iVar9;
            if (iVar9 == 0) {
              trap(0x1c00);
            }
            if ((iVar9 == -1) && (iVar11 == -0x80000000)) {
              trap(0x1800);
            }
            if ((((iVar6 <= iVar4) && (iVar6 <= _DAT_1f8001ce)) && (_DAT_1f8001ce + -0x100 < iVar6))
               && ((uVar12 & 0x2000) == 0)) {
              uVar12 = *(uint *)(iVar7 + 4);
              iVar3 = iVar7;
              iVar4 = iVar6;
            }
          }
        }
        puVar8 = puVar8 + 1;
      } while (*puVar8 != 0xffff);
    }
    if (iVar3 == 0) {
      _DAT_1f8001a4 = 0;
      return 0;
    }
    if (param_3 != 0) {
      _DAT_1f8001a6 = *(undefined2 *)(iVar3 + 4);
    }
    _DAT_1f8001a4 = (short)iVar4;
    *(short *)((int)param_1 + 6) = _DAT_1f8001a4 - param_2[1];
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

