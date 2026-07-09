// FUN_801162dc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x801314bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_801162dc(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint in_v1;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined4 uVar13;
  
  bVar1 = *(byte *)(param_1 + 6);
  puVar12 = (undefined2 *)0x1;
  uVar5 = (uint)(bVar1 < 2);
  if (bVar1 != 1) {
    iVar10 = param_1;
    if (uVar5 != 0) {
      in_v1 = 0x1f800000;
      if (bVar1 != 0) goto LAB_8011f97c;
      iVar8 = (int)_DAT_1f800162;
      sVar4 = *(short *)(param_1 + 0x32) + 0x10;
      *(short *)(param_1 + 0x32) = sVar4;
      if ((int)sVar4 < iVar8 + -500) goto LAB_801169d8;
      uVar5 = *(byte *)(param_1 + 6) + 1;
      *(char *)(param_1 + 6) = (char)uVar5;
      goto LAB_8011f974;
    }
    uVar5 = 4;
    if (bVar1 != 2) {
      if (bVar1 == 4) {
        FUN_80120498(param_1,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(*(undefined1 *)(param_1 + 7)) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        default:
          return;
        }
      }
      goto LAB_8011f97c;
    }
    uVar13 = 0x801164d4;
    FUN_80120498(param_1,0);
    bVar1 = *(byte *)(param_1 + 7);
    uVar5 = (uint)(bVar1 < 2);
    if (bVar1 == 1) {
LAB_80116578:
      if (*(short *)(param_1 + 0x44) < 0x4000) {
        *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 0x200;
      }
      iVar8 = (uint)*(ushort *)(param_1 + 0x42) -
              ((int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x18);
      *(short *)(param_1 + 0x42) = (short)iVar8;
      if (-1 < iVar8 * 0x10000) {
LAB_801169d8:
        func_0x80076d68(param_1);
        return;
      }
      if (*(short *)(param_1 + 0x52) < 0) {
        *(short *)(param_1 + 0x52) = -*(short *)(param_1 + 0x52);
      }
      uVar5 = *(byte *)(param_1 + 7) + 1;
      *(char *)(param_1 + 7) = (char)uVar5;
    }
    else if (uVar5 == 0) {
      if (bVar1 == 2) {
        *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) - *(short *)(param_1 + 0x52);
        if (0x800 < *(short *)(param_1 + 0x44)) {
          *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + -0x400;
        }
        if (*(short *)(param_1 + 0x58) < -0x180) {
          *(undefined2 *)(param_1 + 0x58) = 0xfe80;
          *(undefined2 *)(param_1 + 0x40) = 3;
          *(undefined1 *)(param_1 + 6) = 4;
          *(undefined1 *)(param_1 + 7) = 0;
          *(undefined1 *)(param_1 + 0x5e) = 0;
          func_0x80077c40(param_1,0x8014e1a4,2);
        }
        iVar10 = (int)*(short *)(param_1 + 0x58);
        iVar8 = func_0x80083e80();
        uVar5 = iVar8 >> 4;
        *(short *)(param_1 + 0x4a) = (short)uVar5;
      }
    }
    else if (bVar1 == 0) {
      if (*(short *)(param_1 + 0x58) != *(short *)(param_1 + 0x6a)) {
        iVar10 = (int)*(short *)(param_1 + 0x52);
        iVar8 = (uint)*(ushort *)(param_1 + 0x40) - (uint)*(ushort *)(param_1 + 0x52);
        *(short *)(param_1 + 0x40) = (short)iVar8;
        if ((iVar8 * 0x10000 >> 0x10) * iVar10 < 0) {
          *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x6a);
          *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
          iVar8 = *(int *)(iVar10 + 0xf0);
          iVar9 = *(int *)(iVar10 + 0xc0);
          iVar11 = *(int *)(iVar10 + 0x10);
          iVar8 = func_0x800779d0(iVar10,(*(int *)(iVar8 + 0x2c) - *(int *)(iVar9 + 0x2c)) * 0x8000
                                         >> 0x10,
                                  (*(int *)(iVar8 + 0x30) - *(int *)(iVar9 + 0x30)) * 0x8000 >> 0x10
                                  ,(*(int *)(iVar8 + 0x34) - *(int *)(iVar9 + 0x34)) * 0x8000 >>
                                   0x10,2,param_1,1,uVar13);
          if ((iVar8 != 0) || ((iVar11 != 0 && (*(char *)(iVar11 + 1) != '\0')))) {
            *(undefined1 *)(iVar10 + 1) = 1;
            *(char *)(iVar10 + 8) = *(char *)(iVar10 + 8) + '\x01';
            func_0x800517f8(iVar10);
            if (iVar11 != 0) {
              *(undefined2 *)(iVar11 + 0x36) = *(undefined2 *)(*(int *)(iVar10 + 0xf0) + 0x34);
              *(undefined2 *)(iVar10 + 0x4e) = *(undefined2 *)(iVar10 + 0x60);
              *(undefined2 *)(iVar10 + 0x50) = *(undefined2 *)(iVar10 + 0x62);
              uVar2 = *(undefined2 *)(iVar11 + 0x36);
              *(int *)(iVar10 + 0x14) = iVar10 + 0x66;
              *(undefined2 *)(iVar10 + 0x52) = uVar2;
              *(undefined2 *)(iVar10 + 0x66) = *(undefined2 *)(*(int *)(iVar10 + 0xf0) + 0x2c);
              *(undefined2 *)(iVar10 + 0x68) = *(undefined2 *)(*(int *)(iVar10 + 0xf0) + 0x30);
              *(undefined2 *)(iVar10 + 0x6a) = *(undefined2 *)(*(int *)(iVar10 + 0xf0) + 0x34);
            }
            *(char *)(iVar10 + 8) = *(char *)(iVar10 + 8) + -1;
          }
          return;
        }
        *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + *(short *)(param_1 + 0x52);
      }
      goto LAB_80116578;
    }
