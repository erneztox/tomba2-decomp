// FUN_8012eed4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80137fb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8012eed4(int param_1,int param_2,undefined2 param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  short sVar4;
  int iVar5;
  short *psVar6;
  ushort *puVar7;
  int in_t0;
  undefined2 *puVar8;
  int in_t1;
  int iVar9;
  undefined2 *in_t2;
  uint uVar10;
  undefined2 *in_t5;
  ushort *puVar11;
  
  if (*(char *)(param_1 + 3) != '\0') {
    sVar4 = (short)param_2;
    *(short *)(param_1 + 0x60) = sVar4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(param_3) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar11 = *(ushort **)(*(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0) + 0x40);
    uVar10 = (uint)*puVar11;
    if ((*(byte *)(param_1 + 3) & 1) != 0) {
      if ((*(ushort *)(param_2 + 0x62) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(int *)(param_2 + 0x2c) =
           *(int *)(param_2 + 0x2c) +
           (int)*(short *)(param_2 + 0x48) * (int)*(short *)(param_2 + 0x4e);
      *(int *)(param_2 + 0x34) =
           *(int *)(param_2 + 0x34) +
           (int)*(short *)(param_2 + 0x4c) * (int)*(short *)(param_2 + 0x4e);
      FUN_801406e4(param_2);
      *(short *)(param_2 + 0x42) = *(short *)(param_2 + 0x42) + -1;
      return;
    }
    if (*(byte *)(param_1 + 3) == 2) {
      in_t2 = (undefined2 *)&DAT_8014c63c;
      in_t5 = (undefined2 *)&DAT_8014c74c;
    }
    iVar9 = 0;
    if (uVar10 != 0) {
      iVar5 = (int)sVar4;
      puVar7 = puVar11 + 0x18;
      psVar6 = (short *)(in_t0 + 0x30);
      puVar3 = (ushort *)(in_t1 + 0x30);
      puVar8 = in_t2 + 8;
      do {
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-8] - (int)(short)puVar3[-8] == -0x80000000)) {
          trap(0x1800);
        }
        *in_t2 = (short)(((int)psVar6[-8] - (int)(short)puVar3[-8]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-7] - (int)(short)puVar3[-7] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-7] = (short)(((int)psVar6[-7] - (int)(short)puVar3[-7]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-6] - (int)(short)puVar3[-6] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-6] = (short)(((int)psVar6[-6] - (int)(short)puVar3[-6]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-4] - (int)(short)puVar3[-4] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-5] = (short)(((int)psVar6[-4] - (int)(short)puVar3[-4]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-3] - (int)(short)puVar3[-3] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-4] = (short)(((int)psVar6[-3] - (int)(short)puVar3[-3]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-5] - (int)(short)puVar3[-5] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-3] = (short)(((int)psVar6[-5] - (int)(short)puVar3[-5]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-2] - (int)(short)puVar3[-2] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-2] = (short)(((int)psVar6[-2] - (int)(short)puVar3[-2]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-1] - (int)(short)puVar3[-1] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-1] = (short)(((int)psVar6[-1] - (int)(short)puVar3[-1]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)*psVar6 - (int)(short)*puVar3 == -0x80000000)) {
          trap(0x1800);
        }
        *puVar8 = (short)(((int)*psVar6 - (int)(short)*puVar3) / iVar5);
        puVar7[-8] = puVar3[-8];
        puVar7[-7] = puVar3[-7];
        puVar7[-6] = puVar3[-6];
        puVar7[-4] = puVar3[-4];
        iVar9 = iVar9 + 1;
        puVar7[-3] = puVar3[-3];
        in_t2 = in_t2 + 9;
        puVar7[-5] = puVar3[-5];
        psVar6 = psVar6 + 0x12;
        puVar7[-2] = puVar3[-2];
        puVar8 = puVar8 + 9;
        puVar7[-1] = puVar3[-1];
        uVar1 = *puVar3;
        puVar3 = puVar3 + 0x12;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 0x12;
      } while (iVar9 < (int)uVar10);
    }
    uVar1 = puVar11[1];
    iVar9 = 0;
    if (uVar1 != 0) {
      iVar5 = (int)sVar4;
      puVar11 = puVar11 + uVar10 * 0x12 + 0x1b;
      psVar6 = (short *)(in_t0 + uVar10 * 0x24 + 0x36);
      puVar3 = (ushort *)(in_t1 + uVar10 * 0x24 + 0x36);
      puVar8 = in_t5 + 0xb;
      do {
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-9] - (int)(short)puVar3[-9] == -0x80000000)) {
          trap(0x1800);
        }
        *in_t5 = (short)(((int)psVar6[-9] - (int)(short)puVar3[-9]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-8] - (int)(short)puVar3[-8] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-10] = (short)(((int)psVar6[-8] - (int)(short)puVar3[-8]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-7] - (int)(short)puVar3[-7] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-9] = (short)(((int)psVar6[-7] - (int)(short)puVar3[-7]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-5] - (int)(short)puVar3[-5] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-8] = (short)(((int)psVar6[-5] - (int)(short)puVar3[-5]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-4] - (int)(short)puVar3[-4] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-7] = (short)(((int)psVar6[-4] - (int)(short)puVar3[-4]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-6] - (int)(short)puVar3[-6] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-6] = (short)(((int)psVar6[-6] - (int)(short)puVar3[-6]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-3] - (int)(short)puVar3[-3] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-5] = (short)(((int)psVar6[-3] - (int)(short)puVar3[-3]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-2] - (int)(short)puVar3[-2] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-4] = (short)(((int)psVar6[-2] - (int)(short)puVar3[-2]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[-1] - (int)(short)puVar3[-1] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-3] = (short)(((int)psVar6[-1] - (int)(short)puVar3[-1]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[1] - (int)(short)puVar3[1] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-2] = (short)(((int)psVar6[1] - (int)(short)puVar3[1]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)psVar6[2] - (int)(short)puVar3[2] == -0x80000000)) {
          trap(0x1800);
        }
        puVar8[-1] = (short)(((int)psVar6[2] - (int)(short)puVar3[2]) / iVar5);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && ((int)*psVar6 - (int)(short)*puVar3 == -0x80000000)) {
          trap(0x1800);
        }
        *puVar8 = (short)(((int)*psVar6 - (int)(short)*puVar3) / iVar5);
        puVar11[-9] = puVar3[-9];
        puVar11[-8] = puVar3[-8];
        puVar11[-7] = puVar3[-7];
        puVar11[-5] = puVar3[-5];
        puVar11[-4] = puVar3[-4];
        puVar11[-6] = puVar3[-6];
        puVar11[-3] = puVar3[-3];
        iVar9 = iVar9 + 1;
        puVar11[-2] = puVar3[-2];
        in_t5 = in_t5 + 0xc;
        puVar11[-1] = puVar3[-1];
        psVar6 = psVar6 + 0x16;
        puVar11[1] = puVar3[1];
        puVar8 = puVar8 + 0xc;
        puVar11[2] = puVar3[2];
        uVar2 = *puVar3;
        puVar3 = puVar3 + 0x16;
        *puVar11 = uVar2;
        puVar11 = puVar11 + 0x16;
      } while (iVar9 < (int)(uint)uVar1);
    }
  }
  return;
}

