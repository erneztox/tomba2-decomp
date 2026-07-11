// FUN_80126414

/* WARNING: Removing unreachable block (ram,0x8012f3e0) */
/* WARNING: Removing unreachable block (ram,0x8012f3e8) */
/* WARNING: Removing unreachable block (ram,0x8012f5bc) */
/* WARNING: Removing unreachable block (ram,0x8012f5c4) */
/* WARNING: Removing unreachable block (ram,0x8012f534) */
/* WARNING: Removing unreachable block (ram,0x8012f53c) */
/* WARNING: Removing unreachable block (ram,0x8012f4ac) */
/* WARNING: Removing unreachable block (ram,0x8012f4b4) */
/* WARNING: Removing unreachable block (ram,0x8012f468) */
/* WARNING: Removing unreachable block (ram,0x8012f470) */
/* WARNING: Removing unreachable block (ram,0x8012f4f0) */
/* WARNING: Removing unreachable block (ram,0x8012f4f8) */
/* WARNING: Removing unreachable block (ram,0x8012f578) */
/* WARNING: Removing unreachable block (ram,0x8012f580) */
/* WARNING: Removing unreachable block (ram,0x8012f600) */
/* WARNING: Removing unreachable block (ram,0x8012f608) */
/* WARNING: Removing unreachable block (ram,0x8012f644) */
/* WARNING: Removing unreachable block (ram,0x8012f64c) */
/* WARNING: Removing unreachable block (ram,0x8012f358) */
/* WARNING: Removing unreachable block (ram,0x8012f360) */
/* WARNING: Removing unreachable block (ram,0x8012f39c) */
/* WARNING: Removing unreachable block (ram,0x8012f3a4) */
/* WARNING: Removing unreachable block (ram,0x8012f424) */

void FUN_80126414(undefined4 param_1,undefined4 param_2,short *param_3,short *param_4)

{
  uint uVar1;
  undefined2 *in_t0;
  int in_t1;
  int in_t3;
  undefined2 *in_t5;
  short *unaff_s3;
  int in_lo;
  
  uVar1 = FUN_80125f50();
  unaff_s3[0x3d] = (short)uVar1;
  if ((uVar1 & 3) != 0) {
    unaff_s3[0x3d] = (short)(uVar1 << 4);
    *(byte *)(*(int *)(unaff_s3 + (uVar1 & 3) * 2 + 0x60) + 0x3e) =
         *(byte *)(*(int *)(unaff_s3 + (uVar1 & 3) * 2 + 0x60) + 0x3e) | 3;
  }
  FUN_801312cc();
  if (*(char *)((int)unaff_s3 + 3) == '\0') {
    trap(0x1800);
    while( true ) {
      in_t0[-8] = (short)in_lo;
      trap(0x1c00);
      in_t0[-7] = (short)(((int)param_3[-4] - (int)unaff_s3[-4]) / 0);
      trap(0x1c00);
      in_t0[-6] = (short)(((int)param_3[-6] - (int)unaff_s3[-6]) / 0);
      trap(0x1c00);
      in_t0[-5] = (short)(((int)param_3[-3] - (int)unaff_s3[-3]) / 0);
      trap(0x1c00);
      in_t0[-4] = (short)(((int)param_3[-2] - (int)unaff_s3[-2]) / 0);
      trap(0x1c00);
      in_t0[-3] = (short)(((int)param_3[-1] - (int)unaff_s3[-1]) / 0);
      trap(0x1c00);
      in_t0[-2] = (short)(((int)param_3[1] - (int)unaff_s3[1]) / 0);
      trap(0x1c00);
      in_t0[-1] = (short)(((int)param_3[2] - (int)unaff_s3[2]) / 0);
      trap(0x1c00);
      *in_t0 = (short)(((int)*param_3 - (int)*unaff_s3) / 0);
      param_4[-9] = unaff_s3[-9];
      param_4[-8] = unaff_s3[-8];
      param_4[-7] = unaff_s3[-7];
      param_4[-5] = unaff_s3[-5];
      param_4[-4] = unaff_s3[-4];
      param_4[-6] = unaff_s3[-6];
      param_4[-3] = unaff_s3[-3];
      in_t1 = in_t1 + 1;
      param_4[-2] = unaff_s3[-2];
      in_t5 = in_t5 + 0xc;
      param_4[-1] = unaff_s3[-1];
      param_4[1] = unaff_s3[1];
      param_4[2] = unaff_s3[2];
      *param_4 = *unaff_s3;
      param_4 = param_4 + 0x16;
      if (in_t3 <= in_t1) break;
      trap(0x1c00);
      *in_t5 = (short)(((int)param_3[0xd] - (int)unaff_s3[0xd]) / 0);
      trap(0x1c00);
      in_t0[2] = (short)(((int)param_3[0xe] - (int)unaff_s3[0xe]) / 0);
      trap(0x1c00);
      in_t0[3] = (short)(((int)param_3[0xf] - (int)unaff_s3[0xf]) / 0);
      in_lo = ((int)param_3[0x11] - (int)unaff_s3[0x11]) / 0;
      trap(0x1c00);
      unaff_s3 = unaff_s3 + 0x16;
      param_3 = param_3 + 0x16;
      in_t0 = in_t0 + 0xc;
    }
    return;
  }
  if (*(char *)((int)unaff_s3 + 3) == '\x01') {
    func_0x8004cbd8();
  }
  if ((DAT_800bf89c == '\x02') && (*(char *)((int)unaff_s3 + 3) == '\0')) {
    *(undefined1 *)((int)unaff_s3 + 5) = 5;
  }
  *(undefined1 *)((int)unaff_s3 + 0x29) = 0;
  *(undefined1 *)((int)unaff_s3 + 0x2b) = 0;
  return;
}