LAB_8011f974:
    in_v1 = (uint)*(byte *)(uVar5 + 0x5e);
    uVar5 = 2;
    param_1 = iVar10;
LAB_8011f97c:
    if (in_v1 == uVar5) {
      *(undefined1 *)(param_1 + 0xb) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    FUN_801281b8();
    return;
  }
  iVar8 = 1;
  iVar10 = param_1;
  FUN_80120498();
  if (*(short *)(param_1 + 0x4a) < 1) {
    *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + (*(short *)(param_1 + 0x44) >> 7);
    *(undefined1 *)(iVar10 + 8) = 0xd;
    iVar9 = -0x7ff10000;
LAB_8011f394:
    cVar3 = '\x03';
    if (*(short *)(iVar9 + -0x2f68) < 0xd) goto LAB_8011f4f0;
    iVar9 = 0;
    *(undefined1 *)(iVar10 + 9) = 0xd;
    if (*(char *)(iVar10 + 8) != '\0') {
      puVar12 = (undefined2 *)&DAT_801498c4;
      iVar11 = iVar10;
      do {
        puVar6 = (undefined2 *)func_0x8007aae8();
        *(undefined2 **)(iVar11 + 0xc0) = puVar6;
        puVar6[3] = (short)iVar9 + -1;
        *puVar6 = 0;
        uVar2 = *puVar12;
        puVar12 = puVar12 + 1;
        iVar11 = iVar11 + 4;
        iVar8 = 0xc;
        puVar6[2] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[1] = uVar2;
        func_0x80051b04(puVar6,0xc,iVar9 + 0x18);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(uint)*(byte *)(iVar10 + 8));
    }
    iVar11 = 0xf;
    iVar9 = iVar10 + 0x1e;
  }
  else {
    iVar10 = (uint)*(ushort *)(param_1 + 0x44) << 0x10;
    *(short *)(param_1 + 0x42) =
         *(short *)(param_1 + 0x42) - (short)((iVar10 >> 0x10) - (iVar10 >> 0x1f) >> 9);
    iVar11 = 0;
    iVar10 = 1;
    puVar12 = (undefined2 *)0x20;
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + -4;
    *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + 4;
    iVar9 = func_0x80076d68(param_1);
    if ((iVar9 != 1) ||
       (sVar4 = *(short *)(param_1 + 0x40), *(short *)(param_1 + 0x40) = sVar4 + -1, sVar4 != 1)) {
      iVar9 = 1;
      goto LAB_8011f394;
    }
    iVar8 = -0x7feb1e5c;
    func_0x80077cfc(param_1,0x8014e1a4,3,4);
    iVar9 = 0x98;
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x80074590(0x98,0,0);
      return;
    }
    sVar4 = *(short *)(param_1 + 0x6a);
    *(short *)(param_1 + 0x40) = sVar4;
    if (sVar4 < 1) {
      if (-1 < sVar4) {
        *(undefined2 *)(param_1 + 0x52) = 0x20;
        *(undefined2 *)(param_1 + 0x58) = 0;
        uVar5 = 0x2000;
        *(undefined2 *)(param_1 + 0x44) = 0x2000;
        *(undefined1 *)(param_1 + 7) = 0;
        *(undefined1 *)(param_1 + 0x5e) = 1;
        in_v1 = *(byte *)(param_1 + 6) + 1;
        *(char *)(param_1 + 6) = (char)in_v1;
        param_1 = iVar9;
        goto LAB_8011f97c;
      }
      *(undefined2 *)(param_1 + 0x52) = 0xffe0;
    }
    else {
      *(undefined2 *)(param_1 + 0x52) = 0x20;
    }
  }
  *(undefined1 *)(iVar10 + 0xb) = 0x20;
  *(undefined1 *)(iVar10 + 0xd) = 0;
  *(undefined **)(iVar10 + 0x18) = &DAT_8013e9d8;
  *(char *)(iVar10 + 8) = *(char *)(iVar10 + 8) + -1;
  do {
    *(undefined2 *)(iVar9 + 0x60) = 0;
    iVar11 = iVar11 + -1;
    iVar9 = iVar9 + -2;
  } while (-1 < iVar11);
  cVar3 = *(char *)(iVar10 + 3);
  if (cVar3 == '\0') {
    *(undefined2 *)(iVar10 + 0x56) = 0xd28;
    FUN_80117cf8(iVar10);
    FUN_80128448();
    return;
  }
  if (cVar3 != '\x01') {
    *(undefined1 *)(iVar10 + 0x5e) = 0;
    if (cVar3 == '\x01') {
      *(undefined1 *)(iVar10 + 5) = 0;
      return;
    }
    uVar5 = *(ushort *)(iVar10 + 0x68) & 0x7fff;
    if (uVar5 == 1) {
      iVar10 = (int)*(short *)(iVar10 + 100) + (int)*(short *)(iVar10 + 0x66);
      iVar8 = -(iVar10 >> 0x1f);
      uVar7 = iVar10 + iVar8;
      uVar5 = (uint)*(byte *)(iVar8 + 0x49);
    }
    else {
      if (1 < uVar5) {
        if (uVar5 == 2) {
          *(short *)(iVar10 + 0x48) = (*(short *)(iVar10 + 0x66) - (short)iVar8) * 0x10;
          *(undefined2 *)(iVar10 + 0x40) = 0x10;
          *(undefined1 *)(iVar10 + 5) = 1;
          *(undefined1 *)(iVar10 + 6) = 4;
          return;
        }
        FUN_80131490();
        return;
      }
      if ((*(ushort *)(iVar10 + 0x68) & 0x7fff) != 0) {
        FUN_80131490();
        return;
      }
      uVar7 = (uint)*(ushort *)(iVar10 + 100) - iVar8;
    }
    if (uVar5 != uVar7) {
      FUN_80118974(*(undefined4 *)(puVar12 + 0x68));
    }
    FUN_8013a184(puVar12);
    FUN_8013989c(puVar12);
    *(undefined1 *)puVar12 = 1;
    puVar12[0x41] = 0xc0;
    *(undefined1 *)((int)puVar12 + 0x29) = 0;
    puVar12[0x40] = 0x60;
    puVar12[0x42] = 0x10;
    puVar12[0x43] = 0x60;
    *(char *)(puVar12 + 2) = *(char *)(puVar12 + 2) + '\x01';
    return;
  }
  *(undefined2 *)(iVar10 + 0x56) = 0x6a4;
  uVar13 = FUN_80117f3c();
  *(undefined4 *)(iVar10 + 0x10) = uVar13;
  *(undefined2 *)(iVar10 + 0x78) = 0;
  *(undefined2 *)(iVar10 + 0x72) = 400;
  *(undefined2 *)(iVar10 + 0x74) = 0;
  *(undefined2 *)(iVar10 + 0x7a) = 0x280;
  *(undefined2 *)(iVar10 + 0x7c) = 400;
  *(undefined2 *)(iVar10 + 0x7e) = 0;
  if (*(int *)(iVar10 + 0x10) == 0) {
    *(undefined1 *)(iVar10 + 0xb) = 0;
    *(undefined2 *)(iVar10 + 0x7a) = 0x200;
  }
  cVar3 = *(char *)(iVar10 + 4) + '\x01';
LAB_8011f4f0:
  *(char *)(iVar10 + 4) = cVar3;
  return;
}

