// FUN_08035e6c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08035e6c(int *param_1,short *param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_50 [4];
  int local_40;
  int local_3c;
  int local_38;
  short *local_34;
  int *local_30;
  
  iVar3 = _DAT_8013f72c;
  iVar15 = 0;
  uVar11 = 0;
  iVar12 = 0;
  if (DAT_800bf816 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar14 = 1;
  local_40 = _DAT_8013f724;
  local_3c = _DAT_8013f728;
  _DAT_1f8001c8 = *param_1 + *param_2 * 0x10000;
  _DAT_1f8001cc = param_1[1] + param_2[1] * 0x10000;
  _DAT_1f8001d0 = param_1[2] + param_2[2] * 0x10000;
  local_38 = -0x7fec0000;
  local_34 = param_2;
  local_30 = param_1;
  do {
    iVar13 = 0;
    iVar7 = (int)_DAT_1f8001ca;
    iVar4 = (int)_DAT_1f8001d2;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0x1ff;
    }
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x1ff;
    }
    uVar5 = (uint)*(ushort *)(((iVar4 >> 9) * 0x40 + (iVar7 >> 9)) * 2 + local_3c);
    if (uVar5 == 0xffff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar8 = (ushort *)(uVar5 * 2 + local_40);
    uVar2 = *puVar8;
    while (uVar2 != 0xffff) {
      iVar4 = iVar3 + (uint)uVar2 * 0x30;
      if (((*(uint *)(iVar4 + 4) & 0x8000) != 0) &&
         (((*(uint *)(iVar4 + 4) & 0x100) == 0 || (param_3 != 0)))) {
        iVar7 = 0;
        piVar9 = local_50;
        if (0 < iVar12) {
          do {
            if (iVar4 == *piVar9) break;
            iVar7 = iVar7 + 1;
            piVar9 = piVar9 + 1;
          } while (iVar7 < iVar12);
        }
        if (iVar7 == iVar12) {
          iVar10 = 0;
          bVar1 = false;
          iVar7 = iVar4;
          piVar9 = (int *)&DAT_8013ff58;
          do {
            iVar6 = ((int)_DAT_1f8001ca - (int)*(short *)(iVar7 + 0x10)) *
                    (int)*(short *)(iVar7 + 0x20) +
                    ((int)_DAT_1f8001d2 - (int)*(short *)(iVar7 + 0x12)) *
                    (int)*(short *)(iVar7 + 0x22);
            *piVar9 = iVar6;
            if (0 < iVar6) goto LAB_08036090;
            piVar9 = piVar9 + 1;
            iVar10 = iVar10 + 1;
            iVar7 = iVar7 + 4;
          } while (iVar10 < 4);
          bVar1 = true;
LAB_08036090:
          if (bVar1) {
            iVar7 = -(int)*(short *)(iVar4 + 10);
            iVar10 = (int)*(short *)(iVar4 + 8) * (int)_DAT_1f8001ca +
                     (int)*(short *)(iVar4 + 0xc) * (int)_DAT_1f8001d2 +
                     *(short *)(iVar4 + 0xe) * 0x1000;
            iVar6 = iVar10 / iVar7;
            if (iVar7 == 0) {
              trap(0x1c00);
            }
            if ((iVar7 == -1) && (iVar10 == -0x80000000)) {
              trap(0x1800);
            }
            if (((iVar6 <= iVar15) && (_DAT_1f8001ce <= iVar6)) && (iVar6 <= _DAT_1f8001ce + 0x80))
            {
              _DAT_8013ff48 = *(undefined4 *)(local_38 + -0xa8);
              _DAT_8013ff4c = _DAT_8013ff5c;
              _DAT_8013ff50 = _DAT_8013ff60;
              _DAT_8013ff54 = _DAT_8013ff64;
              iVar13 = iVar4;
              iVar15 = iVar6;
            }
          }
        }
      }
      puVar8 = puVar8 + 1;
      uVar2 = *puVar8;
    }
    if (iVar13 == 0) break;
    func_0x0012eb7c(iVar13,&DAT_1f8001c8);
    uVar11 = 1;
    piVar9 = local_50 + iVar12;
    iVar12 = iVar12 + 1;
    *piVar9 = iVar13;
    bVar1 = 0 < iVar14;
    iVar14 = iVar14 + -1;
  } while (bVar1);
  *local_30 = _DAT_1f8001c8 + *local_34 * -0x10000;
  local_30[2] = _DAT_1f8001d0 + local_34[2] * -0x10000;
  return uVar11;
}

