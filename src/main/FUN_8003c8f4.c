
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003c8f4(int param_1,undefined4 param_2)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined2 uVar1;
  uint uVar2;
  short *psVar3;
  undefined4 extraout_v1;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  if (*(short **)(param_1 + 0x38) != (short *)0x0) {
    psVar3 = (short *)(*(int *)(param_1 + 0x3c) + **(short **)(param_1 + 0x38) * 4);
    iVar8 = (int)*psVar3;
    iVar7 = *(int *)(param_1 + 0x3c) + (int)psVar3[1];
    do {
      puVar4 = &local_50;
      uVar5 = 0;
      FUN_8003b220(puVar4,0,iVar7);
      setCopReg(2,in_zero,local_50);
      setCopReg(2,extraout_at,local_4c);
      setCopReg(2,&local_50,local_48);
      setCopReg(2,extraout_v1,local_44);
      setCopReg(2,puVar4,local_40);
      setCopReg(2,uVar5,local_3c);
      copFunction(2,0x280030);
      local_30 = getCopControlWord(2,0xf800);
      if (local_30 < 0) {
LAB_8003c9fc:
        local_28 = -1;
      }
      else {
        _DAT_1f800008 = getCopReg(2,0xc);
        _DAT_1f800010 = getCopReg(2,0xd);
        _DAT_1f800018 = getCopReg(2,0xe);
        copFunction(2,0x1400006);
        getCopReg(2,0x18);
        setCopReg(2,in_zero,local_38);
        setCopReg(2,extraout_at,local_34);
        copFunction(2,0x180001);
        local_30 = getCopControlWord(2,0xf800);
        if (local_30 < 0) goto LAB_8003c9fc;
        _DAT_1f800020 = getCopReg(2,0xe);
        copFunction(2,0x168002e);
        local_2c = getCopReg(2,7);
        local_28 = local_2c;
      }
      if (((((_DAT_1f800008 < 0x140) || (_DAT_1f800010 < 0x140)) || (_DAT_1f800018 < 0x140)) ||
          (_DAT_1f800020 < 0x140)) &&
         (((_DAT_1f80000a < 0xf0 || (_DAT_1f800012 < 0xf0)) ||
          ((_DAT_1f80001a < 0xf0 || (_DAT_1f800022 < 0xf0)))))) {
        local_28 = local_28 + *(char *)(param_1 + 8);
        uVar2 = local_28 >> 10;
        local_28 = (local_28 >> (uVar2 & 0x1f)) + uVar2 * 0x200;
        if (0x7fb < local_28 - 4U) {
          local_28 = -1;
        }
        if (-1 < local_28) {
          FUN_8003b054(0x1f800000,iVar7,param_2);
          if (*(short *)(param_1 + 0x5c) != 0) {
            _DAT_1f80000c = CONCAT22(*(short *)(param_1 + 0x5c),_DAT_1f80000c);
          }
          switch(*(undefined1 *)(param_1 + 0xd)) {
          case 0:
            _DAT_1f800004 = CONCAT13(0x2d,_DAT_1f800004);
            break;
          case 1:
            _DAT_1f800004 = CONCAT13(0x2f,_DAT_1f800004);
            break;
          case 2:
            _DAT_1f800004 = (undefined3)*(undefined4 *)(param_1 + 0x18);
            _DAT_1f800004 = CONCAT13(0x2c,_DAT_1f800004);
            break;
          case 3:
            _DAT_1f800004 = (undefined3)*(undefined4 *)(param_1 + 0x18);
            _DAT_1f800004 = CONCAT13(0x2e,_DAT_1f800004);
            break;
          case 0x20:
            _DAT_1f800004 = CONCAT13(0x2d,_DAT_1f800004);
            uVar1 = 0x407b;
            if (*(char *)(param_1 + 0x18) == '\0') {
              uVar1 = 0x403b;
            }
            _DAT_1f80000c = CONCAT22(uVar1,_DAT_1f80000c);
          }
          puVar6 = (uint *)(_DAT_800ed8c8 + local_28 * 4);
          *_DAT_800bf544 = *puVar6 | 0x9000000;
          *puVar6 = (uint)_DAT_800bf544;
          _DAT_800bf544[1] = _DAT_1f800004;
          _DAT_800bf544[2] = _DAT_1f800008;
          _DAT_800bf544[3] = _DAT_1f80000c;
          _DAT_800bf544[4] = _DAT_1f800010;
          _DAT_800bf544[5] = _DAT_1f800014;
          _DAT_800bf544[6] = _DAT_1f800018;
          _DAT_800bf544[7] = _DAT_1f80001c;
          _DAT_800bf544[8] = _DAT_1f800020;
          _DAT_800bf544[9] = _DAT_1f800024;
          _DAT_800bf544 = _DAT_800bf544 + 10;
        }
      }
      iVar8 = iVar8 + -1;
      iVar7 = iVar7 + 0x10;
    } while (iVar8 != 0);
  }
  return;
}

