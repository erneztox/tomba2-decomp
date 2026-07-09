// FUN_80122d38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80122d38(void)

{
  int *piVar1;
  int in_v0;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  short sVar12;
  int in_t1;
  int in_t2;
  int unaff_s1;
  uint *unaff_s2;
  uint *puVar13;
  int unaff_s3;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  undefined8 uVar14;
  
  if (in_v0 == 0) {
    func_0x80074590(6,4,0x1e);
    return;
  }
  *(char *)((int)unaff_s2 + 0x5f) = (char)in_v0 + -1;
  uVar11 = unaff_s2[0x10];
  *(short *)(unaff_s2 + 0x10) = (short)uVar11 + -1;
  if ((short)uVar11 == 1) {
    *(char *)((int)unaff_s2 + 5) = *(char *)((int)unaff_s2 + 5) + '\x01';
    *(undefined1 *)(unaff_s1 + 0x76) = 0;
    *(undefined2 *)(unaff_s2 + 0x10) = 0x3c;
    func_0x8006cbd0();
    puVar5 = &DAT_800e7e80;
    iVar7 = 2;
    iVar8 = 2;
    *(undefined2 *)(unaff_s1 + 0x3a) = *(undefined2 *)((int)unaff_s2 + 0x2e);
    sVar12 = 0;
    *(undefined2 *)(unaff_s1 + 0x42) = *(undefined2 *)((int)unaff_s2 + 0x36);
    uVar11 = (uint)*(ushort *)(unaff_s2[0x30] + 2);
    DAT_800bf9de = 0x12;
    *(ushort *)(unaff_s1 + 0x3e) =
         *(short *)((int)unaff_s2 + 0x32) + *(ushort *)(unaff_s2[0x30] + 2);
    uVar14 = func_0x80054d14();
    do {
      uVar2 = (uint)((ulonglong)uVar14 >> 0x20);
      puVar6 = puVar5;
      if ((int)uVar11 < *(int *)((int)uVar14 + 0x34)) {
        *(undefined2 *)(unaff_s2 + 4) = 0;
        iVar7 = uVar11 - 0x42fc;
        *(short *)(unaff_s2 + 6) =
             (short)((int)(short)unaff_s2[8] + (int)*(short *)(unaff_s4 + 0x84) >> 1);
        *(short *)((int)unaff_s2 + 0x12) =
             (short)((int)*(short *)((int)unaff_s2 + 10) + (int)*(short *)(unaff_s6 + 2) >> 1);
        *(short *)((int)unaff_s2 + 0x1a) =
             (short)((int)*(short *)((int)unaff_s2 + 0x22) + (int)*(short *)(unaff_s6 + 2) >> 1);
        uVar11 = (uint)(ushort)unaff_s2[2] + (uint)*(ushort *)((int)unaff_s2 + 10) & 0xf;
        uVar9 = (uint)*(byte *)(uVar11 + iVar7);
        uVar3 = uVar11 + 4 & 0xf;
        uVar9 = uVar9 << 0x10 | uVar9 << 8 | 0x5e000000 | uVar9;
        unaff_s2[1] = uVar9;
        unaff_s2[0xb] = uVar9;
        uVar11 = (uint)*(byte *)(uVar3 + iVar7);
        uVar3 = uVar3 + 4 & 0xf;
        uVar11 = uVar11 << 0x10 | uVar11 << 8 | uVar11;
        unaff_s2[3] = uVar11;
        unaff_s2[0xd] = uVar11;
        uVar11 = (uint)*(byte *)(uVar3 + iVar7);
        uVar11 = uVar11 << 0x10 | uVar11 << 8 | uVar11;
        unaff_s2[5] = uVar11;
        unaff_s2[0xf] = uVar11;
        uVar11 = (uint)*(byte *)((uVar3 + 4 & 0xf) + iVar7);
        uVar11 = uVar11 << 0x10 | uVar11 << 8 | uVar11;
        unaff_s2[7] = uVar11;
        unaff_s2[0x11] = uVar11;
        puVar4 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
        *unaff_s2 = *puVar4 | 0x9000000;
        *puVar4 = (uint)unaff_s2;
        unaff_s2[0xc] = unaff_s2[2];
        unaff_s2[0xe] = unaff_s2[4];
        unaff_s2[0x13] = uVar2;
        unaff_s2[0x10] = unaff_s2[6];
        unaff_s2[0x12] = unaff_s2[8];
        *(short *)((int)unaff_s2 + 0x32) = *(short *)((int)unaff_s2 + 0x32) + 1;
        *(short *)((int)unaff_s2 + 0x3a) = *(short *)((int)unaff_s2 + 0x3a) + 1;
        *(short *)((int)unaff_s2 + 0x42) = *(short *)((int)unaff_s2 + 0x42) + 1;
        *(short *)((int)unaff_s2 + 0x4a) = *(short *)((int)unaff_s2 + 0x4a) + 1;
        puVar4 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
        unaff_s2[10] = *puVar4 | 0x9000000;
        *puVar4 = (uint)(unaff_s2 + 10);
        puVar13 = unaff_s2 + 0x14;
        func_0x80083de0(puVar13,0,1,0x75);
        puVar4 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
        *puVar13 = *puVar4 | 0x2000000;
        *puVar4 = (uint)puVar13;
        *(uint **)(unaff_s7 + -0xabc) = unaff_s2 + 0x17;
        return;
      }
      do {
        iVar8 = iVar8 + 4;
        uVar2 = uVar2 + 1;
        puVar5 = puVar6 + 4;
        if (in_t2 <= (int)uVar2) {
          if (-1 < sVar12) {
            sVar10 = 0;
            if (*(char *)(in_t1 + 2) == '\x03') {
              sVar10 = *(short *)(in_t1 + 0x7e);
            }
            iVar8 = *(int *)(iVar7 + sVar12 * 4 + 0xc0);
            iVar7 = (int)*(short *)(iVar8 + 0x22) *
                    ((int)*(short *)(in_t1 + 0x36) - *(int *)(iVar8 + 0x34));
            if (-1 < ((int)*(short *)(in_t1 + 0x32) + (int)sVar10 +
                     ((int)*(short *)(in_t1 + 0x86) - (int)*(short *)(in_t1 + 0x84))) -
                     (*(int *)(iVar8 + 0x30) + (iVar7 >> 0xc))) {
              sVar12 = *(short *)(iVar8 + 0x30);
              *(undefined1 *)(in_t1 + 0x29) = 1;
              *(short *)(in_t1 + 0x32) =
                   (sVar12 - (*(short *)(in_t1 + 0x86) - *(short *)(in_t1 + 0x84))) - sVar10;
              *(int *)(in_t1 + 0x30) = *(int *)(in_t1 + 0x30) + iVar7 * 0x10;
              if ((*(char *)(in_t1 + 2) != '\a') || (-1 < *(short *)(in_t1 + 0x4a))) {
                *(short *)(in_t1 + 0x4a) = -(*(short *)(iVar8 + 0x22) >> 4);
              }
            }
          }
          return;
        }
        piVar1 = (int *)(puVar6 + 0xc4);
        puVar6 = puVar5;
      } while ((int)uVar11 < *(int *)(*piVar1 + 0x34));
      uVar14 = CONCAT44(uVar2,*(undefined4 *)(iVar7 + iVar8 + 0xc0));
    } while( true );
  }
  return;
}

