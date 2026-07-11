// A09_BossStateMachine - Boss state machine: full boss battle logic

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08014d14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A09_BossStateMachine(int param_1)

{
  s32 uVar1;
  s32 in_zero;
  s32 extraout_at;
  s32 extraout_at_00;
  s32 extraout_at_01;
  uint uVar2;
  s32 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  s32 local_44;
  short local_40;
  short sStack_3e;
  s32 local_38;
  s32 local_34;
  
  uVar3 = *(s32 *)(param_1 + 0x2c);
  local_44 = CONCAT22(local_44._2_2_,*(s16 *)(param_1 + 0x30));
  GTE_SetProjectionDist(6);
  uVar1 = g_OrderingTable;
  setCopReg(2,in_zero,uVar3);
  setCopReg(2,extraout_at,local_44);
  copFunction(2,0x180001);
  iVar7 = getCopControlWord(2,0xf800);
  if (-1 < iVar7) {
    uVar3 = getCopReg(2,0xe);
    local_40 = (short)uVar3;
    iVar9 = (int)local_40;
    iVar7 = 0;
    if (iVar9 < 0) {
      iVar7 = iVar9;
    }
    sStack_3e = (short)((uint)uVar3 >> 0x10);
    iVar8 = (int)sStack_3e;
    if (iVar8 < 0) {
      iVar7 = iVar7 + iVar8;
    }
    if (0x13f < iVar9) {
      iVar7 = (iVar7 + 0x140) - iVar9;
    }
    if (0xef < iVar8) {
      iVar7 = (iVar7 + 0xf0) - iVar8;
    }
    if (-0x33 < iVar7) {
      if (param_1->state == '\x01') {
        uVar2 = Math_Random();
        iVar7 = iVar7 + (uVar2 & 0x1f);
        iVar10 = (iVar7 + 0x30) * 0x10000 >> 0x10;
        uVar3 = func_0x0010d7d4(uVar1,(((0xa0 - iVar9) * 7 >> 3) + (int)local_40) * 0x10000 >> 0x10,
                                (((0x78 - iVar8) * 7 >> 3) + (int)sStack_3e) * 0x10000 >> 0x10,0xc,
                                0xc,iVar10,6);
        iVar9 = (0xa0 - iVar9) * 3;
        iVar8 = (0x78 - iVar8) * 3;
        uVar3 = func_0x0010d7d4(uVar3,((iVar9 >> 3) + (int)local_40) * 0x10000 >> 0x10,
                                ((iVar8 >> 3) + (int)sStack_3e) * 0x10000 >> 0x10,0x20,0x20,iVar10,6
                               );
        g_OrderingTable =
             func_0x0010d7d4(uVar3,((iVar9 >> 1) + (int)local_40) * 0x10000 >> 0x10,
                             ((iVar8 >> 1) + (int)sStack_3e) * 0x10000 >> 0x10,0x30,0x30,
                             (iVar7 + 0x28) * 0x10000 >> 0x10,7);
      }
      if (param_1->scale_y != 0) {
        GTE_SetProjectionDist(6);
        setCopControlWord(2,0xa800,0);
        setCopControlWord(2,0xb000,0);
        setCopControlWord(2,0xb800,0);
        setCopReg(2,in_zero,*(s32 *)(param_1 + 0x2c));
        setCopReg(2,extraout_at_00,param_1->pos_y_fixed);
        iVar7 = GTE_DepthCheck((int)*(short *)(param_1 + 0x32));
        if (iVar7 != 0) {
          Entity_AdvanceAnimScript(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        _DAT_1f800088 = _DAT_1f800084 * *(int *)(param_1 + 0x54) >> 8;
        _DAT_1f800084 = _DAT_1f800084 * *(int *)(param_1 + 0x50) >> 8;
        uVar2 = Math_Random();
        _DAT_1f800090 = (0x100 - *(int *)(param_1 + 0x50)) * 0x10 + (uVar2 & 0x3ff);
        uVar3 = Entity_ProcessAnimDirect(param_1,param_1->scale_y);
        param_1->anim_data = uVar3;
        setCopControlWord(2,0xa800,0);
        setCopControlWord(2,0xb000,0);
        setCopControlWord(2,0xb800,0x3fc);
        GTE_SetProjectionDist(6);
        iVar7 = 0;
        uVar2 = (uint)_g_InputPressed;
        do {
          iVar9 = Math_CosGTE((uint)_g_InputPressed << 6);
          iVar8 = ((iVar9 << 7) >> 0xc) + iVar7;
          iVar9 = Math_CosGTE(iVar8);
          iVar8 = Math_Cos(iVar8);
          iVar10 = iVar8 >> 9;
          iVar12 = 0x1000;
          if ((0 < iVar10) && (iVar12 = 0x1000 / iVar10, iVar10 == 0)) {
            trap(0x1c00);
          }
          iVar11 = 0;
          iVar10 = uVar2 * 0x20;
          iVar4 = iVar12;
          while (iVar4 < 0x1000) {
            iVar4 = Math_CosGTE(iVar10);
            iVar10 = Math_Cos(iVar10);
            iVar6 = iVar8 * param_1->sprite_x >> 0xc;
            local_38 = CONCAT22((short)(iVar9 * param_1->sprite_x >> 0xc) +
                                param_1->pos_y,
                                (short)(iVar4 * iVar6 >> 0xc) + param_1->pos_x);
            local_34 = CONCAT22((short)((uint)local_34 >> 0x10),
                                (short)(iVar10 * iVar6 >> 0xc) + *(short *)(param_1 + 0x30));
            iVar10 = *(int *)(param_1 + 0x50);
            setCopReg(2,in_zero,local_38);
            setCopReg(2,extraout_at_01,local_34);
            iVar4 = GTE_DepthCheck(0);
            if (iVar4 == 0) {
              _DAT_1f800084 = (int)_DAT_1f800084 >> 2;
              _DAT_1f800088 = _DAT_1f800084;
              uVar5 = Math_Random();
              _DAT_1f800090 = iVar10 * -0x10 + 0x1000 + (uVar5 & 0x7ff);
              Entity_ProcessAnimFrame(0x8010e534,_DAT_8010e530);
            }
            iVar11 = iVar11 + iVar12;
            iVar10 = iVar11 + uVar2 * 0x20;
            iVar4 = iVar11 + iVar12;
          }
          iVar7 = iVar7 + 0x100;
        } while (iVar7 < 0x800);
      }
    }
  }
  return;
}

