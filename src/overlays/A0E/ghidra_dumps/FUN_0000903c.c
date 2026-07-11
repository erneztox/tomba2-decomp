// FUN_0000903c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000903c(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  char cVar2;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 uVar3;
  undefined4 extraout_at_00;
  char cVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined1 *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 local_40;
  undefined4 local_3c;
  
  puVar11 = _DAT_800bf544;
  cVar2 = (char)(*(short *)(param_1 + 0x5a) * 9 >> 0xc) * '\x10';
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  _DAT_1f800090 = 0;
  func_0x000329e0(1,param_2,param_3,0);
  iVar14 = -0xc0;
  iVar6 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
  puVar10 = (undefined1 *)((int)puVar11 + 7);
  iVar7 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
  iVar12 = iVar7 * -0xc0;
  iVar13 = iVar6 * -0xc0;
  uVar3 = extraout_at;
  do {
    local_40 = CONCAT22(*(undefined2 *)(param_1 + 0x32),
                        *(short *)(param_1 + 0x2e) + (short)(iVar12 >> 0xc));
    local_3c = CONCAT22(local_3c._2_2_,*(short *)(param_1 + 0x36) + (short)(iVar13 >> 0xc));
    setCopReg(2,in_zero,local_40);
    setCopReg(2,uVar3,local_3c);
    iVar8 = func_0x000317cc(0xffffffe2);
    if (iVar8 == 0) {
      sVar5 = *(short *)(param_1 + 0x84);
      *(undefined2 *)(puVar10 + 0x13) = 0x2a;
      iVar8 = _DAT_1f800084;
      *(undefined2 *)(puVar10 + 7) = 0x34f3;
      _DAT_1f800088 = _DAT_1f800084;
      sVar1 = (short)((uint)(iVar8 * 0x50) >> 0x10);
      iVar8 = sVar5 * _DAT_1f800084;
      sVar5 = _DAT_1f80008c + sVar1 + 1;
      *(short *)(puVar10 + 0x19) = sVar5;
      *(short *)(puVar10 + 1) = sVar5;
      sVar5 = (_DAT_1f80008c - sVar1) + -1;
      *(short *)(puVar10 + 0x25) = sVar5;
      *(short *)(puVar10 + 0xd) = sVar5;
      sVar5 = _DAT_1f80008e - (short)((iVar8 >> 0x10) * 5 >> 2);
      *(short *)(puVar10 + 0xf) = sVar5;
      *(short *)(puVar10 + 3) = sVar5;
      sVar5 = _DAT_1f80008e;
      cVar4 = cVar2 + '\x01';
      puVar10[0x1d] = cVar4;
      puVar10[5] = cVar4;
      cVar4 = cVar2 + '\x0e';
      puVar10[0x29] = cVar4;
      puVar10[0x11] = cVar4;
      puVar10[0x12] = 0xd0;
      puVar10[6] = 0xd0;
      puVar10[0x2a] = 0xfe;
      puVar10[0x1e] = 0xfe;
      *(undefined4 *)(puVar10 + 0x21) = 0xa0a0a0;
      *(undefined4 *)(puVar10 + 0x15) = 0xa0a0a0;
      *(undefined4 *)(puVar10 + 9) = 0xa0a0a0;
      *(undefined4 *)(puVar10 + -3) = 0xa0a0a0;
      *puVar10 = 0x3e;
      *(short *)(puVar10 + 0x27) = sVar5;
      *(short *)(puVar10 + 0x1b) = sVar5;
      puVar9 = (uint *)(_DAT_800ed8c8 + _DAT_1f800080 * 4);
      *puVar11 = *puVar9 | 0xc000000;
      *puVar9 = (uint)puVar11;
      puVar10 = puVar10 + 0x34;
      puVar11 = puVar11 + 0xd;
    }
    iVar14 = iVar14 + 0x80;
    iVar13 = iVar13 + iVar6 * 0x80;
    iVar12 = iVar12 + iVar7 * 0x80;
    uVar3 = extraout_at_00;
  } while (iVar14 < 0xc0);
  _DAT_800bf544 = puVar11;
  return;
}

