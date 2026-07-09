// FUN_801075e8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80119968) */
/* WARNING: Removing unreachable block (ram,0x8010791c) */
/* WARNING: Removing unreachable block (ram,0x8010792c) */
/* WARNING: Removing unreachable block (ram,0x80107954) */
/* WARNING: Removing unreachable block (ram,0x80107980) */
/* WARNING: Removing unreachable block (ram,0x801079a4) */
/* WARNING: Removing unreachable block (ram,0x80107988) */
/* WARNING: Removing unreachable block (ram,0x8010799c) */
/* WARNING: Removing unreachable block (ram,0x801079b8) */
/* WARNING: Removing unreachable block (ram,0x801079e4) */
/* WARNING: Removing unreachable block (ram,0x801079d8) */
/* WARNING: Removing unreachable block (ram,0x8011999c) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x800bf9e3 : 0x80110978 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Exceeded maximum restarts with more pending */

undefined1 * FUN_801075e8(int param_1,int param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  short sVar15;
  int iVar16;
  byte bVar17;
  int iVar18;
  short sVar19;
  undefined4 uVar20;
  short sVar5;
  
  if (600 < (ushort)((*(short *)(param_1 + 0x14c) - *(short *)(param_3 + 0x2c)) + 600U)) {
LAB_80107978:
    puVar8 = (undefined1 *)FUN_80110c78();
    return puVar8;
  }
  iVar7 = (uint)*(ushort *)(param_1 + 0x150) - (uint)*(ushort *)(param_3 + 0x34);
  puVar8 = (undefined1 *)0x0;
  if ((int)((uint)*(ushort *)(param_2 + 0x80) + iVar7 & 0xffff) <= (int)*(short *)(param_2 + 0x82))
  {
    iVar9 = (uint)*(ushort *)(param_1 + 0x14e) - (uint)*(ushort *)(param_3 + 0x30);
    puVar8 = (undefined1 *)0x0;
    if ((int)((uint)*(ushort *)(param_2 + 0x80) + iVar9 & 0xffff) <= (int)*(short *)(param_2 + 0x82)
       ) {
      iVar10 = func_0x80083f50((int)*(short *)(param_3 + 0xc));
      uVar20 = 0x801076b4;
      iVar18 = iVar10 * *(short *)(param_2 + 0x80) >> 0xc;
      iVar10 = func_0x80083e80((int)*(short *)(param_3 + 0xc));
      iVar12 = -(iVar10 * *(short *)(param_2 + 0x80)) >> 0xc;
      iVar10 = iVar18;
      if (iVar18 << 0x10 < 0) {
        iVar10 = -iVar18;
      }
      iVar16 = iVar12;
      if (iVar12 << 0x10 < 0) {
        iVar16 = -iVar12;
      }
      iVar13 = (int)(short)iVar10;
      sVar3 = (short)iVar16;
      bVar17 = iVar13 < sVar3;
      if (iVar13 == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(*(undefined1 *)(iVar7 + 7)) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        default:
          return (undefined1 *)0x0;
        }
      }
      if (sVar3 == 0) {
        bVar17 = 2;
      }
      sVar19 = (short)iVar9;
      sVar4 = (short)iVar12;
      sVar5 = (short)iVar18;
      if (bVar17 == 1) {
        if (iVar9 * 0x10000 < 0) {
          puVar8 = (undefined1 *)FUN_801107bc();
          return puVar8;
        }
        puVar8 = (undefined1 *)0x0;
        if (iVar9 * 0x10000 <= iVar16 << 0x10) {
          if (sVar4 == 0) {
            trap(0x1c00);
          }
          if ((sVar4 == 1) && ((int)sVar19 * (int)sVar5 == -0x80000000)) {
            trap(0x1800);
          }
          puVar8 = (undefined1 *)FUN_801108b0();
          return puVar8;
        }
      }
      else if (bVar17 < 2) {
        if (bVar17 != 0) {
          puVar8 = (undefined1 *)FUN_801108b0();
          return puVar8;
        }
        if (iVar7 * 0x10000 < 0) {
          puVar8 = (undefined1 *)FUN_8011072c();
          return puVar8;
        }
        puVar8 = (undefined1 *)0x0;
        if (iVar7 * 0x10000 <= iVar10 << 0x10) {
          if (sVar5 == 0) {
            trap(0x1c00);
          }
          if ((sVar5 == -1) && ((int)(short)iVar7 * (int)sVar4 == -0x80000000)) {
            trap(0x1800);
          }
          puVar8 = (undefined1 *)FUN_801108b0();
          return puVar8;
        }
      }
      else if (bVar17 == 2) {
        if (iVar7 * 0x10000 < 0) {
          puVar8 = (undefined1 *)FUN_80110850();
          return puVar8;
        }
        puVar8 = (undefined1 *)0x0;
        if (iVar7 * 0x10000 <= iVar10 << 0x10) {
          puVar8 = (undefined1 *)FUN_801108b0();
          return puVar8;
        }
      }
      else {
        if (bVar17 != 3) {
          puVar8 = (undefined1 *)FUN_801108b0();
          return puVar8;
        }
        if (iVar9 * 0x10000 < 0) {
          cVar1 = *(char *)(iVar13 + 6);
          if (cVar1 == '\0') {
            if (*(char *)(iVar13 + 0x2b) == '\x03') {
              func_0x80042354(1,1);
              func_0x80040d68(iVar13,0x80148680);
              *(undefined1 *)(iVar13 + 0x70) = 1;
              *(char *)(iVar13 + 6) = *(char *)(iVar13 + 6) + '\x01';
              puVar8 = (undefined1 *)FUN_80119a8c();
              return puVar8;
            }
            uVar6 = func_0x800782b0(iVar13 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164,3,iVar18,
                                    uVar20);
            *(undefined2 *)(iVar13 + 0x56) = uVar6;
            puVar8 = (undefined1 *)FUN_80119a8c();
            return puVar8;
          }
          if (cVar1 != '\x01') {
            puVar8 = (undefined1 *)FUN_80119a8c();
            return puVar8;
          }
          if ((*(char *)(iVar13 + 0x71) != -1) || (DAT_800bf80e == '\0')) {
            return &LAB_800c0000;
          }
          if (DAT_800bf9de == '\0') {
            DAT_800bf9de = cVar1;
            *(undefined1 *)(iVar13 + 0x5f) = 0;
            uVar14 = 0;
            if (DAT_800bf9e3 == 0) {
              iVar7 = func_0x8007778c(iVar13);
              puVar8 = (undefined1 *)0x0;
              if (iVar7 != 0) {
                func_0x8004190c(iVar13);
                puVar8 = (undefined1 *)func_0x800518fc(iVar13);
              }
              return puVar8;
            }
            do {
              if ((((int)(uint)DAT_800bf9e3 >> (uVar14 & 0x1f) & 1U) != 0) &&
                 (((int)(uint)DAT_800bf9e3 >> (uVar14 + 4 & 0x1f) & 1U) == 0)) {
                *(byte *)(iVar13 + 0x5f) = *(byte *)(iVar13 + 0x5f) | (byte)(1 << (uVar14 & 0x1f));
              }
              uVar14 = uVar14 + 1;
            } while ((int)uVar14 < 3);
            if (*(char *)(iVar13 + 0x5f) == '\0') {
              func_0x80040d68(iVar13,0x801486f0);
            }
            else {
              DAT_800e7e85 = 0x26;
              DAT_800e7e86 = 0;
              if ((*(byte *)(iVar13 + 0x5f) & 4) == 0) {
                func_0x80040d68(iVar13,0x801486f8);
              }
              else {
                func_0x80040d68(iVar13,0x80148708);
              }
            }
          }
          else {
            *(undefined1 *)(iVar13 + 0x5f) = 0;
            uVar14 = 0;
            if (DAT_800bf9e3 == 0) {
              puVar8 = (undefined1 *)FUN_80119a40();
              return puVar8;
            }
            do {
              if ((((int)(uint)DAT_800bf9e3 >> (uVar14 & 0x1f) & 1U) != 0) &&
                 (((int)(uint)DAT_800bf9e3 >> (uVar14 + 4 & 0x1f) & 1U) == 0)) {
                *(byte *)(iVar13 + 0x5f) = *(byte *)(iVar13 + 0x5f) | (byte)(1 << (uVar14 & 0x1f));
              }
              uVar14 = uVar14 + 1;
            } while ((int)uVar14 < 3);
            if (*(char *)(iVar13 + 0x5f) == '\0') {
              func_0x80040d68(iVar13,0x80148718);
              *(undefined1 *)(iVar13 + 5) = 4;
              *(undefined1 *)(iVar13 + 6) = 0;
              return &DAT_00000004;
            }
            DAT_800e7e85 = 0x26;
            DAT_800e7e86 = 0;
            func_0x80040d68(iVar13,0x80148720);
          }
          FUN_8013dd34();
          puVar8 = (undefined1 *)FUN_80122bdc();
          return puVar8;
        }
        puVar8 = (undefined1 *)0x0;
        if (iVar9 * 0x10000 <= iVar16 << 0x10) {
          sVar15 = -0x60;
          if ((*(byte *)(param_1 + 0x147) & 1) != 0) {
            sVar15 = 0x60;
          }
          if ((int)*(short *)(param_3 + 0x34) < (int)*(short *)(param_1 + 0x36) + (int)sVar15) {
            puVar8 = (undefined1 *)0x0;
            if ((ushort)((*(short *)(param_1 + 0x150) - *(short *)(param_3 + 0x34)) + 0x80U) < 0x101
               ) {
              if (0x1f < (ushort)(sVar3 - sVar19)) {
                if (sVar4 == 0) {
                  trap(0x1c00);
                }
                if ((sVar4 == 1) &&
                   (((int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) *
                          0x10000) >> 0x10) * (int)sVar5 == -0x80000000)) {
                  trap(0x1800);
                }
                puVar8 = (undefined1 *)FUN_80110b74();
                return puVar8;
              }
              goto LAB_80107978;
            }
          }
          else {
            puVar8 = (undefined1 *)0x0;
            if (((ushort)((*(short *)(param_1 + 0x150) - *(short *)(param_3 + 0x34)) + 0x80U) <
                 0x101) && (puVar8 = (undefined1 *)0x0, 0x1f < (ushort)(sVar3 - sVar19))) {
              iVar10 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
              iVar7 = (iVar10 * 0x10000 >> 0x10) * (int)sVar5;
              iVar9 = -(int)sVar4;
              if (iVar9 == 0) {
                trap(0x1c00);
              }
              if ((iVar9 == -1) && (iVar7 == -0x80000000)) {
                trap(0x1800);
              }
              *(short *)(param_1 + 0x152) = (short)(iVar7 / iVar9) + -0x60;
              *(short *)(param_1 + 0x156) = (short)iVar10;
              uVar11 = *(ushort *)(param_3 + 0xc) & 0xfff;
              uVar6 = 0;
              if (((uVar11 < 0x480) || (0xb80 < uVar11)) &&
                 (uVar6 = 0xffc4, *(char *)(param_1 + 0x147) == '\0')) {
                uVar6 = 0x3c;
              }
              *(undefined2 *)(param_2 + 0x60) = uVar6;
              *(undefined1 *)(param_2 + 0x29) = 1;
              *(undefined2 *)(param_1 + 0x48) = 0;
              iVar7 = func_0x80083f50((int)*(short *)(param_3 + 0xc));
              *(short *)(param_1 + 0x4c) = (short)(iVar7 >> 4);
              iVar7 = func_0x80083e80((int)*(short *)(param_3 + 0xc));
              uVar11 = *(ushort *)(param_1 + 0x32);
              *(short *)(param_1 + 0x4a) = (short)(iVar7 >> 4);
              uVar2 = *(ushort *)(param_3 + 0x30);
              iVar7 = func_0x80083e80((int)*(short *)(param_3 + 0xc));
              iVar7 = iVar7 * (*(short *)(param_2 + 0x80) + -100) >> 0xc;
              sVar3 = (short)iVar7;
              if (0 < iVar7 << 0x10) {
                sVar3 = -sVar3;
              }
              iVar7 = (int)(((uint)uVar11 - (uint)uVar2) * 0x10000) >> 0x10;
              if ((iVar7 < 0) && (iVar7 <= sVar3)) {
                *(short *)(param_1 + 0x156) = sVar3;
              }
              puVar8 = (undefined1 *)0x1;
              if (*(char *)(param_1 + 0x164) != '\x06') {
                *(undefined1 *)(param_1 + 0x164) = 6;
                DAT_1f800182 = 0;
                _DAT_1f800080 = param_2;
                _DAT_1f800084 = param_3;
              }
            }
          }
        }
      }
    }
  }
  return puVar8;
}

