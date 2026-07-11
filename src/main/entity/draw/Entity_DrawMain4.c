/**
 * @brief Entity draw main variant 4: final projection path
 * @note Original: func_8002D65C at 0x8002D65C
 */
// Entity_DrawMain4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8002d65c(int param_1)

{
  bool bVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 in_stack_ffffffa4;
  undefined2 uVar18;
  uint uVar19;
  undefined1 auStack_50->counter1;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 *local_30;
  undefined4 *local_2c;
  
  uVar16 = 0;
  iVar14 = 0;
  iVar17 = param_1->scale_y;
  if (iVar17 != 0) {
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopControlWord(2,0x2800,_DAT_1f80010c);
    setCopControlWord(2,0x3000,_DAT_1f800110);
    setCopControlWord(2,0x3800,_DAT_1f800114);
    setCopControlWord(2,0xd800,6);
    setCopControlWord(2,0xe000,0);
    _DAT_1f800090 = 0;
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    iVar15 = 0;
    do {
      uVar18 = (undefined2)((uint)in_stack_ffffffa4 >> 0x10);
      iVar3 = FUN_80083f50(iVar14);
      sVar5 = param_1->pos_x + (short)(iVar3 * 0x4b0 >> 0xc);
      iVar3 = FUN_80083e80(iVar14);
      in_stack_ffffffa4 =
           CONCAT22(uVar18,*(short *)(param_1 + 0x30) + (short)(iVar3 * 0x4b0 >> 0xc));
      sVar6 = param_1->pos_y + param_1->sprite_x;
      sVar2 = sVar6 + -0xc00;
      iVar3 = 0;
      if (3 < iVar15) {
        sVar2 = sVar6 + -0xa80;
      }
      uVar10 = CONCAT22(sVar2,sVar5);
      puVar8 = (undefined4 *)&DAT_1f800084;
      puVar7 = (undefined4 *)&DAT_1f80008c;
      uVar9 = extraout_at;
      do {
        setCopReg(2,in_zero,uVar10);
        setCopReg(2,uVar9,in_stack_ffffffa4);
        copFunction(2,0x180001);
        _DAT_1f800080 = getCopControlWord(2,0xf800);
        bVar1 = true;
        if (-1 < _DAT_1f800080) {
          _DAT_1f800080 = getCopReg(2,0x13);
          iVar4 = _DAT_1f800080 >> 2;
          if (_DAT_1f800080 < 1) {
            bVar1 = true;
          }
          else {
            _DAT_1f800080 = iVar4;
            if (iVar4 < 4) {
              _DAT_1f800080 = 4;
            }
            _DAT_1f800080 =
                 (_DAT_1f800080 >> (_DAT_1f800080 >> 10 & 0x1fU)) + (_DAT_1f800080 >> 10) * 0x200;
            if (0x7fb < _DAT_1f800080 - 4U) {
              _DAT_1f800080 = -1;
            }
            bVar1 = true;
            if (-1 < _DAT_1f800080) {
              uVar11 = getCopReg(2,0xe);
              *puVar7 = uVar11;
              uVar11 = getCopReg(2,0x18);
              *puVar8 = uVar11;
              bVar1 = false;
            }
          }
        }
        if (!bVar1) {
          _DAT_1f800088 = _DAT_1f800084;
          _DAT_1f800084 = _DAT_1f800084 - (_DAT_1f800084 >> 2);
          local_30 = puVar7;
          local_2c = puVar8;
          uVar16 = FUN_80027a4c(iVar17,*(undefined4 *)(param_1 + 0x44));
          uVar9 = extraout_at_00;
          puVar7 = local_30;
          puVar8 = local_2c;
        }
        iVar3 = iVar3 + 1;
        uVar10 = CONCAT22((short)((uint)uVar10 >> 0x10) + 0x300,(short)uVar10);
      } while (iVar3 < 8);
      if (iVar15 == 3) {
        iVar14 = iVar14 + 0x200;
      }
      iVar15 = iVar15 + 1;
      iVar14 = iVar14 + 0x400;
    } while (iVar15 < 8);
    param_1->anim_data = uVar16;
    uVar19 = DAT_800102b4;
    FUN_8009a420(auStack_50,0,8,puVar7,uVar10,in_stack_ffffffa4,DAT_800102b4);
    local_48 = *(undefined4 *)(param_1 + 0x2c);
    local_44 = CONCAT22(local_44._2_2_,*(undefined2 *)(param_1 + 0x30));
    FUN_80085480(auStack_50,0x1f800000);
    local_40 = (uVar19 & 0xff) << 2;
    local_38 = (uVar19 >> 0x10 & 0xff) << 2;
    local_3c = (uVar19 >> 8 & 0xff) << 2;
    FUN_80084520(0x1f800000,&local_40);
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopReg(2,0x4800,_DAT_1f800000 & 0xffff);
    setCopReg(2,0x5000,_DAT_1f800004 >> 0x10);
    setCopReg(2,0x5800,_DAT_1f80000c & 0xffff);
    copFunction(2,0x49e012);
    uVar16 = getCopReg(2,0x4800);
    uVar10 = getCopReg(2,0x5000);
    uVar12 = getCopReg(2,0x5800);
    setCopReg(2,0x4800,_DAT_1f800000 >> 0x10);
    setCopReg(2,0x5000,_DAT_1f800008 & 0xffff);
    setCopReg(2,0x5800,_DAT_1f80000c >> 0x10);
    copFunction(2,0x49e012);
    uVar9 = getCopReg(2,0x4800);
    uVar11 = getCopReg(2,0x5000);
    uVar13 = getCopReg(2,0x5800);
    _DAT_1f800000 = CONCAT22((short)uVar9,(short)uVar16);
    _DAT_1f80000c = CONCAT22((short)uVar13,(short)uVar12);
    setCopReg(2,0x4800,_DAT_1f800004 & 0xffff);
    setCopReg(2,0x5000,_DAT_1f800008 >> 0x10);
    setCopReg(2,0x5800,_DAT_1f800010 & 0xffff);
    copFunction(2,0x49e012);
    uVar16 = getCopReg(2,0x4800);
    uVar9 = getCopReg(2,0x5000);
    uVar12 = getCopReg(2,0x5800);
    _DAT_1f800004 = CONCAT22((short)uVar10,(short)uVar16);
    _DAT_1f800008 = CONCAT22((short)uVar9,(short)uVar11);
    _DAT_1f800010 = CONCAT22(_DAT_1f800012,(short)uVar12);
    setCopReg(2,in_zero,local_48);
    setCopReg(2,extraout_at_01,local_44);
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
    _DAT_1f800090 = 0;
    if (DAT_1f800236 == '\x03') {
      _DAT_800a2064 = _DAT_800a2064 - 6;
    }
    else {
      _DAT_800a2064 = _DAT_800a2064 + 6;
    }
    _DAT_800a2064 = _DAT_800a2064 & 0x3f;
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    FUN_80027768(&DAT_800a172c,0,0,DAT_800a2064);
  }
  return;
}
