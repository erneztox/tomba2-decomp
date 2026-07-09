// FUN_8010d38c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8010d7c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8010d38c(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int extraout_v1;
  uint uVar10;
  int iVar11;
  int iVar12;
  ushort *unaff_s1;
  ushort unaff_s3;
  
  bVar1 = DAT_800e7eaa;
  iVar9 = 1;
  bVar8 = *(byte *)(param_1 + 4);
  iVar11 = 1;
  if (bVar8 == 1) {
LAB_8010d450:
    if (((byte)(bVar1 - 0x12) < 9) && (_DAT_801480ec = _DAT_801480ec + -1, _DAT_801480ec < 0)) {
      if (_DAT_801480f0 != 0) {
        func_0x80074af0();
      }
      func_0x8009a450();
      return;
    }
    iVar6 = (short)_DAT_1f800162 + 7000 >> 6;
    if (iVar6 < 0) {
      uVar7 = 0x2000;
      unaff_s1[0x22] = 0x2000;
      *(undefined1 *)((int)unaff_s1 + 7) = 0;
      *(char *)(unaff_s1 + 0x2f) = (char)unaff_s3;
      uVar10 = iVar9 + 1;
      *(char *)(unaff_s1 + 3) = (char)uVar10;
      goto LAB_8011f97c;
    }
    if (0x7f < iVar6) {
      iVar6 = 0x7f;
    }
    uVar7 = 0;
    func_0x8007496c(_DAT_801480f0,iVar6,iVar6);
    iVar11 = 0;
    do {
      iVar9 = (iVar11 >> 0x10) * 0x18;
      unaff_s1 = (ushort *)(iVar9 + -0x7feb7f8c);
      sVar2 = (short)uVar7;
      bVar8 = bVar1;
      if (((*(byte *)(iVar9 + -0x7feb7f78) <= bVar1) && (bVar1 <= *(byte *)(iVar9 + -0x7feb7f77)))
         && (DAT_800bf816 == '\0')) {
        iVar6 = (int)(((uint)*unaff_s1 - (uint)_DAT_1f800160) * 0x10000) >> 0x10;
        iVar11 = (int)(((uint)*(ushort *)(iVar9 + -0x7feb7f88) - (uint)_DAT_1f800164) * 0x10000) >>
                 0x10;
        uVar10 = func_0x80078240(iVar6,(int)(((uint)*(ushort *)(iVar9 + -0x7feb7f8a) -
                                             (uint)_DAT_1f800162) * 0x10000) >> 0x10,iVar11);
        bVar8 = 0;
        if (uVar10 < (uint)(int)*(short *)(iVar9 + -0x7feb7f86)) {
          iVar12 = (int)*(short *)(iVar9 + -0x7feb7f82) -
                   (uVar10 >> ((int)*(short *)(iVar9 + -0x7feb7f84) & 0x1fU));
          if (iVar12 < 0) {
            FUN_801165c0();
            return;
          }
          if (0x7f < iVar12) {
            iVar12 = 0x7f;
          }
          uVar5 = func_0x80085690(iVar11,iVar6);
          func_0x80074a60(iVar12,uVar5);
          uVar3 = 4;
          if (sVar2 < 3) {
            if (0 < sVar2) {
              if (sVar2 == 0) {
                *(short *)(iVar9 + -0x7feb7f48) = *(short *)(iVar9 + -0x7feb7f48) + -0x400;
              }
              if (*(short *)(iVar9 + -0x7feb7f34) < -0x180) {
                uVar3 = 0xfe80;
                goto LAB_80116628;
              }
            }
          }
          else if (sVar2 != 4) {
LAB_80116628:
            *(undefined2 *)(iVar9 + -0x7feb7f34) = uVar3;
            *(undefined2 *)(iVar9 + -0x7feb7f4c) = 3;
            *(undefined1 *)(iVar9 + -0x7feb7f86) = 4;
            *(undefined1 *)(iVar9 + -0x7feb7f85) = 0;
            *(undefined1 *)(iVar9 + -0x7feb7f2e) = 0;
            func_0x80077c40();
          }
          iVar11 = (int)*(short *)(iVar9 + -0x7feb7f34);
          iVar6 = func_0x80083e80();
          iVar6 = iVar6 >> 4;
          *(short *)(iVar9 + -0x7feb7f42) = (short)iVar6;
          goto LAB_8011f974;
        }
      }
      uVar10 = (uint)*(byte *)(iVar9 + -0x7feb7f7e);
      if (uVar10 == 0) {
        iVar11 = *(int *)(&DAT_80148084 + iVar9);
        *(undefined1 *)(iVar9 + -0x7feb7f7e) = 1;
        if (iVar11 != 0) {
          func_0x80074af0();
        }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(sVar2) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (uVar10 != 1) {
          *(short *)(iVar9 + -0x7feb7f42) = (short)((int)uVar10 >> 4);
          if (bVar8 == 0) {
            func_0x80076d68(unaff_s1);
            return;
          }
          *(undefined2 *)(iVar9 + -0x7feb7f34) = 0;
          func_0x8009a450();
          return;
        }
        iVar11 = func_0x8007496c(*(undefined4 *)(&DAT_80148084 + iVar9),0,0);
        if (iVar11 == 0) {
          *(undefined1 *)(iVar9 + -0x7feb7f7e) = 0;
          FUN_80116740();
          return;
        }
        func_0x80074a38(*(undefined4 *)(&DAT_80148084 + iVar9));
      }
      uVar7 = uVar7 + 1;
      iVar11 = uVar7 * 0x10000;
    } while ((uVar7 & 0xffff) < 5);
    uVar4 = func_0x80075d24(0x1fff);
    iVar9 = extraout_v1;
  }
  else {
    uVar4 = (ushort)(bVar8 < 2);
    if (bVar8 >= 2) {
      if (3 < bVar8) {
        return;
      }
      FUN_80116774();
      return;
    }
    if (bVar8 == 0) {
      func_0x800752b4(6);
      iVar11 = -0x7feb7f8c;
      uVar4 = 0;
      do {
        unaff_s3 = uVar4 + 1;
        iVar6 = (short)uVar4 * 0x18;
        iVar9 = iVar6 + -0x7feb7f8c;
        *(undefined1 *)(iVar6 + -0x7feb7f7e) = 0;
        *(undefined1 *)(iVar6 + -0x7feb7f7d) = 0;
        uVar4 = unaff_s3;
      } while (unaff_s3 < 5);
      *(undefined1 *)(param_1 + 4) = 1;
      goto LAB_8010d450;
    }
  }
  unaff_s1[0x28] = (ushort)iVar9;
  unaff_s1[0x33] = uVar4 - 0x800;
  unaff_s1[0x27] = 0xff80;
  unaff_s1[0x29] = 0xfff0;
  iVar9 = func_0x80083f50((int)(short)unaff_s1[0x2b]);
  iVar11 = (int)(short)unaff_s1[0x2b];
  unaff_s1[0x24] = (ushort)(iVar9 >> 4);
  unaff_s1[0x25] = 0;
  iVar9 = func_0x80083e80();
  unaff_s1[0x26] = (ushort)(-iVar9 >> 4);
  unaff_s1[0x22] = 0xc00;
  unaff_s1[0x20] = 0x1e;
  iVar6 = *(byte *)((int)unaff_s1 + 7) + 1;
  *(char *)((int)unaff_s1 + 7) = (char)iVar6;
LAB_8011f974:
  uVar10 = (uint)*(byte *)(iVar6 + 0x5e);
  uVar7 = 2;
LAB_8011f97c:
  if (uVar10 == uVar7) {
    *(undefined1 *)(iVar11 + 0xb) = 0;
    *(undefined4 *)(iVar11 + 0x10) = 0;
    *(char *)(iVar11 + 5) = *(char *)(iVar11 + 5) + '\x01';
  }
  FUN_801281b8();
  return;
}

