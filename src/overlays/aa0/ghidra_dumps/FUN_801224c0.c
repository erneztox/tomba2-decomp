// FUN_801224c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801224c0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int in_v1;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  short in_t0;
  int in_t1;
  int in_t2;
  int unaff_s1;
  uint *unaff_s2;
  uint *puVar11;
  int unaff_s3;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  undefined8 uVar12;
  
  *(undefined1 *)(in_v1 + -0x622) = 0xb;
  uVar12 = func_0x8006cdcc();
  do {
    uVar4 = (uint)((ulonglong)uVar12 >> 0x20);
    iVar8 = unaff_s1;
    if (param_4 < *(int *)((int)uVar12 + 0x34)) {
      *(undefined2 *)(unaff_s2 + 4) = 0;
      param_4 = param_4 + -0x42fc;
      *(short *)(unaff_s2 + 6) =
           (short)((int)(short)unaff_s2[8] + (int)*(short *)(unaff_s4 + 0x84) >> 1);
      *(short *)((int)unaff_s2 + 0x12) =
           (short)((int)*(short *)((int)unaff_s2 + 10) + (int)*(short *)(unaff_s6 + 2) >> 1);
      *(short *)((int)unaff_s2 + 0x1a) =
           (short)((int)*(short *)((int)unaff_s2 + 0x22) + (int)*(short *)(unaff_s6 + 2) >> 1);
      uVar5 = (uint)(ushort)unaff_s2[2] + (uint)*(ushort *)((int)unaff_s2 + 10) & 0xf;
      uVar9 = (uint)*(byte *)(uVar5 + param_4);
      uVar6 = uVar5 + 4 & 0xf;
      uVar9 = uVar9 << 0x10 | uVar9 << 8 | 0x5e000000 | uVar9;
      unaff_s2[1] = uVar9;
      unaff_s2[0xb] = uVar9;
      uVar5 = (uint)*(byte *)(uVar6 + param_4);
      uVar6 = uVar6 + 4 & 0xf;
      uVar5 = uVar5 << 0x10 | uVar5 << 8 | uVar5;
      unaff_s2[3] = uVar5;
      unaff_s2[0xd] = uVar5;
      uVar5 = (uint)*(byte *)(uVar6 + param_4);
      uVar5 = uVar5 << 0x10 | uVar5 << 8 | uVar5;
      unaff_s2[5] = uVar5;
      unaff_s2[0xf] = uVar5;
      uVar5 = (uint)*(byte *)((uVar6 + 4 & 0xf) + param_4);
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
      puVar11 = unaff_s2 + 0x14;
      func_0x80083de0(puVar11,0,1,0x75);
      puVar7 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
      *puVar11 = *puVar7 | 0x2000000;
      *puVar7 = (uint)puVar11;
      *(uint **)(unaff_s7 + -0xabc) = unaff_s2 + 0x17;
      return;
    }
    do {
      param_3 = param_3 + 4;
      uVar4 = uVar4 + 1;
      unaff_s1 = iVar8 + 4;
      if (in_t2 <= (int)uVar4) {
        if (-1 < in_t0) {
          sVar10 = 0;
          if (*(char *)(in_t1 + 2) == '\x03') {
            sVar10 = *(short *)(in_t1 + 0x7e);
          }
          iVar3 = *(int *)(param_2 + in_t0 * 4 + 0xc0);
          iVar8 = (int)*(short *)(iVar3 + 0x22) *
                  ((int)*(short *)(in_t1 + 0x36) - *(int *)(iVar3 + 0x34));
          if (-1 < ((int)*(short *)(in_t1 + 0x32) + (int)sVar10 +
                   ((int)*(short *)(in_t1 + 0x86) - (int)*(short *)(in_t1 + 0x84))) -
                   (*(int *)(iVar3 + 0x30) + (iVar8 >> 0xc))) {
            sVar2 = *(short *)(iVar3 + 0x30);
            *(undefined1 *)(in_t1 + 0x29) = 1;
            *(short *)(in_t1 + 0x32) =
                 (sVar2 - (*(short *)(in_t1 + 0x86) - *(short *)(in_t1 + 0x84))) - sVar10;
            *(int *)(in_t1 + 0x30) = *(int *)(in_t1 + 0x30) + iVar8 * 0x10;
            if ((*(char *)(in_t1 + 2) != '\a') || (-1 < *(short *)(in_t1 + 0x4a))) {
              *(short *)(in_t1 + 0x4a) = -(*(short *)(iVar3 + 0x22) >> 4);
            }
          }
        }
        return;
      }
      piVar1 = (int *)(iVar8 + 0xc4);
      iVar8 = unaff_s1;
    } while (param_4 < *(int *)(*piVar1 + 0x34));
    uVar12 = CONCAT44(uVar4,*(undefined4 *)(param_2 + param_3 + 0xc0));
  } while( true );
}

