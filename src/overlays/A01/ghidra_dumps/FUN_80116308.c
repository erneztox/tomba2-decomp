// FUN_80116308

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80116308(uint param_1,undefined4 *param_2,byte *param_3,int param_4)

{
  byte bVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  ushort uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int in_t0;
  uint *unaff_s5;
  int unaff_s6;
  int unaff_s7;
  undefined4 unaff_s8;
  uint6 uVar8;
  undefined4 uStackX_0;
  undefined4 uStackX_4;
  undefined4 uStackX_8;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_1 + 5)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 5) != '\0') {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x80077e7c(param_1);
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x80041098(param_1);
      func_0x8004190c(param_1);
    }
    return;
  }
  uVar7 = param_1;
  uVar8 = func_0x8007778c();
  uVar4 = (undefined2)(uVar8 >> 0x20);
  uVar2 = (ushort)uVar8 & 1;
  if ((uVar8 & 1) == 0) {
    puVar3 = (undefined4 *)FUN_80112948(param_1);
    puVar6 = puVar3;
    while( true ) {
      setCopReg(2,in_zero,*puVar3);
      setCopReg(2,extraout_at,puVar3[1]);
      param_2[8] = uStackX_8;
      copFunction(2,0x180001);
      param_2[0xb] = unaff_s8;
      uVar7 = getCopReg(2,0xe);
      unaff_s5[0xb] = uVar7;
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
          FUN_8013158c(puVar6);
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
      puVar6 = (undefined4 *)((uint)param_3[5] * 8 + in_t0);
      puVar5 = (undefined4 *)((uint)param_3[6] * 8 + in_t0);
      puVar3 = (undefined4 *)((uint)param_3[7] * 8 + in_t0);
      setCopReg(2,in_zero,*puVar6);
      setCopReg(2,extraout_at,puVar6[1]);
      setCopReg(2,puVar3,*puVar5);
      setCopReg(2,puVar5,puVar5[1]);
      setCopReg(2,puVar6,*puVar3);
      setCopReg(2,param_2,puVar3[1]);
      param_2[2] = uStackX_0;
      copFunction(2,0x280030);
      param_2[5] = uStackX_4;
      uVar7 = getCopReg(2,0xc);
      unaff_s5[2] = uVar7;
      uVar7 = getCopReg(2,0xd);
      unaff_s5[5] = uVar7;
      uVar7 = getCopReg(2,0xe);
      unaff_s5[8] = uVar7;
      puVar3 = (undefined4 *)((uint)param_3[8] * 8 + in_t0);
      param_3 = param_3 + 5;
    }
    param_4 = -0x7ff40000;
    uVar7 = (uint)_DAT_801388ec;
    uVar2 = 0x40;
    uVar4 = _DAT_801388ee;
  }
  else {
    *(uint *)(param_1 + 0x14) = uVar7;
  }
  *(uint **)(param_4 + -0xabc) = unaff_s5;
  *(undefined1 *)((int)unaff_s5 + 3) = 2;
  unaff_s5[2] = 0;
  unaff_s5[1] = (uint)(byte)((byte)uVar4 >> 3) << 0xf | (uVar7 >> 3 & 0x1f) << 10 | 0xe2000000 |
                (-(int)(short)uVar2 & 0xf8U) << 2 | (int)(-(int)(short)uVar2 & 0xffU) >> 3;
  *unaff_s5 = *(uint *)(unaff_s7 + 0x1ffc) | 0x2000000;
  *(uint **)(unaff_s7 + 0x1ffc) = unaff_s5;
  *(uint **)(param_4 + -0xabc) = unaff_s5 + 3;
  return;
}

