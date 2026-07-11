/**
 * @brief Draws child entities by iterating linked list from entity[0xC0]
 * @note Original: func_8003CDD8 at 0x8003CDD8
 */
// Entity_DrawChildren


// FUN_8003CDD8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003cdd8(int param_1,undefined4 param_2)

{
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 extraout_at;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if ((param_1->counter1 != '\0') && (iVar9 = 0, param_1->counter2 != '\0')) {
    do {
      if ((int)(uint)param_1->counter1 <= iVar9) {
        return;
      }
      iVar2 = *(int *)(param_1 + iVar9 * 4 + 0xc0);
      if (*(int *)(iVar2 + 0x40) != 0) {
        _DAT_1f8000c0 = CONCAT22(*(undefined2 *)(iVar2 + 0x30),iVar2->pos_x);
        _DAT_1f8000c4 = CONCAT22(DAT_1f8000c4_2,*(undefined2 *)(iVar2 + 0x34));
        setCopControlWord(2,0,_DAT_1f8000f8);
        setCopControlWord(2,0x800,_DAT_1f8000fc);
        setCopControlWord(2,0x1000,_DAT_1f800100);
        setCopControlWord(2,0x1800,_DAT_1f800104);
        setCopControlWord(2,0x2000,_DAT_1f800108);
        setCopReg(2,0x4800,(uint)*(ushort *)(iVar2 + 0x18));
        setCopReg(2,0x5000,(uint)*(ushort *)(iVar2 + 0x1e));
        setCopReg(2,0x5800,(uint)*(ushort *)(iVar2 + 0x24));
        copFunction(2,0x49e012);
        uVar3 = getCopReg(2,0x4800);
        uVar5 = getCopReg(2,0x5000);
        uVar7 = getCopReg(2,0x5800);
        setCopReg(2,0x4800,(uint)*(ushort *)(iVar2 + 0x1a));
        setCopReg(2,0x5000,(uint)*(ushort *)(iVar2 + 0x20));
        setCopReg(2,0x5800,(uint)*(ushort *)(iVar2 + 0x26));
        copFunction(2,0x49e012);
        uVar4 = getCopReg(2,0x4800);
        uVar6 = getCopReg(2,0x5000);
        uVar8 = getCopReg(2,0x5800);
        _DAT_1f800000 = CONCAT22((short)uVar4,(short)uVar3);
        _DAT_1f80000c = CONCAT22((short)uVar8,(short)uVar7);
        setCopReg(2,0x4800,(uint)*(ushort *)(iVar2 + 0x1c));
        setCopReg(2,0x5000,(uint)*(ushort *)(iVar2 + 0x22));
        setCopReg(2,0x5800,(uint)*(ushort *)(iVar2 + 0x28));
        copFunction(2,0x49e012);
        uVar3 = getCopReg(2,0x4800);
        uVar4 = getCopReg(2,0x5000);
        uVar7 = getCopReg(2,0x5800);
        _DAT_1f800004 = CONCAT22((short)uVar5,(short)uVar3);
        _DAT_1f800008 = CONCAT22((short)uVar4,(short)uVar6);
        _DAT_1f800010 = CONCAT22(_DAT_1f800012,(short)uVar7);
        setCopReg(2,in_zero,_DAT_1f8000c0);
        setCopReg(2,in_at,_DAT_1f8000c4);
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
        iVar1 = _DAT_800ed8c8;
        if ((param_1->sprite_flags & 0xf) == 4) {
          iVar1 = _DAT_800ed8c8 + *(char *)(iVar2 + 0x3f) * 4;
        }
        FUN_8003f698(*(undefined4 *)(iVar2 + 0x40),iVar1,param_2);
        in_at = extraout_at;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)(uint)param_1->counter2);
  }
  return;
}
