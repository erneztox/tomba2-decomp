// FUN_80124a4c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80124a4c(int param_1)

{
  ushort uVar1;
  char cVar2;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_28;
  undefined4 local_24;
  int iStack_20;
  int iStack_1c;
  
  puVar16 = _DAT_800bf544;
  cVar2 = (char)((ushort)*(undefined2 *)(param_1 + 0x40) >> 8) * ' ';
  func_0x80085480(param_1 + 0x54,0x1f800000);
  local_38 = (int)*(short *)(param_1 + 0x68);
  local_34 = (int)*(short *)(param_1 + 0x6a);
  local_30 = (int)*(short *)(param_1 + 0x6c);
  func_0x80084520(0x1f800000,&local_38);
  setCopControlWord(2,0,_DAT_1f8000f8);
  setCopControlWord(2,0x800,_DAT_1f8000fc);
  setCopControlWord(2,0x1000,_DAT_1f800100);
  setCopControlWord(2,0x1800,_DAT_1f800104);
  setCopControlWord(2,0x2000,_DAT_1f800108);
  setCopReg(2,0x4800,_DAT_1f800000 & 0xffff);
  setCopReg(2,0x5000,_DAT_1f800004 >> 0x10);
  setCopReg(2,0x5800,_DAT_1f80000c & 0xffff);
  copFunction(2,0x49e012);
  uVar10 = getCopReg(2,0x4800);
  uVar12 = getCopReg(2,0x5000);
  uVar14 = getCopReg(2,0x5800);
  setCopReg(2,0x4800,_DAT_1f800000 >> 0x10);
  setCopReg(2,0x5000,_DAT_1f800008 & 0xffff);
  setCopReg(2,0x5800,_DAT_1f80000c >> 0x10);
  copFunction(2,0x49e012);
  uVar11 = getCopReg(2,0x4800);
  uVar13 = getCopReg(2,0x5000);
  uVar15 = getCopReg(2,0x5800);
  _DAT_1f800000 = CONCAT22((short)uVar11,(short)uVar10);
  _DAT_1f80000c = CONCAT22((short)uVar15,(short)uVar14);
  setCopReg(2,0x4800,_DAT_1f800004 & 0xffff);
  setCopReg(2,0x5000,_DAT_1f800008 >> 0x10);
  setCopReg(2,0x5800,_DAT_1f800010 & 0xffff);
  copFunction(2,0x49e012);
  uVar10 = getCopReg(2,0x4800);
  uVar11 = getCopReg(2,0x5000);
  uVar14 = getCopReg(2,0x5800);
  _DAT_1f800004 = CONCAT22((short)uVar12,(short)uVar10);
  _DAT_1f800008 = CONCAT22((short)uVar11,(short)uVar13);
  _DAT_1f800010 = CONCAT22(DAT_1f800010_2,(short)uVar14);
  local_28 = CONCAT22(*(undefined2 *)(param_1 + 0x32),*(undefined2 *)(param_1 + 0x2e));
  local_24 = CONCAT22(local_24._2_2_,*(undefined2 *)(param_1 + 0x36));
  setCopReg(2,in_zero,local_28);
  setCopReg(2,extraout_at,local_24);
  copFunction(2,0x486012);
  _DAT_1f800014 = getCopReg(2,0x19);
  _DAT_1f800018 = getCopReg(2,0x1a);
  _DAT_1f80001c = getCopReg(2,0x1b);
  _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
  _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
  _DAT_1f80001c = _DAT_1f80001c + (int)_DAT_1f800114;
  setCopControlWord(2,0,_DAT_1f800000);
  setCopControlWord(2,0x800,_DAT_1f800004);
  setCopControlWord(2,0x1000,_DAT_1f800008);
  setCopControlWord(2,0x1800,_DAT_1f80000c);
  setCopControlWord(2,0x2000,_DAT_1f800010);
  setCopControlWord(2,0x2800,_DAT_1f800014);
  setCopControlWord(2,0x3000,_DAT_1f800018);
  setCopControlWord(2,0x3800,_DAT_1f80001c);
  puVar8 = (uint *)&DAT_80137e24;
  puVar6 = (uint *)&DAT_80137e3c;
  puVar7 = puVar16 + 0xc;
  puVar5 = _DAT_1f800114;
  do {
    uVar9 = puVar6[-5];
    local_58 = CONCAT22(*(char *)((int)puVar6 + 6) * 8,(char)puVar6[1] * 8);
    local_54 = CONCAT22(local_54._2_2_,*(char *)((int)puVar6 + -9) * 8);
    uStack_50 = CONCAT22(*(char *)((int)puVar6 + 7) * 8,*(char *)((int)puVar6 + 5) * 8);
    uStack_4c = CONCAT22(uStack_4c._2_2_,*(char *)((int)puVar6 + -5) * 8);
    uStack_48 = CONCAT22(*(char *)((int)puVar6 + 10) * 8,(char)puVar6[2] * 8);
    uStack_44 = CONCAT22(uStack_44._2_2_,*(char *)((int)puVar6 + -1) * 8);
    uStack_40 = CONCAT22(*(char *)((int)puVar6 + 0xb) * 8,*(char *)((int)puVar6 + 9) * 8);
    uStack_3c = CONCAT22(uStack_3c._2_2_,*(char *)((int)puVar6 + 3) * 8);
    setCopReg(2,in_zero,local_58);
    setCopReg(2,extraout_at,local_54);
    setCopReg(2,&local_58,uStack_50);
    setCopReg(2,&uStack_48,uStack_4c);
    setCopReg(2,puVar5,uStack_48);
    setCopReg(2,puVar6,uStack_44);
    copFunction(2,0x280030);
    iStack_20 = getCopControlWord(2,0xf800);
    if (-1 < iStack_20) {
      uVar4 = getCopReg(2,0xc);
      puVar16[2] = uVar4;
      uVar4 = getCopReg(2,0xd);
      puVar16[5] = uVar4;
      uVar4 = getCopReg(2,0xe);
      puVar16[8] = uVar4;
      setCopReg(2,in_zero,uStack_40);
      setCopReg(2,extraout_at,uStack_3c);
      copFunction(2,0x180001);
      iStack_20 = getCopControlWord(2,0xf800);
      if (-1 < iStack_20) {
        uVar4 = getCopReg(2,0xe);
        puVar16[0xb] = uVar4;
        copFunction(2,0x168002e);
        iVar3 = getCopReg(2,7);
        iStack_1c = (iVar3 >> (iVar3 >> 10 & 0x1fU)) + (iVar3 >> 10) * 0x200;
        if (0x7fb < iStack_1c - 4U) {
          iStack_1c = -1;
        }
        iVar3 = iStack_1c + -100;
        if (-1 < iStack_1c) {
          iStack_1c = iVar3;
          if (iVar3 < 4) {
            iStack_1c = 4;
          }
          puVar7[-0xb] = puVar6[-3] & 0xffffff | 0x3e000000;
          uVar4 = *puVar8;
          puVar7[-6] = uVar9 & 0x7fffff;
          puVar7[-9] = uVar4;
          uVar4 = puVar6[-4];
          puVar7[-3] = uVar4;
          *puVar7 = (int)uVar4 >> 0x10;
          puVar7[-8] = puVar6[-2];
          puVar7[-5] = puVar6[-1];
          uVar4 = *puVar6;
          *(char *)(puVar7 + -6) = (char)puVar7[-6] + cVar2;
          *(char *)(puVar7 + -9) = (char)puVar7[-9] + cVar2;
          *(char *)puVar7 = (char)*puVar7 + cVar2;
          puVar7[-2] = uVar4;
          *(char *)(puVar7 + -3) = (char)puVar7[-3] + cVar2;
          puVar5 = (uint *)(_DAT_800ed8c8 + iStack_1c * 4);
          *puVar16 = *puVar5 | 0xc000000;
          *puVar5 = (uint)puVar16;
          puVar7 = puVar7 + 0xd;
          puVar16 = puVar16 + 0xd;
        }
      }
    }
    puVar6 = puVar6 + 9;
    puVar8 = puVar8 + 9;
  } while (0 < (int)uVar9);
  uVar1 = *(ushort *)(param_1 + 0x40);
  _DAT_800bf544 = puVar16;
  func_0x800329e0(6);
  setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x60));
  setCopReg(2,extraout_at_00,*(undefined4 *)(param_1 + 100));
  iVar3 = func_0x800317cc(0);
  if (iVar3 == 0) {
    _DAT_1f800080 = _DAT_1f800080 + -100;
    if (_DAT_1f800080 < 4) {
      _DAT_1f800080 = 4;
    }
    _DAT_1f800084 = _DAT_1f800084 * *(short *)(param_1 + 0x70) >> 0xb;
    _DAT_1f800088 = _DAT_1f800084;
    if (*(char *)(param_1 + 3) == '\b') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x800328ec(*(undefined4 *)(((int)((uint)uVar1 << 0x10) >> 0x18) * 4 + -0x7fec7870));
  }
  return;
}

