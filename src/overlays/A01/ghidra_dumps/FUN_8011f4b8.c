// FUN_8011f4b8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011f4b8(undefined4 param_1,undefined4 *param_2,byte *param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_zero;
  undefined4 extraout_at;
  short sVar3;
  uint in_v0;
  undefined4 *puVar4;
  undefined2 in_v1;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  int in_t0;
  int unaff_s0;
  uint *unaff_s5;
  int unaff_s6;
  int unaff_s7;
  undefined4 unaff_s8;
  
  uVar6 = 0;
  if ((in_v0 == 0) && (in_v0 = (int)(uint)DAT_800bf9fc >> 3 & 1, in_v0 == 0)) {
    puVar4 = (undefined4 *)FUN_80112948();
    puVar7 = puVar4;
    while( true ) {
      setCopReg(2,in_zero,*puVar4);
      setCopReg(2,extraout_at,puVar4[1]);
      param_2[8] = param_9;
      copFunction(2,0x180001);
      param_2[0xb] = unaff_s8;
      uVar2 = getCopReg(2,0xe);
      unaff_s5[0xb] = uVar2;
      if (((((*(ushort *)(param_2 + 1) < 0x140) || (*(ushort *)(param_2 + 4) < 0x140)) ||
           (*(ushort *)(param_2 + 7) < 0x140)) || (*(ushort *)(param_2 + 10) < 0x140)) &&
         (((*(ushort *)((int)param_2 + 6) < 0xf0 || (*(ushort *)((int)param_2 + 0x12) < 0xf0)) ||
          ((*(ushort *)((int)param_2 + 0x1e) < 0xf0 || (*(ushort *)((int)param_2 + 0x2a) < 0xf0)))))
         ) {
        bVar1 = param_3[4];
        if ((bVar1 & 1) != 0) {
          param_2[9] = param_4;
          FUN_8013155c();
          return;
        }
        param_2[9] = 0;
        if ((bVar1 & 2) != 0) {
          param_2[6] = param_4;
          FUN_80131574();
          return;
        }
        param_2[6] = 0;
        if ((bVar1 & 4) != 0) {
          param_2[3] = param_4;
          FUN_8013158c(puVar7);
          return;
        }
        param_2[3] = 0;
        if ((bVar1 & 8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *param_2 = 0x3c000000;
        *unaff_s5 = *(uint *)(unaff_s7 + 0x1ffc) | 0xc000000;
        *(uint **)(unaff_s7 + 0x1ffc) = unaff_s5;
        param_2 = param_2 + 0xd;
        unaff_s5 = unaff_s5 + 0xd;
      }
      unaff_s6 = unaff_s6 + 1;
      if (0x2b < unaff_s6) break;
      puVar7 = (undefined4 *)((uint)param_3[5] * 8 + in_t0);
      puVar5 = (undefined4 *)((uint)param_3[6] * 8 + in_t0);
      puVar4 = (undefined4 *)((uint)param_3[7] * 8 + in_t0);
      setCopReg(2,in_zero,*puVar7);
      setCopReg(2,extraout_at,puVar7[1]);
      setCopReg(2,puVar4,*puVar5);
      setCopReg(2,puVar5,puVar5[1]);
      setCopReg(2,puVar7,*puVar4);
      setCopReg(2,param_2,puVar4[1]);
      param_2[2] = param_7;
      copFunction(2,0x280030);
      param_2[5] = param_8;
      uVar2 = getCopReg(2,0xc);
      unaff_s5[2] = uVar2;
      uVar2 = getCopReg(2,0xd);
      unaff_s5[5] = uVar2;
      uVar2 = getCopReg(2,0xe);
      unaff_s5[8] = uVar2;
      puVar4 = (undefined4 *)((uint)param_3[8] * 8 + in_t0);
      param_3 = param_3 + 5;
    }
    param_4 = -0x7ff40000;
    sVar3 = 0x40;
    in_v1 = _DAT_801388ee;
    uVar6 = _DAT_801388ec;
  }
  else {
    sVar3 = (short)in_v0;
    *(undefined4 *)(unaff_s0 + 0x14) = 0;
  }
  *(uint **)(param_4 + -0xabc) = unaff_s5;
  *(undefined1 *)((int)unaff_s5 + 3) = 2;
  param_5._2_1_ = (byte)in_v1;
  param_5._0_1_ = (byte)uVar6;
  unaff_s5[2] = 0;
  unaff_s5[1] = (uint)(param_5._2_1_ >> 3) << 0xf | (uint)((byte)param_5 >> 3) << 10 | 0xe2000000 |
                (-(int)sVar3 & 0xf8U) << 2 | (int)(-(int)sVar3 & 0xffU) >> 3;
  *unaff_s5 = *(uint *)(unaff_s7 + 0x1ffc) | 0x2000000;
  *(uint **)(unaff_s7 + 0x1ffc) = unaff_s5;
  *(uint **)(param_4 + -0xabc) = unaff_s5 + 3;
  return;
}

