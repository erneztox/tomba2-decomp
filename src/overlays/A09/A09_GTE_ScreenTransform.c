// A09_GTE_ScreenTransform - GTE screen-space transform for entities

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A09_GTE_ScreenTransform(int param_1,s32 param_2,s32 param_3)

{
  u16 uVar1;
  s32 in_zero;
  s32 extraout_at;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  u16 *puVar7;
  int iVar8;
  int iVar9;
  s32 local_30;
  s32 local_2c;
  
  puVar7 = param_1->angle_offset;
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  GTE_SetProjectionDist(6,param_2,param_3,0);
  iVar9 = 0;
  iVar6 = 0xfedcba9;
  do {
    iVar8 = iVar6 * 5 + 1;
    uVar1 = *puVar7;
    iVar3 = Math_CosGTE(iVar6);
    iVar4 = Math_CosGTE(iVar8);
    iVar5 = Math_Cos(iVar8);
    sVar2 = Math_Cos(iVar6);
    iVar6 = (int)((uint)uVar1 << 0x10) >> 0x10;
    local_30 = CONCAT22((short)(sVar2 * iVar6 >> 0xc) + param_1->pos_y,
                        (short)((short)(iVar4 * iVar3 >> 0xc) * iVar6 >> 0xc) +
                        param_1->pos_x);
    iVar4 = (int)((uint)uVar1 << 0x10) >> 0x13;
    local_2c = CONCAT22((short)((uint)local_2c >> 0x10),
                        (short)((short)(iVar5 * iVar3 >> 0xc) * iVar6 >> 0xc) +
                        *(short *)(param_1 + 0x30));
    if (0xff < iVar4) {
      iVar4 = 0xff;
    }
    setCopReg(2,in_zero,local_30);
    setCopReg(2,extraout_at,local_2c);
    iVar6 = GTE_DepthCheck(0xfffffff6);
    if (iVar6 == 0) {
      _DAT_1f800090 = iVar4 << 4;
      _DAT_1f800088 = _DAT_1f800084;
      Entity_ProcessAnimFrame(0x8010e534,_DAT_8010e530);
    }
    iVar9 = iVar9 + 1;
    puVar7 = puVar7 + 1;
    iVar6 = iVar8 * 5 + 1;
  } while (iVar9 < 0x1c);
  return;
}

