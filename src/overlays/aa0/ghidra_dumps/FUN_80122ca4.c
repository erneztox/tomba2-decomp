// FUN_80122ca4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80122ca4(void)

{
  int *piVar1;
  short sVar2;
  int in_v0;
  short in_v1;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  short sVar11;
  int in_a3;
  short in_t0;
  int in_t1;
  int in_t2;
  int unaff_s0;
  int unaff_s1;
  uint *unaff_s2;
  uint *puVar12;
  int unaff_s3;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  undefined8 uVar13;
  
  *(short *)(in_v0 + 10) = -in_v1;
  if (-0x981 < *(short *)(unaff_s2[0x30] + 2)) {
    return;
  }
  iVar8 = 0xb9;
  iVar9 = 2;
  *(undefined2 *)(unaff_s2[0x30] + 2) = 0xf680;
  *(char *)((int)unaff_s2 + 5) = *(char *)((int)unaff_s2 + 5) + '\x01';
  *(undefined1 *)(unaff_s1 + 0x76) = 1;
  *(undefined2 *)(unaff_s2 + 0x10) = 0x3c;
  DAT_800bf9de = 0x11;
  uVar13 = func_0x80054d14();
  do {
    uVar3 = (uint)((ulonglong)uVar13 >> 0x20);
    iVar7 = unaff_s0;
    if (in_a3 < *(int *)((int)uVar13 + 0x34)) {
      *(undefined2 *)(unaff_s2 + 4) = 0;
      in_a3 = in_a3 + -0x42fc;
      *(short *)(unaff_s2 + 6) =
           (short)((int)(short)unaff_s2[8] + (int)*(short *)(unaff_s4 + 0x84) >> 1);
      *(short *)((int)unaff_s2 + 0x12) =
           (short)((int)*(short *)((int)unaff_s2 + 10) + (int)*(short *)(unaff_s6 + 2) >> 1);
      *(short *)((int)unaff_s2 + 0x1a) =
           (short)((int)*(short *)((int)unaff_s2 + 0x22) + (int)*(short *)(unaff_s6 + 2) >> 1);
      uVar4 = (uint)(ushort)unaff_s2[2] + (uint)*(ushort *)((int)unaff_s2 + 10) & 0xf;
      uVar10 = (uint)*(byte *)(uVar4 + in_a3);
      uVar5 = uVar4 + 4 & 0xf;
      uVar10 = uVar10 << 0x10 | uVar10 << 8 | 0x5e000000 | uVar10;
      unaff_s2[1] = uVar10;
      unaff_s2[0xb] = uVar10;
      uVar4 = (uint)*(byte *)(uVar5 + in_a3);
      uVar5 = uVar5 + 4 & 0xf;
      uVar4 = uVar4 << 0x10 | uVar4 << 8 | uVar4;
      unaff_s2[3] = uVar4;
      unaff_s2[0xd] = uVar4;
      uVar4 = (uint)*(byte *)(uVar5 + in_a3);
      uVar4 = uVar4 << 0x10 | uVar4 << 8 | uVar4;
      unaff_s2[5] = uVar4;
      unaff_s2[0xf] = uVar4;
      uVar4 = (uint)*(byte *)((uVar5 + 4 & 0xf) + in_a3);
      uVar4 = uVar4 << 0x10 | uVar4 << 8 | uVar4;
      unaff_s2[7] = uVar4;
      unaff_s2[0x11] = uVar4;
      puVar6 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
      *unaff_s2 = *puVar6 | 0x9000000;
      *puVar6 = (uint)unaff_s2;
      unaff_s2[0xc] = unaff_s2[2];
      unaff_s2[0xe] = unaff_s2[4];
      unaff_s2[0x13] = uVar3;
      unaff_s2[0x10] = unaff_s2[6];
      unaff_s2[0x12] = unaff_s2[8];
      *(short *)((int)unaff_s2 + 0x32) = *(short *)((int)unaff_s2 + 0x32) + 1;
      *(short *)((int)unaff_s2 + 0x3a) = *(short *)((int)unaff_s2 + 0x3a) + 1;
      *(short *)((int)unaff_s2 + 0x42) = *(short *)((int)unaff_s2 + 0x42) + 1;
      *(short *)((int)unaff_s2 + 0x4a) = *(short *)((int)unaff_s2 + 0x4a) + 1;
      puVar6 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
      unaff_s2[10] = *puVar6 | 0x9000000;
      *puVar6 = (uint)(unaff_s2 + 10);
      puVar12 = unaff_s2 + 0x14;
      func_0x80083de0(puVar12,0,1,0x75);
      puVar6 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
      *puVar12 = *puVar6 | 0x2000000;
      *puVar6 = (uint)puVar12;
      *(uint **)(unaff_s7 + -0xabc) = unaff_s2 + 0x17;
      return;
    }
    do {
      iVar9 = iVar9 + 4;
      uVar3 = uVar3 + 1;
      unaff_s0 = iVar7 + 4;
      if (in_t2 <= (int)uVar3) {
        if (-1 < in_t0) {
          sVar11 = 0;
          if (*(char *)(in_t1 + 2) == '\x03') {
            sVar11 = *(short *)(in_t1 + 0x7e);
          }
          iVar9 = *(int *)(iVar8 + in_t0 * 4 + 0xc0);
          iVar8 = (int)*(short *)(iVar9 + 0x22) *
                  ((int)*(short *)(in_t1 + 0x36) - *(int *)(iVar9 + 0x34));
          if (-1 < ((int)*(short *)(in_t1 + 0x32) + (int)sVar11 +
                   ((int)*(short *)(in_t1 + 0x86) - (int)*(short *)(in_t1 + 0x84))) -
                   (*(int *)(iVar9 + 0x30) + (iVar8 >> 0xc))) {
            sVar2 = *(short *)(iVar9 + 0x30);
            *(undefined1 *)(in_t1 + 0x29) = 1;
            *(short *)(in_t1 + 0x32) =
                 (sVar2 - (*(short *)(in_t1 + 0x86) - *(short *)(in_t1 + 0x84))) - sVar11;
            *(int *)(in_t1 + 0x30) = *(int *)(in_t1 + 0x30) + iVar8 * 0x10;
            if ((*(char *)(in_t1 + 2) != '\a') || (-1 < *(short *)(in_t1 + 0x4a))) {
              *(short *)(in_t1 + 0x4a) = -(*(short *)(iVar9 + 0x22) >> 4);
            }
          }
        }
        return;
      }
      piVar1 = (int *)(iVar7 + 0xc4);
      iVar7 = unaff_s0;
    } while (in_a3 < *(int *)(*piVar1 + 0x34));
    uVar13 = CONCAT44(uVar3,*(undefined4 *)(iVar8 + iVar9 + 0xc0));
  } while( true );
}

