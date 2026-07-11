/**
 * @brief Processes a sprite rendering command from animation data.
 *        Sets up GTE matrices, extracts color/CLUT info from data byte at offset 3,
 *        and submits the sprite via Entity_SubmitQuadToOT.
 * @note Original: func_800288AC at 0x800288AC
 */
// Entity_ProcessSpriteCmd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Entity_ProcessSpriteCmd(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  int local_28;
  int local_24;
  int local_20;

  pbVar8 = *(byte **)(param_1 + 0x3c);
  if (pbVar8 != (byte *)0x0) {
    FUN_80085480(param_1 + 0x48,0x1f800000);
    local_28 = (uint)*pbVar8 << 2;
    local_24 = (uint)pbVar8->flags << 2;
    local_20 = (uint)pbVar8->kind << 2;
    FUN_80084520(0x1f800000,&local_28);
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopReg(2,0x4800,_DAT_1f800000 & 0xffff);
    setCopReg(2,0x5000,_DAT_1f800004 >> 0x10);
    setCopReg(2,0x5800,_DAT_1f80000c & 0xffff);
    copFunction(2,0x49e012);
    uVar2 = getCopReg(2,0x4800);
    uVar4 = getCopReg(2,0x5000);
    uVar6 = getCopReg(2,0x5800);
    setCopReg(2,0x4800,_DAT_1f800000 >> 0x10);
    setCopReg(2,0x5000,_DAT_1f800008 & 0xffff);
    setCopReg(2,0x5800,_DAT_1f80000c >> 0x10);
    copFunction(2,0x49e012);
    uVar3 = getCopReg(2,0x4800);
    uVar5 = getCopReg(2,0x5000);
    uVar7 = getCopReg(2,0x5800);
    _DAT_1f800000 = CONCAT22((short)uVar3,(short)uVar2);
    _DAT_1f80000c = CONCAT22((short)uVar7,(short)uVar6);
    setCopReg(2,0x4800,_DAT_1f800004 & 0xffff);
    setCopReg(2,0x5000,_DAT_1f800008 >> 0x10);
    setCopReg(2,0x5800,_DAT_1f800010 & 0xffff);
    copFunction(2,0x49e012);
    uVar2 = getCopReg(2,0x4800);
    uVar3 = getCopReg(2,0x5000);
    uVar6 = getCopReg(2,0x5800);
    _DAT_1f800004 = CONCAT22((short)uVar4,(short)uVar2);
    _DAT_1f800008 = CONCAT22((short)uVar3,(short)uVar5);
    _DAT_1f800010 = CONCAT22(_DAT_1f800012,(short)uVar6);
    setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
    setCopReg(2,extraout_at,param_1->pos_y_fixed);
    copFunction(2,0x486012);
    _DAT_1f800014 = getCopReg(2,0x19);
    _DAT_1f800018 = getCopReg(2,0x1a);
    _DAT_1f80001c = getCopReg(2,0x1b);
    _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
    _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
    _DAT_1f80001c = _DAT_1f80001c + _DAT_1f800114;
    setCopControlWord(2,0,_DAT_1f800000);
    setCopControlWord(2,0x800,_DAT_1f800004);
    setCopControlWord(2,0x1000,_DAT_1f800008);
    setCopControlWord(2,0x1800,_DAT_1f80000c);
    setCopControlWord(2,0x2000,_DAT_1f800010);
    setCopControlWord(2,0x2800,_DAT_1f800014);
    setCopControlWord(2,0x3000,_DAT_1f800018);
    setCopControlWord(2,0x3800,_DAT_1f80001c);
    if ((pbVar8->sub_type & 0x40) == 0) {
      _DAT_1f800090 = 0;
      bVar1 = pbVar8->sub_type & 0xf;   // Extract color/CLUT index (4 bits)
    }
    else {
      _DAT_1f800090 = (pbVar8->sub_type & 0x3f) * -0x40 + 0x1000;
      bVar1 = 0;
    }
    if ((pbVar8->sub_type & 0x80) == 0) {
      *(byte **)(param_1 + 0x40) = pbVar8 + 4;
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    // Submit sprite to OT with color info
    FUN_80027768(*(undefined4 *)(param_1 + 0x50),bVar1,(int)*(short *)(param_1 + 0x32),
                 param_1->collision_state);
  }
  return;
}
