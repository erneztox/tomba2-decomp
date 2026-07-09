// FUN_80119f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80119f70(void)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  short sVar12;
  int iVar13;
  short in_t0;
  int in_t1;
  int in_t2;
  uint *unaff_s2;
  uint *puVar14;
  int unaff_s3;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  undefined8 uVar15;
  
  iVar9 = 0;
  iVar10 = 3;
  iVar13 = 0x10;
  iVar3 = func_0x80072ddc();
  if (iVar3 == 0) {
    return 0;
  }
  *(undefined1 *)(iVar3 + 3) = 6;
  *(undefined4 *)(iVar3 + 0x1c) = 0x8012da04;
                    /* WARNING: Read-only address (ram,0x8012d3e2) is written */
  uRam8012d3e2 = 0x13;
  uVar15 = func_0x8006cbd0();
  do {
    uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
    iVar8 = iVar3;
    if (iVar13 < *(int *)((int)uVar15 + 0x34)) {
      *(undefined2 *)(unaff_s2 + 4) = 0;
      iVar13 = iVar13 + -0x42fc;
      *(short *)(unaff_s2 + 6) =
           (short)((int)(short)unaff_s2[8] + (int)*(short *)(unaff_s4 + 0x84) >> 1);
      *(short *)((int)unaff_s2 + 0x12) =
           (short)((int)*(short *)((int)unaff_s2 + 10) + (int)*(short *)(unaff_s6 + 2) >> 1);
      *(short *)((int)unaff_s2 + 0x1a) =
           (short)((int)*(short *)((int)unaff_s2 + 0x22) + (int)*(short *)(unaff_s6 + 2) >> 1);
      uVar5 = (uint)(ushort)unaff_s2[2] + (uint)*(ushort *)((int)unaff_s2 + 10) & 0xf;
      uVar11 = (uint)*(byte *)(uVar5 + iVar13);
      uVar6 = uVar5 + 4 & 0xf;
      uVar11 = uVar11 << 0x10 | uVar11 << 8 | 0x5e000000 | uVar11;
      unaff_s2[1] = uVar11;
      unaff_s2[0xb] = uVar11;
      uVar5 = (uint)*(byte *)(uVar6 + iVar13);
      uVar6 = uVar6 + 4 & 0xf;
      uVar5 = uVar5 << 0x10 | uVar5 << 8 | uVar5;
      unaff_s2[3] = uVar5;
      unaff_s2[0xd] = uVar5;
      uVar5 = (uint)*(byte *)(uVar6 + iVar13);
      uVar5 = uVar5 << 0x10 | uVar5 << 8 | uVar5;
      unaff_s2[5] = uVar5;
      unaff_s2[0xf] = uVar5;
      uVar5 = (uint)*(byte *)((uVar6 + 4 & 0xf) + iVar13);
      uVar5 = uVar5 << 0x10 | uVar5 << 8 | uVar5;
      unaff_s2[7] = uVar5;
      unaff_s2[0x11] = uVar5;
      puVar7 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
      *unaff_s2 = *puVar7 | 0x9000000;
      *puVar7 = (uint)unaff_s2;
      unaff_s2[0xc] = unaff_s2[2];
      unaff_s2[0xe] = unaff_s2[4];
      unaff_s2[0x13] = uVar4;
      unaff_s2[0x10] = unaff_s2[6];
      unaff_s2[0x12] = unaff_s2[8];
      *(short *)((int)unaff_s2 + 0x32) = *(short *)((int)unaff_s2 + 0x32) + 1;
      *(short *)((int)unaff_s2 + 0x3a) = *(short *)((int)unaff_s2 + 0x3a) + 1;
      *(short *)((int)unaff_s2 + 0x42) = *(short *)((int)unaff_s2 + 0x42) + 1;
      *(short *)((int)unaff_s2 + 0x4a) = *(short *)((int)unaff_s2 + 0x4a) + 1;
      puVar7 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
      unaff_s2[10] = *puVar7 | 0x9000000;
      *puVar7 = (uint)(unaff_s2 + 10);
      puVar14 = unaff_s2 + 0x14;
      func_0x80083de0(puVar14,0,1,0x75,0);
      puVar7 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
      uVar4 = *puVar7 | 0x2000000;
      *puVar14 = uVar4;
      *puVar7 = (uint)puVar14;
      *(uint **)(unaff_s7 + -0xabc) = unaff_s2 + 0x17;
      return uVar4;
    }
    do {
      iVar10 = iVar10 + 4;
      uVar4 = uVar4 + 1;
      iVar3 = iVar8 + 4;
      if (in_t2 <= (int)uVar4) {
        uVar4 = 3;
        if (-1 < in_t0) {
          sVar12 = 0;
          if (*(char *)(in_t1 + 2) == '\x03') {
            sVar12 = *(short *)(in_t1 + 0x7e);
          }
          iVar9 = *(int *)(iVar9 + in_t0 * 4 + 0xc0);
          iVar3 = (int)*(short *)(iVar9 + 0x22) *
                  ((int)*(short *)(in_t1 + 0x36) - *(int *)(iVar9 + 0x34));
          uVar4 = *(int *)(iVar9 + 0x30) + (iVar3 >> 0xc);
          if (-1 < (int)(((int)*(short *)(in_t1 + 0x32) + (int)sVar12 +
                         ((int)*(short *)(in_t1 + 0x86) - (int)*(short *)(in_t1 + 0x84))) - uVar4))
          {
            sVar2 = *(short *)(iVar9 + 0x30);
            *(undefined1 *)(in_t1 + 0x29) = 1;
            *(short *)(in_t1 + 0x32) =
                 (sVar2 - (*(short *)(in_t1 + 0x86) - *(short *)(in_t1 + 0x84))) - sVar12;
            *(int *)(in_t1 + 0x30) = *(int *)(in_t1 + 0x30) + iVar3 * 0x10;
            if ((*(char *)(in_t1 + 2) != '\a') ||
               (uVar4 = (uint)*(short *)(in_t1 + 0x4a), -1 < (int)uVar4)) {
              uVar4 = -((int)((uint)*(ushort *)(iVar9 + 0x22) << 0x10) >> 0x14);
              *(short *)(in_t1 + 0x4a) = (short)uVar4;
            }
          }
        }
        return uVar4;
      }
      piVar1 = (int *)(iVar8 + 0xc4);
      iVar8 = iVar3;
    } while (iVar13 < *(int *)(*piVar1 + 0x34));
    uVar15 = CONCAT44(uVar4,*(undefined4 *)(iVar9 + iVar10 + 0xc0));
  } while( true );
}

