// FUN_80122598

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80122598(void)

{
  int *piVar1;
  short sVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  short sVar11;
  uint uVar12;
  short in_t0;
  int in_t1;
  int in_t2;
  uint uVar13;
  uint *unaff_s2;
  uint *puVar14;
  int unaff_s3;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  undefined2 uStack00000010;
  short sStack00000016;
  undefined2 uStack0000001a;
  
  DAT_800e7e85 = 0x22;
  DAT_800e7e86 = 0;
  DAT_800bf9de = 0xc;
  *(char *)((int)unaff_s2 + 5) = *(char *)((int)unaff_s2 + 5) + '\x01';
  *(undefined2 *)(unaff_s2[0x30] + 0x16) = 0;
  *(undefined2 *)(unaff_s2[0x30] + 0x12) = 1;
  *(undefined1 *)((int)unaff_s2 + 0x5f) = 0;
  if (*(char *)((int)unaff_s2 + 0x5f) == '\0') {
    func_0x80074590(6,4,0x1e);
    return;
  }
  *(char *)((int)unaff_s2 + 0x5f) = *(char *)((int)unaff_s2 + 0x5f) + -1;
  FUN_8012a54c();
  uVar3 = unaff_s2[0x30];
  *(short *)(uVar3 + 10) = *(short *)(uVar3 + 10) + *(short *)(uVar3 + 0x16);
  uVar3 = unaff_s2[0x30];
  uVar12 = (uint)*(ushort *)(uVar3 + 0x12);
  *(ushort *)(uVar3 + 0x16) = *(short *)(uVar3 + 0x16) + *(ushort *)(uVar3 + 0x12);
  FUN_8012a814(&DAT_800e7eac,1,2);
  _DAT_800e7ed6 =
       func_0x80085690(-((int)(((uint)*(ushort *)(_DAT_1f800218 + 0x36) - (uint)_DAT_800e7eb6) *
                              0x10000) >> 0x10),
                       (int)(((uint)*(ushort *)(_DAT_1f800218 + 0x2e) - (uint)_DAT_800e7eae) *
                            0x10000) >> 0x10);
  if (0x30 < *(short *)(unaff_s2[0x30] + 0x16)) {
    *(char *)((int)unaff_s2 + 5) = *(char *)((int)unaff_s2 + 5) + '\x01';
    DAT_800bf9de = 0xd;
    func_0x80054d14(&DAT_800e7e80,0x71,0);
    func_0x8006cbd0();
    puVar7 = (undefined4 *)&stack0x00000010;
    _uStack00000010 = CONCAT22(*(undefined2 *)((int)unaff_s2 + 0x2e),uStack00000010);
    iVar5 = (int)_DAT_8014a246;
    sStack00000016 = *(short *)((int)unaff_s2 + 0x32) + *(short *)(unaff_s2[0x30] + 2);
    uStack0000001a = *(undefined2 *)((int)unaff_s2 + 0x36);
    uVar13 = unaff_s2[0x30];
    iVar8 = -100;
    uVar3 = func_0x8003116c();
    if (uVar3 != 0) {
      *(uint *)(uVar3 + 0x10) = uVar13;
      uVar13 = *(byte *)(uVar3 + 0x28) | 0x80;
      *(char *)(uVar3 + 0x28) = (char)uVar13;
      do {
        iVar6 = iVar5;
        if ((int)uVar12 < *(int *)(uVar13 + 0x34)) {
          *(undefined2 *)(unaff_s2 + 4) = 0;
          iVar8 = uVar12 - 0x42fc;
          *(short *)(unaff_s2 + 6) =
               (short)((int)(short)unaff_s2[8] + (int)*(short *)(unaff_s4 + 0x84) >> 1);
          *(short *)((int)unaff_s2 + 0x12) =
               (short)((int)*(short *)((int)unaff_s2 + 10) + (int)*(short *)(unaff_s6 + 2) >> 1);
          *(short *)((int)unaff_s2 + 0x1a) =
               (short)((int)*(short *)((int)unaff_s2 + 0x22) + (int)*(short *)(unaff_s6 + 2) >> 1);
          uVar12 = (uint)(ushort)unaff_s2[2] + (uint)*(ushort *)((int)unaff_s2 + 10) & 0xf;
          uVar10 = (uint)*(byte *)(uVar12 + iVar8);
          uVar13 = uVar12 + 4 & 0xf;
          uVar10 = uVar10 << 0x10 | uVar10 << 8 | 0x5e000000 | uVar10;
          unaff_s2[1] = uVar10;
          unaff_s2[0xb] = uVar10;
          uVar12 = (uint)*(byte *)(uVar13 + iVar8);
          uVar13 = uVar13 + 4 & 0xf;
          uVar12 = uVar12 << 0x10 | uVar12 << 8 | uVar12;
          unaff_s2[3] = uVar12;
          unaff_s2[0xd] = uVar12;
          uVar12 = (uint)*(byte *)(uVar13 + iVar8);
          uVar12 = uVar12 << 0x10 | uVar12 << 8 | uVar12;
          unaff_s2[5] = uVar12;
          unaff_s2[0xf] = uVar12;
          uVar12 = (uint)*(byte *)((uVar13 + 4 & 0xf) + iVar8);
          uVar12 = uVar12 << 0x10 | uVar12 << 8 | uVar12;
          unaff_s2[7] = uVar12;
          unaff_s2[0x11] = uVar12;
          puVar4 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
          *unaff_s2 = *puVar4 | 0x9000000;
          *puVar4 = (uint)unaff_s2;
          unaff_s2[0xc] = unaff_s2[2];
          unaff_s2[0xe] = unaff_s2[4];
          unaff_s2[0x13] = uVar3;
          unaff_s2[0x10] = unaff_s2[6];
          unaff_s2[0x12] = unaff_s2[8];
          *(short *)((int)unaff_s2 + 0x32) = *(short *)((int)unaff_s2 + 0x32) + 1;
          *(short *)((int)unaff_s2 + 0x3a) = *(short *)((int)unaff_s2 + 0x3a) + 1;
          *(short *)((int)unaff_s2 + 0x42) = *(short *)((int)unaff_s2 + 0x42) + 1;
          *(short *)((int)unaff_s2 + 0x4a) = *(short *)((int)unaff_s2 + 0x4a) + 1;
          puVar4 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
          unaff_s2[10] = *puVar4 | 0x9000000;
          *puVar4 = (uint)(unaff_s2 + 10);
          puVar14 = unaff_s2 + 0x14;
          _uStack00000010 = 0;
          func_0x80083de0(puVar14,0,1,0x75);
          puVar4 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
          *puVar14 = *puVar4 | 0x2000000;
          *puVar4 = (uint)puVar14;
          *(uint **)(unaff_s7 + -0xabc) = unaff_s2 + 0x17;
          return;
        }
        do {
          iVar9 = iVar8;
          iVar8 = iVar9 + 4;
          uVar3 = uVar3 + 1;
          iVar5 = iVar6 + 4;
          if (in_t2 <= (int)uVar3) {
            if (-1 < in_t0) {
              sVar11 = 0;
              if (*(char *)(in_t1 + 2) == '\x03') {
                sVar11 = *(short *)(in_t1 + 0x7e);
              }
              iVar5 = puVar7[in_t0 + 0x30];
              iVar8 = (int)*(short *)(iVar5 + 0x22) *
                      ((int)*(short *)(in_t1 + 0x36) - *(int *)(iVar5 + 0x34));
              if (-1 < ((int)*(short *)(in_t1 + 0x32) + (int)sVar11 +
                       ((int)*(short *)(in_t1 + 0x86) - (int)*(short *)(in_t1 + 0x84))) -
                       (*(int *)(iVar5 + 0x30) + (iVar8 >> 0xc))) {
                sVar2 = *(short *)(iVar5 + 0x30);
                *(undefined1 *)(in_t1 + 0x29) = 1;
                *(short *)(in_t1 + 0x32) =
                     (sVar2 - (*(short *)(in_t1 + 0x86) - *(short *)(in_t1 + 0x84))) - sVar11;
                *(int *)(in_t1 + 0x30) = *(int *)(in_t1 + 0x30) + iVar8 * 0x10;
                if ((*(char *)(in_t1 + 2) != '\a') || (-1 < *(short *)(in_t1 + 0x4a))) {
                  *(short *)(in_t1 + 0x4a) = -(*(short *)(iVar5 + 0x22) >> 4);
                }
              }
            }
            return;
          }
          piVar1 = (int *)(iVar6 + 0xc4);
          iVar6 = iVar5;
        } while ((int)uVar12 < *(int *)(*piVar1 + 0x34));
        uVar13 = *(uint *)((int)puVar7 + iVar9 + 0xc4);
      } while( true );
    }
  }
  return;
}

