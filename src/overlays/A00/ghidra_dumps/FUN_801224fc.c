// FUN_801224fc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_801224fc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  short sVar2;
  char in_v0;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  short in_t0;
  int in_t1;
  int in_t2;
  uint uVar11;
  uint *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  undefined8 uVar12;
  short sStack00000016;
  undefined2 uStack0000001a;
  
  *(char *)((int)unaff_s2 + 5) = in_v0 + '\x01';
  sStack00000016 = *(short *)((int)unaff_s2 + 0x32) + *(short *)(unaff_s2[0x30] + 2);
  uStack0000001a = *(undefined2 *)((int)unaff_s2 + 0x36);
  uVar11 = unaff_s2[0x30];
  iVar8 = -100;
  iVar3 = func_0x8003116c((int)*(short *)(param_1 + -0x5dbc));
  if (iVar3 != 0) {
    *(uint *)(iVar3 + 0x10) = uVar11;
    *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(iVar3) {
    case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      return;
    }
  }
  iVar3 = 0;
  puVar6 = unaff_s2;
  uVar12 = FUN_8012a54c();
  do {
    uVar11 = (uint)((ulonglong)uVar12 >> 0x20);
    puVar7 = puVar6;
    if (param_4 < *(int *)((int)uVar12 + 0x34)) {
      *(undefined2 *)(unaff_s2 + 4) = 0;
      param_4 = param_4 + -0x42fc;
      *(short *)(unaff_s2 + 6) =
           (short)((int)(short)unaff_s2[8] + (int)*(short *)(unaff_s4 + 0x84) >> 1);
      *(short *)((int)unaff_s2 + 0x12) =
           (short)((int)*(short *)((int)unaff_s2 + 10) + (int)*(short *)(unaff_s6 + 2) >> 1);
      *(short *)((int)unaff_s2 + 0x1a) =
           (short)((int)*(short *)((int)unaff_s2 + 0x22) + (int)*(short *)(unaff_s6 + 2) >> 1);
      uVar4 = (uint)(ushort)unaff_s2[2] + (uint)*(ushort *)((int)unaff_s2 + 10) & 0xf;
      uVar9 = (uint)*(byte *)(uVar4 + param_4);
      uVar5 = uVar4 + 4 & 0xf;
      uVar9 = uVar9 << 0x10 | uVar9 << 8 | 0x5e000000 | uVar9;
      unaff_s2[1] = uVar9;
      unaff_s2[0xb] = uVar9;
      uVar4 = (uint)*(byte *)(uVar5 + param_4);
      uVar5 = uVar5 + 4 & 0xf;
      uVar4 = uVar4 << 0x10 | uVar4 << 8 | uVar4;
      unaff_s2[3] = uVar4;
      unaff_s2[0xd] = uVar4;
      uVar4 = (uint)*(byte *)(uVar5 + param_4);
      uVar4 = uVar4 << 0x10 | uVar4 << 8 | uVar4;
      unaff_s2[5] = uVar4;
      unaff_s2[0xf] = uVar4;
      uVar4 = (uint)*(byte *)((uVar5 + 4 & 0xf) + param_4);
      uVar4 = uVar4 << 0x10 | uVar4 << 8 | uVar4;
      unaff_s2[7] = uVar4;
      unaff_s2[0x11] = uVar4;
      puVar6 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
      *unaff_s2 = *puVar6 | 0x9000000;
      *puVar6 = (uint)unaff_s2;
      unaff_s2[0xc] = unaff_s2[2];
      unaff_s2[0xe] = unaff_s2[4];
      unaff_s2[0x13] = uVar11;
      unaff_s2[0x10] = unaff_s2[6];
      unaff_s2[0x12] = unaff_s2[8];
      *(short *)((int)unaff_s2 + 0x32) = *(short *)((int)unaff_s2 + 0x32) + 1;
      *(short *)((int)unaff_s2 + 0x3a) = *(short *)((int)unaff_s2 + 0x3a) + 1;
      *(short *)((int)unaff_s2 + 0x42) = *(short *)((int)unaff_s2 + 0x42) + 1;
      *(short *)((int)unaff_s2 + 0x4a) = *(short *)((int)unaff_s2 + 0x4a) + 1;
      puVar6 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
      unaff_s2[10] = *puVar6 | 0x9000000;
      *puVar6 = (uint)(unaff_s2 + 10);
      puVar7 = unaff_s2 + 0x14;
      func_0x80083de0(puVar7,0,1,0x75);
      puVar6 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
      *puVar7 = *puVar6 | 0x2000000;
      *puVar6 = (uint)puVar7;
      *(uint **)(unaff_s7 + -0xabc) = unaff_s2 + 0x17;
      return;
    }
    do {
      iVar8 = iVar8 + 4;
      uVar11 = uVar11 + 1;
      puVar6 = puVar7 + 1;
      if (in_t2 <= (int)uVar11) {
        if (-1 < in_t0) {
          sVar10 = 0;
          if (*(char *)(in_t1 + 2) == '\x03') {
            sVar10 = *(short *)(in_t1 + 0x7e);
          }
          iVar8 = *(int *)(iVar3 + in_t0 * 4 + 0xc0);
          iVar3 = (int)*(short *)(iVar8 + 0x22) *
                  ((int)*(short *)(in_t1 + 0x36) - *(int *)(iVar8 + 0x34));
          if (-1 < ((int)*(short *)(in_t1 + 0x32) + (int)sVar10 +
                   ((int)*(short *)(in_t1 + 0x86) - (int)*(short *)(in_t1 + 0x84))) -
                   (*(int *)(iVar8 + 0x30) + (iVar3 >> 0xc))) {
            sVar2 = *(short *)(iVar8 + 0x30);
            *(undefined1 *)(in_t1 + 0x29) = 1;
            *(short *)(in_t1 + 0x32) =
                 (sVar2 - (*(short *)(in_t1 + 0x86) - *(short *)(in_t1 + 0x84))) - sVar10;
            *(int *)(in_t1 + 0x30) = *(int *)(in_t1 + 0x30) + iVar3 * 0x10;
            if ((*(char *)(in_t1 + 2) != '\a') || (-1 < *(short *)(in_t1 + 0x4a))) {
              *(short *)(in_t1 + 0x4a) = -(*(short *)(iVar8 + 0x22) >> 4);
            }
          }
        }
        return;
      }
      puVar1 = puVar7 + 0x31;
      puVar7 = puVar6;
    } while (param_4 < *(int *)(*puVar1 + 0x34));
    uVar12 = CONCAT44(uVar11,*(undefined4 *)(iVar3 + iVar8 + 0xc0));
  } while( true );
}

