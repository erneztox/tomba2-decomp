// A09_GTE_ProjectionHelper - GTE projection helper: screen bounds calculation

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080141c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A09_GTE_ProjectionHelper(int param_1)

{
  s32 in_zero;
  s32 extraout_at;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  s32 local_30;
  s32 local_2c;
  
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  GTE_SetProjectionDist(6);
  iVar9 = 0;
  uVar10 = (uint)_g_InputPressed;
  do {
    iVar1 = Math_CosGTE(iVar9);
    iVar2 = Math_Cos(iVar9);
    iVar6 = iVar2 >> 8;
    if (iVar6 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar11 = 0x1000 / iVar6;
    if (iVar6 == 0) {
      trap(0x1c00);
    }
    iVar6 = 0;
    uVar5 = uVar10;
    iVar3 = iVar11;
    while (iVar3 < 0x1000) {
      iVar3 = Math_CosGTE(uVar5);
      iVar4 = Math_Cos(uVar5);
      iVar8 = (int)param_1->sprite_x;
      iVar7 = iVar2 * iVar8 >> 0xc;
      local_30 = CONCAT22((short)(iVar1 * iVar8 >> 0xc) + param_1->pos_y,
                          (short)(iVar3 * iVar7 >> 0xc) + param_1->pos_x);
      local_2c = CONCAT22((short)((uint)local_2c >> 0x10),
                          (short)(iVar4 * iVar7 >> 0xc) + *(short *)(param_1 + 0x30));
      if (iVar8 < 500) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar3 = (iVar8 + -500) * 0x10;
      if (0x1000 < iVar3) {
        iVar3 = 0x1000;
      }
      setCopReg(2,in_zero,local_30);
      setCopReg(2,extraout_at,local_2c);
      iVar4 = GTE_DepthCheck(0);
      if (iVar4 == 0) {
        _DAT_1f800088 = _DAT_1f800084;
        uVar5 = Math_Random();
        _DAT_1f800090 = iVar3 + (uVar5 & 0x3ff);
        Entity_ProcessAnimFrame(0x8010e534,_DAT_8010e530);
      }
      iVar6 = iVar6 + iVar11;
      uVar5 = iVar6 + uVar10;
      iVar3 = iVar6 + iVar11;
    }
    iVar9 = iVar9 + 0x100;
  } while (iVar9 < 0x800);
  return;
}

