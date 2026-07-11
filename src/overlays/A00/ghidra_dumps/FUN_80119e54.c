// FUN_80119e54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80119e54(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  int in_v1;
  int extraout_v1;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  short in_t0;
  int in_t1;
  int in_t2;
  uint *unaff_s2;
  uint *puVar13;
  int unaff_s3;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  undefined8 uVar14;
  
  bVar2 = *(byte *)(param_1 + 0x78);
  if (bVar2 == 1) {
    iVar11 = func_0x8006cdcc(0x800e8008);
    if (iVar11 != 1) {
      return 0;
    }
    in_v1 = 0x1e;
    *(undefined2 *)(param_1 + 0x40) = 0x1e;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    sVar4 = _DAT_00000028;
  }
  else if (bVar2 < 2) {
    sVar4 = 0;
    if (bVar2 == 0) {
      func_0x8006e1c0(7);
      func_0x8006cba8(&DAT_800e7eac);
      func_0x8006cc1c(0x800e8008,0x801494f0,0x40);
      uVar7 = FUN_80122ea0();
      return uVar7;
    }
  }
  else if (bVar2 == 2) {
    sVar4 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar4;
    if (sVar4 != -1) {
      return 0;
    }
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    func_0x8006e1e4();
    in_v1 = extraout_v1;
    sVar4 = 0;
  }
  else {
    if (bVar2 == 3) {
      return (uint)(DAT_800e806e == '\x03');
    }
    sVar4 = 0;
  }
  *(short *)(in_v1 + 10) = sVar4 + *(short *)(in_v1 + 0x16);
  *(short *)(param_1 + 0x3e) = *(short *)(param_1 + 0x3e) + 0x10;
  uVar5 = (short)unaff_s2[0x10] - 1;
  *(ushort *)(unaff_s2 + 0x10) = uVar5;
  if (uVar5 == 0) {
    iVar11 = -0x7feb5dcc;
    *(char *)((int)unaff_s2 + 5) = *(char *)((int)unaff_s2 + 5) + '\x01';
    DAT_800bf9de = 0x13;
    uVar14 = func_0x8006cbd0();
    do {
      uVar7 = (uint)((ulonglong)uVar14 >> 0x20);
      iVar6 = param_1;
      if (param_4 < *(int *)((int)uVar14 + 0x34)) {
        *(undefined2 *)(unaff_s2 + 4) = 0;
        param_4 = param_4 + -0x42fc;
        *(short *)(unaff_s2 + 6) =
             (short)((int)(short)unaff_s2[8] + (int)*(short *)(unaff_s4 + 0x84) >> 1);
        *(short *)((int)unaff_s2 + 0x12) =
             (short)((int)*(short *)((int)unaff_s2 + 10) + (int)*(short *)(unaff_s6 + 2) >> 1);
        *(short *)((int)unaff_s2 + 0x1a) =
             (short)((int)*(short *)((int)unaff_s2 + 0x22) + (int)*(short *)(unaff_s6 + 2) >> 1);
        uVar8 = (uint)(ushort)unaff_s2[2] + (uint)*(ushort *)((int)unaff_s2 + 10) & 0xf;
        uVar12 = (uint)*(byte *)(uVar8 + param_4);
        uVar9 = uVar8 + 4 & 0xf;
        uVar12 = uVar12 << 0x10 | uVar12 << 8 | 0x5e000000 | uVar12;
        unaff_s2[1] = uVar12;
        unaff_s2[0xb] = uVar12;
        uVar8 = (uint)*(byte *)(uVar9 + param_4);
        uVar9 = uVar9 + 4 & 0xf;
        uVar8 = uVar8 << 0x10 | uVar8 << 8 | uVar8;
        unaff_s2[3] = uVar8;
        unaff_s2[0xd] = uVar8;
        uVar8 = (uint)*(byte *)(uVar9 + param_4);
        uVar8 = uVar8 << 0x10 | uVar8 << 8 | uVar8;
        unaff_s2[5] = uVar8;
        unaff_s2[0xf] = uVar8;
        uVar8 = (uint)*(byte *)((uVar9 + 4 & 0xf) + param_4);
        uVar8 = uVar8 << 0x10 | uVar8 << 8 | uVar8;
        unaff_s2[7] = uVar8;
        unaff_s2[0x11] = uVar8;
        puVar10 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
        *unaff_s2 = *puVar10 | 0x9000000;
        *puVar10 = (uint)unaff_s2;
        unaff_s2[0xc] = unaff_s2[2];
        unaff_s2[0xe] = unaff_s2[4];
        unaff_s2[0x13] = uVar7;
        unaff_s2[0x10] = unaff_s2[6];
        unaff_s2[0x12] = unaff_s2[8];
        *(short *)((int)unaff_s2 + 0x32) = *(short *)((int)unaff_s2 + 0x32) + 1;
        *(short *)((int)unaff_s2 + 0x3a) = *(short *)((int)unaff_s2 + 0x3a) + 1;
        *(short *)((int)unaff_s2 + 0x42) = *(short *)((int)unaff_s2 + 0x42) + 1;
        *(short *)((int)unaff_s2 + 0x4a) = *(short *)((int)unaff_s2 + 0x4a) + 1;
        puVar10 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
        unaff_s2[10] = *puVar10 | 0x9000000;
        *puVar10 = (uint)(unaff_s2 + 10);
        puVar13 = unaff_s2 + 0x14;
        func_0x80083de0(puVar13,0,1,0x75,0);
        puVar10 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
        uVar7 = *puVar10 | 0x2000000;
        *puVar13 = uVar7;
        *puVar10 = (uint)puVar13;
        *(uint **)(unaff_s7 + -0xabc) = unaff_s2 + 0x17;
        return uVar7;
      }
      do {
        param_3 = param_3 + 4;
        uVar7 = uVar7 + 1;
        param_1 = iVar6 + 4;
        if (in_t2 <= (int)uVar7) {
          uVar7 = 3;
          if (-1 < in_t0) {
            sVar4 = 0;
            if (*(char *)(in_t1 + 2) == '\x03') {
              sVar4 = *(short *)(in_t1 + 0x7e);
            }
            iVar6 = *(int *)(iVar11 + in_t0 * 4 + 0xc0);
            iVar11 = (int)*(short *)(iVar6 + 0x22) *
                     ((int)*(short *)(in_t1 + 0x36) - *(int *)(iVar6 + 0x34));
            uVar7 = *(int *)(iVar6 + 0x30) + (iVar11 >> 0xc);
            if (-1 < (int)(((int)*(short *)(in_t1 + 0x32) + (int)sVar4 +
                           ((int)*(short *)(in_t1 + 0x86) - (int)*(short *)(in_t1 + 0x84))) - uVar7)
               ) {
              sVar3 = *(short *)(iVar6 + 0x30);
              *(undefined1 *)(in_t1 + 0x29) = 1;
              *(short *)(in_t1 + 0x32) =
                   (sVar3 - (*(short *)(in_t1 + 0x86) - *(short *)(in_t1 + 0x84))) - sVar4;
              *(int *)(in_t1 + 0x30) = *(int *)(in_t1 + 0x30) + iVar11 * 0x10;
              if ((*(char *)(in_t1 + 2) != '\a') ||
                 (uVar7 = (uint)*(short *)(in_t1 + 0x4a), -1 < (int)uVar7)) {
                uVar7 = -((int)((uint)*(ushort *)(iVar6 + 0x22) << 0x10) >> 0x14);
                *(short *)(in_t1 + 0x4a) = (short)uVar7;
              }
            }
          }
          return uVar7;
        }
        piVar1 = (int *)(iVar6 + 0xc4);
        iVar6 = param_1;
      } while (param_4 < *(int *)(*piVar1 + 0x34));
      uVar14 = CONCAT44(uVar7,*(undefined4 *)(iVar11 + param_3 + 0xc0));
    } while( true );
  }
  return (uint)uVar5 << 0x10;
}

