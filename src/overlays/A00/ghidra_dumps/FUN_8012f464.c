// FUN_8012f464

void FUN_8012f464(short *param_1,int param_2,short *param_3,short *param_4)

{
  int in_v0;
  short *psVar1;
  short *psVar2;
  undefined2 *in_t0;
  undefined2 *puVar3;
  int in_t1;
  int in_t3;
  undefined2 *in_t5;
  int in_lo;
  
  do {
    psVar1 = param_1;
    psVar2 = param_3;
    puVar3 = in_t0;
    if (in_v0 == -0x80000000) {
      trap(0x1800);
    }
    do {
      puVar3[-7] = (short)in_lo;
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)psVar2[-6] - (int)psVar1[-6] == -0x80000000)) {
        trap(0x1800);
      }
      puVar3[-6] = (short)(((int)psVar2[-6] - (int)psVar1[-6]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)psVar2[-3] - (int)psVar1[-3] == -0x80000000)) {
        trap(0x1800);
      }
      puVar3[-5] = (short)(((int)psVar2[-3] - (int)psVar1[-3]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)psVar2[-2] - (int)psVar1[-2] == -0x80000000)) {
        trap(0x1800);
      }
      puVar3[-4] = (short)(((int)psVar2[-2] - (int)psVar1[-2]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)psVar2[-1] - (int)psVar1[-1] == -0x80000000)) {
        trap(0x1800);
      }
      puVar3[-3] = (short)(((int)psVar2[-1] - (int)psVar1[-1]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)psVar2[1] - (int)psVar1[1] == -0x80000000)) {
        trap(0x1800);
      }
      puVar3[-2] = (short)(((int)psVar2[1] - (int)psVar1[1]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)psVar2[2] - (int)psVar1[2] == -0x80000000)) {
        trap(0x1800);
      }
      puVar3[-1] = (short)(((int)psVar2[2] - (int)psVar1[2]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)*psVar2 - (int)*psVar1 == -0x80000000)) {
        trap(0x1800);
      }
      *puVar3 = (short)(((int)*psVar2 - (int)*psVar1) / param_2);
      param_4[-9] = psVar1[-9];
      param_4[-8] = psVar1[-8];
      param_4[-7] = psVar1[-7];
      param_4[-5] = psVar1[-5];
      param_4[-4] = psVar1[-4];
      param_4[-6] = psVar1[-6];
      param_4[-3] = psVar1[-3];
      in_t1 = in_t1 + 1;
      param_4[-2] = psVar1[-2];
      in_t5 = in_t5 + 0xc;
      param_4[-1] = psVar1[-1];
      param_3 = psVar2 + 0x16;
      param_4[1] = psVar1[1];
      in_t0 = puVar3 + 0xc;
      param_4[2] = psVar1[2];
      param_1 = psVar1 + 0x16;
      *param_4 = *psVar1;
      param_4 = param_4 + 0x16;
      if (in_t3 <= in_t1) {
        return;
      }
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)psVar2[0xd] - (int)psVar1[0xd] == -0x80000000)) {
        trap(0x1800);
      }
      *in_t5 = (short)(((int)psVar2[0xd] - (int)psVar1[0xd]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)psVar2[0xe] - (int)psVar1[0xe] == -0x80000000)) {
        trap(0x1800);
      }
      puVar3[2] = (short)(((int)psVar2[0xe] - (int)psVar1[0xe]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)psVar2[0xf] - (int)psVar1[0xf] == -0x80000000)) {
        trap(0x1800);
      }
      puVar3[3] = (short)(((int)psVar2[0xf] - (int)psVar1[0xf]) / param_2);
      if (param_2 == 0) {
        trap(0x1c00);
      }
      if ((param_2 == -1) && ((int)psVar2[0x11] - (int)psVar1[0x11] == -0x80000000)) {
        trap(0x1800);
      }
      puVar3[4] = (short)(((int)psVar2[0x11] - (int)psVar1[0x11]) / param_2);
      in_v0 = (int)psVar2[0x12] - (int)psVar1[0x12];
      in_lo = in_v0 / param_2;
      if (param_2 == 0) {
        trap(0x1c00);
      }
      psVar1 = param_1;
      psVar2 = param_3;
      puVar3 = in_t0;
    } while (param_2 != -1);
  } while( true );
}

