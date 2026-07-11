// FUN_801264f8

void FUN_801264f8(short *param_1,undefined4 param_2,short *param_3,short *param_4)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  undefined2 *in_t0;
  int in_t1;
  int in_t3;
  undefined2 *in_t5;
  undefined8 uVar5;
  
  if ((char)param_1[3] == '\0') {
    FUN_801314b4();
    *(char *)(param_1 + 3) = (char)param_1[3] + '\x01';
  }
  if ((param_1[0x3d] & 2U) == 0) {
    if ((param_1[0x30] & 0xf0U) == 0x40) {
      if ((param_1[0x3c] & 2U) != 0) {
        param_1[0x3c] = 0;
      }
    }
    else {
      psVar4 = (short *)0x1;
      psVar2 = param_1;
      uVar5 = FUN_80130788();
      iVar3 = (int)((ulonglong)uVar5 >> 0x20);
      uVar1 = 1;
      if ((int)uVar5 != 0) {
        *(undefined1 *)((int)param_1 + 5) = 1;
        *(undefined1 *)(param_1 + 3) = 0;
LAB_8012f59c:
        while( true ) {
          if (psVar4 == (short *)0x0) {
            trap(0x1c00);
          }
          if ((psVar4 == (short *)0xffffffff) && (uVar1 - iVar3 == -0x80000000)) {
            trap(0x1800);
          }
          in_t0[-2] = (short)((int)(uVar1 - iVar3) / (int)psVar4);
          if (psVar4 == (short *)0x0) {
            trap(0x1c00);
          }
          if ((psVar4 == (short *)0xffffffff) && ((int)param_3[2] - (int)psVar2[2] == -0x80000000))
          {
            trap(0x1800);
          }
          in_t0[-1] = (short)(((int)param_3[2] - (int)psVar2[2]) / (int)psVar4);
          if (psVar4 == (short *)0x0) {
            trap(0x1c00);
          }
          if ((psVar4 == (short *)0xffffffff) && ((int)*param_3 - (int)*psVar2 == -0x80000000)) {
            trap(0x1800);
          }
          *in_t0 = (short)(((int)*param_3 - (int)*psVar2) / (int)psVar4);
          param_4[-9] = psVar2[-9];
          param_4[-8] = psVar2[-8];
          param_4[-7] = psVar2[-7];
          param_4[-5] = psVar2[-5];
          param_4[-4] = psVar2[-4];
          param_4[-6] = psVar2[-6];
          param_4[-3] = psVar2[-3];
          in_t1 = in_t1 + 1;
          param_4[-2] = psVar2[-2];
          in_t5 = in_t5 + 0xc;
          param_4[-1] = psVar2[-1];
          param_4[1] = psVar2[1];
          param_4[2] = psVar2[2];
          *param_4 = *psVar2;
          param_4 = param_4 + 0x16;
          if (in_t3 <= in_t1) break;
          if (psVar4 == (short *)0x0) {
            trap(0x1c00);
          }
          if ((psVar4 == (short *)0xffffffff) &&
             ((int)param_3[0xd] - (int)psVar2[0xd] == -0x80000000)) {
            trap(0x1800);
          }
          *in_t5 = (short)(((int)param_3[0xd] - (int)psVar2[0xd]) / (int)psVar4);
          if (psVar4 == (short *)0x0) {
            trap(0x1c00);
          }
          if ((psVar4 == (short *)0xffffffff) &&
             ((int)param_3[0xe] - (int)psVar2[0xe] == -0x80000000)) {
            trap(0x1800);
          }
          in_t0[2] = (short)(((int)param_3[0xe] - (int)psVar2[0xe]) / (int)psVar4);
          if (psVar4 == (short *)0x0) {
            trap(0x1c00);
          }
          if ((psVar4 == (short *)0xffffffff) &&
             ((int)param_3[0xf] - (int)psVar2[0xf] == -0x80000000)) {
            trap(0x1800);
          }
          in_t0[3] = (short)(((int)param_3[0xf] - (int)psVar2[0xf]) / (int)psVar4);
          if (psVar4 == (short *)0x0) {
            trap(0x1c00);
          }
          if ((psVar4 == (short *)0xffffffff) &&
             ((int)param_3[0x11] - (int)psVar2[0x11] == -0x80000000)) {
            trap(0x1800);
          }
          in_t0[4] = (short)(((int)param_3[0x11] - (int)psVar2[0x11]) / (int)psVar4);
          if (psVar4 == (short *)0x0) {
            trap(0x1c00);
          }
          if ((psVar4 == (short *)0xffffffff) &&
             ((int)param_3[0x12] - (int)psVar2[0x12] == -0x80000000)) {
            trap(0x1800);
          }
          in_t0[5] = (short)(((int)param_3[0x12] - (int)psVar2[0x12]) / (int)psVar4);
          if (psVar4 == (short *)0x0) {
            trap(0x1c00);
          }
          if ((psVar4 == (short *)0xffffffff) &&
             ((int)param_3[0x10] - (int)psVar2[0x10] == -0x80000000)) {
            trap(0x1800);
          }
          in_t0[6] = (short)(((int)param_3[0x10] - (int)psVar2[0x10]) / (int)psVar4);
          if (psVar4 == (short *)0x0) {
            trap(0x1c00);
          }
          if ((psVar4 == (short *)0xffffffff) &&
             ((int)param_3[0x13] - (int)psVar2[0x13] == -0x80000000)) {
            trap(0x1800);
          }
          in_t0[7] = (short)(((int)param_3[0x13] - (int)psVar2[0x13]) / (int)psVar4);
          if (psVar4 == (short *)0x0) {
            trap(0x1c00);
          }
          if ((psVar4 == (short *)0xffffffff) &&
             ((int)param_3[0x14] - (int)psVar2[0x14] == -0x80000000)) {
            trap(0x1800);
          }
          in_t0[8] = (short)(((int)param_3[0x14] - (int)psVar2[0x14]) / (int)psVar4);
          if (psVar4 == (short *)0x0) {
            trap(0x1c00);
          }
          if ((psVar4 == (short *)0xffffffff) &&
             ((int)param_3[0x15] - (int)psVar2[0x15] == -0x80000000)) {
            trap(0x1800);
          }
          in_t0[9] = (short)(((int)param_3[0x15] - (int)psVar2[0x15]) / (int)psVar4);
          uVar1 = (uint)param_3[0x17];
          iVar3 = (int)psVar2[0x17];
          psVar2 = psVar2 + 0x16;
          param_3 = param_3 + 0x16;
          in_t0 = in_t0 + 0xc;
        }
        return;
      }
      if ((*(char *)((int)param_1 + 3) == '\x02') &&
         (psVar4 = (short *)(uint)(ushort)param_1[0x32],
         (int)param_1[0x2a] != ((uint)psVar4 & 0xfff))) {
        param_3 = *(short **)(param_1 + 0x62);
        psVar2 = (short *)((ushort)param_3[4] - 4);
        if (0x800 < (int)psVar2 * 0x10000 >> 0x10) {
          psVar2 = (short *)((uint)psVar2 | 0xf000);
        }
        iVar3 = (int)psVar2 << 0x10;
        if (iVar3 <= (int)psVar4 << 0x10) {
          psVar2 = psVar4;
        }
        uVar1 = (uint)psVar2 & 0xfff;
        param_3[4] = (short)uVar1;
        goto LAB_8012f59c;
      }
    }
    FUN_801308e0(param_1);
  }
  return;
}

