// FUN_08018e80

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018e80(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 in_zero;
  undefined4 extraout_at;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int *piVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  char *pcVar20;
  uint *local_88;
  uint local_7c;
  int local_78;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  
  local_88 = _DAT_800bf544;
  uVar4 = (int)((uint)*(ushort *)(param_1 + 0x54) << 0x10) >> 0x11;
  func_0x000329e0();
  setCopReg(2,in_zero,_DAT_80126968);
  setCopReg(2,extraout_at,_DAT_8012696c);
  iVar5 = func_0x000317cc((int)*(short *)(param_1 + 0x32));
  if (iVar5 == 0) {
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    local_7c = 0;
    _DAT_1f800090 = (int)*(short *)(param_1 + 0x50);
    piVar15 = (int *)&DAT_80126b08;
    _DAT_1f800084 = _DAT_1f800084 * *(short *)(param_1 + 0x52) >> 8;
    _DAT_1f800088 = _DAT_1f800084;
    do {
      if ((local_7c & 1) != 0) {
        func_0x0009a450();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar5 = func_0x0009a450();
      *piVar15 = (*piVar15 + -0x44) - (iVar5 >> 9);
      piVar15 = piVar15 + 1;
      local_7c = local_7c + 1;
    } while ((int)local_7c < 0x31);
    local_7c = -3;
    local_44 = 0x40;
    local_40 = 0;
    local_3c = -5;
    local_38 = -0x20;
    sVar1 = *(short *)(param_1 + 0x50);
    do {
      local_78 = -3;
      local_68 = 0x40;
      local_58 = -7;
      local_64 = 0;
      local_4c = 4;
      local_5c = -0x20;
      local_50 = 10;
      local_60 = -5;
      local_54 = 0xb;
      local_48 = 3;
      pcVar20 = (char *)((int)local_88 + 0x31);
      do {
        uVar18 = *(undefined4 *)(&DAT_80126b08 + (local_48 + local_7c) * 4);
        uVar17 = *(undefined4 *)(&DAT_80126b08 + (local_4c + local_7c) * 4);
        uVar19 = *(undefined4 *)(&DAT_80126b08 + (local_50 + local_7c) * 4);
        uVar6 = *(undefined4 *)(&DAT_80126b08 + (local_54 + local_7c) * 4);
        iVar7 = func_0x00083f50(uVar18);
        iVar16 = local_7c * 2 + -1;
        iVar8 = func_0x00083f50(uVar19);
        iVar5 = func_0x00083f50(uVar17);
        iVar9 = func_0x00083f50(uVar6);
        iVar10 = func_0x00083e80(uVar18);
        iVar11 = func_0x00083e80(uVar17);
        iVar12 = func_0x00083e80(uVar19);
        iVar13 = func_0x00083e80(uVar6);
        iVar5 = (local_38 + (iVar5 * local_3c >> 0xc) + -8) * _DAT_1f800084;
        iVar8 = (local_7c * 0x10 + (iVar8 * iVar16 >> 0xc) + -8) * _DAT_1f800084;
        iVar9 = (local_38 + (iVar9 * local_3c >> 0xc) + -8) * _DAT_1f800084;
        iVar10 = (local_78 * 0x10 + (iVar10 * local_58 >> 0xc) + -8) * _DAT_1f800084;
        iVar11 = (local_78 * 0x10 + (iVar11 * local_58 >> 0xc) + -8) * _DAT_1f800084;
        iVar12 = (local_5c + (iVar12 * local_60 >> 0xc) + -8) * _DAT_1f800084;
        *(short *)(pcVar20 + -0x29) =
             _DAT_1f80008c +
             (short)((local_7c * 0x10 + (iVar7 * iVar16 >> 0xc) + -8) * _DAT_1f800084 >> 0x10);
        *(short *)(pcVar20 + -0x1d) = _DAT_1f80008c + (short)((uint)iVar5 >> 0x10);
        *(short *)(pcVar20 + -0x11) = _DAT_1f80008c + (short)((uint)iVar8 >> 0x10);
        *(short *)(pcVar20 + -5) = _DAT_1f80008c + (short)((uint)iVar9 >> 0x10);
        *(short *)(pcVar20 + -0x27) = _DAT_1f80008e + (short)((uint)iVar10 >> 0x10);
        *(short *)(pcVar20 + -0x1b) = _DAT_1f80008e + (short)((uint)iVar11 >> 0x10);
        *(short *)(pcVar20 + -0xf) = _DAT_1f80008e + (short)((uint)iVar12 >> 0x10);
        sVar2 = _DAT_1f80008e;
        iVar5 = _DAT_1f800084;
        cVar3 = (char)(local_40 / 7);
        pcVar20[-0xd] = cVar3;
        pcVar20[-0x25] = cVar3;
        cVar3 = (char)(local_44 / 7) + -1;
        pcVar20[-1] = cVar3;
        pcVar20[-0x19] = cVar3;
        cVar3 = (char)(local_64 / 7);
        pcVar20[-0x18] = cVar3;
        pcVar20[-0x24] = cVar3;
        cVar3 = (char)(local_68 / 7) + -1;
        *pcVar20 = cVar3;
        pcVar20[-0xc] = cVar3;
        cVar3 = (char)(0x1000 - sVar1 >> 5);
        pcVar20[-7] = cVar3;
        *(short *)(pcVar20 + -3) =
             sVar2 + (short)((uint)((local_5c + (iVar13 * local_60 >> 0xc) + -8) * iVar5) >> 0x10);
        pcVar20[-8] = cVar3;
        pcVar20[-0xffffffff00000017] = '.';
        pcVar20[-0xffffffff00000016] = '\0';
        pcVar20[-0xffffffff00000023] = -2;
        pcVar20[-0xffffffff00000022] = '?';
        pcVar20[-0x2a] = '>';
        pcVar20[-9] = cVar3;
        pcVar20[-0x13] = cVar3;
        pcVar20[-0x14] = cVar3;
        pcVar20[-0x15] = cVar3;
        pcVar20[-0x1f] = cVar3;
        pcVar20[-0x20] = cVar3;
        pcVar20[-0x21] = cVar3;
        pcVar20[-0x2b] = cVar3;
        pcVar20[-0x2c] = cVar3;
        pcVar20[-0x2d] = cVar3;
        cVar3 = (char)((uVar4 & 3) << 6);
        pcVar20[-0x25] = pcVar20[-0x25] + cVar3;
        pcVar20[-0x19] = pcVar20[-0x19] + cVar3;
        pcVar20[-0xd] = pcVar20[-0xd] + cVar3;
        pcVar20[-1] = pcVar20[-1] + cVar3;
        cVar3 = (char)((uVar4 & 0xc) << 4);
        pcVar20[-0x24] = pcVar20[-0x24] + cVar3;
        pcVar20[-0x18] = pcVar20[-0x18] + cVar3;
        pcVar20[-0xc] = pcVar20[-0xc] + cVar3;
        *pcVar20 = *pcVar20 + cVar3;
        local_78 = local_78 + 1;
        puVar14 = (uint *)(_DAT_800ed8c8 + _DAT_1f800080 * 4);
        *local_88 = *puVar14 | 0xc000000;
        *puVar14 = (uint)local_88;
        pcVar20 = pcVar20 + 0x34;
        local_88 = local_88 + 0xd;
        local_68 = local_68 + 0x40;
        local_64 = local_64 + 0x40;
        local_60 = local_60 + 2;
        local_5c = local_5c + 0x10;
        local_58 = local_58 + 2;
        local_54 = local_54 + 7;
        local_50 = local_50 + 7;
        local_4c = local_4c + 7;
        local_48 = local_48 + 7;
      } while (local_78 < 4);
      local_44 = local_44 + 0x40;
      local_40 = local_40 + 0x40;
      local_3c = local_3c + 2;
      local_38 = local_38 + 0x10;
      local_7c = local_7c + 1;
    } while ((int)local_7c < 4);
    _DAT_800bf544 = local_88;
    func_0x00111964(&DAT_80126968,0x20,&DAT_80126a68,0x80126ae8);
  }
  return;
}

