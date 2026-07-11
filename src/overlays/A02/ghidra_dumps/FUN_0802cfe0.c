// FUN_0802cfe0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802d270) */
/* WARNING: Removing unreachable block (ram,0x0802d278) */
/* WARNING: Removing unreachable block (ram,0x0802d294) */
/* WARNING: Removing unreachable block (ram,0x0802d288) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0802cfe0(int *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  iVar1 = _DAT_801385cc;
  if ((DAT_800bf816 == '\0') || (DAT_800bf817 == '\a')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = *param_1 + *param_2 * 0x10000;
  _DAT_1f8001ca = (short)((uint)iVar2 >> 0x10);
  iVar8 = (int)_DAT_1f8001ca;
  _DAT_1f8001cc = param_1[1] + param_2[1] * 0x10000;
  iVar6 = param_1[2] + param_2[2] * 0x10000;
  _DAT_1f8001d2 = (short)((uint)iVar6 >> 0x10);
  iVar3 = (int)_DAT_1f8001d2;
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0x1ff;
  }
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x1ff;
  }
  uVar4 = (uint)*(ushort *)(((iVar3 >> 9) * 0x40 + (iVar8 >> 9)) * 2 + _DAT_801385c8);
  iVar3 = 0;
  _DAT_1f8001c8 = iVar2;
  _DAT_1f8001d0 = iVar6;
  if (uVar4 != 0xffff) {
    iVar2 = 0;
    puVar7 = (ushort *)(uVar4 * 2 + _DAT_801385c4);
    if (*puVar7 != 0xffff) {
      uVar4 = (uint)*puVar7;
      do {
        iVar8 = 0;
        iVar10 = iVar1 + uVar4 * 0x30;
        iVar6 = iVar10;
        piVar9 = (int *)&DAT_801390f0;
        do {
          iVar5 = ((int)_DAT_1f8001ca - (int)*(short *)(iVar6 + 0x10)) *
                  (int)*(short *)(iVar6 + 0x20) +
                  ((int)_DAT_1f8001d2 - (int)*(short *)(iVar6 + 0x12)) *
                  (int)*(short *)(iVar6 + 0x22);
          *piVar9 = iVar5;
          if (0 < iVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          piVar9 = piVar9 + 1;
          iVar8 = iVar8 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar8 < 4);
        iVar6 = -(int)*(short *)(iVar10 + 10);
        iVar8 = (int)*(short *)(iVar10 + 8) * (int)_DAT_1f8001ca +
                (int)*(short *)(iVar10 + 0xc) * (int)_DAT_1f8001d2 +
                *(short *)(iVar10 + 0xe) * 0x1000;
        iVar5 = iVar8 / iVar6;
        if (iVar6 == 0) {
          trap(0x1c00);
        }
        if ((iVar6 == -1) && (iVar8 == -0x80000000)) {
          trap(0x1800);
        }
        _DAT_1f800242 = *(undefined2 *)(iVar10 + 4);
        _DAT_1f800240 = (undefined2)iVar5;
        if ((*(uint *)(iVar10 + 4) & 0x8000) == 0) {
          if (iVar5 <= iVar3) {
            iVar3 = iVar5;
            iVar2 = iVar10;
          }
        }
        else if (iVar5 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar7 = puVar7 + 1;
        uVar4 = (uint)*puVar7;
      } while (uVar4 != 0xffff);
    }
    if (iVar2 != 0) {
      return 0;
    }
  }
  _DAT_1f8001a4 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

