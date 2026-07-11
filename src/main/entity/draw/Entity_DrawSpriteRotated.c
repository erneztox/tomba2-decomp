/**
 * @brief Renders a rotated sprite using GTE matrix multiply from entity[0x48] transform
 * @note Original: func_80028B70 at 0x80028B70
 */
// Entity_DrawSpriteRotated



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80028b70(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_20;
  int local_1c;
  int local_18;
  
  pbVar1 = *(byte **)(param_1 + 0x3c);
  if (pbVar1 != (byte *)0x0) {
    uVar2 = (uint)*pbVar1;
    if ((*pbVar1 & 0x80) == 0) {
      *(byte **)(param_1 + 0x40) = pbVar1 + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 0;
      uVar2 = uVar2 & 0x7f;
    }
    uVar9 = *(undefined4 *)(uVar2 * 4 + *(int *)(param_1 + 0x50));
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    _DAT_1f800090 = 0;
    FUN_80085480(param_1 + 0x48,0x1f800000);
    local_20 = (uint)DAT_800a1cd4 << 2;
    local_1c = (uint)DAT_800a1cd5 << 2;
    local_18 = (uint)DAT_800a1cd6 << 2;
    FUN_80084520(0x1f800000,&local_20);
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopReg(2,0x4800,_DAT_1f800000 & 0xffff);
    setCopReg(2,0x5000,_DAT_1f800004 >> 0x10);
    setCopReg(2,0x5800,_DAT_1f80000c & 0xffff);
    copFunction(2,0x49e012);
    uVar3 = getCopReg(2,0x4800);
    uVar5 = getCopReg(2,0x5000);
    uVar7 = getCopReg(2,0x5800);
    setCopReg(2,0x4800,_DAT_1f800000 >> 0x10);
    setCopReg(2,0x5000,_DAT_1f800008 & 0xffff);
    setCopReg(2,0x5800,_DAT_1f80000c >> 0x10);
    copFunction(2,0x49e012);
    uVar4 = getCopReg(2,0x4800);
    uVar6 = getCopReg(2,0x5000);
    uVar8 = getCopReg(2,0x5800);
    _DAT_1f800000 = CONCAT22((short)uVar4,(short)uVar3);
    _DAT_1f80000c = CONCAT22((short)uVar8,(short)uVar7);
    setCopReg(2,0x4800,_DAT_1f800004 & 0xffff);
    setCopReg(2,0x5000,_DAT_1f800008 >> 0x10);
    setCopReg(2,0x5800,_DAT_1f800010 & 0xffff);
    copFunction(2,0x49e012);
    uVar3 = getCopReg(2,0x4800);
    uVar4 = getCopReg(2,0x5000);
    uVar7 = getCopReg(2,0x5800);
    _DAT_1f800004 = CONCAT22((short)uVar5,(short)uVar3);
    _DAT_1f800008 = CONCAT22((short)uVar4,(short)uVar6);
    _DAT_1f800010 = CONCAT22(_DAT_1f800012,(short)uVar7);
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
    FUN_80027768(uVar9,0,(int)*(short *)(param_1 + 0x32),0);
  }
  return;
}
