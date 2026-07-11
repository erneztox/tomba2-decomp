// FUN_08019d74

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019d74(short *param_1,short *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 in_zero;
  undefined4 extraout_at;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  short *psVar6;
  uint uVar7;
  uint *puVar8;
  
  puVar2 = _DAT_800bf544;
  psVar6 = param_2;
  func_0x000329e0(6);
  _DAT_1f8000c0 =
       CONCAT22((short)((int)param_1[1] + (int)param_2[1] >> 1),
                (short)((int)*param_1 + (int)*param_2 >> 1));
  _DAT_1f8000c4 = CONCAT22(DAT_1f8000c4_2,(short)((int)param_1[2] + (int)param_2[2] >> 1));
  setCopReg(2,in_zero,*(undefined4 *)param_1);
  setCopReg(2,extraout_at,*(undefined4 *)(param_1 + 2));
  setCopReg(2,0x1f800080,_DAT_1f8000c0);
  setCopReg(2,(int)param_2[2],_DAT_1f8000c4);
  setCopReg(2,0x1f8000c0,*(undefined4 *)param_2);
  setCopReg(2,psVar6,*(undefined4 *)(param_2 + 2));
  puVar2[9] = 0x55555555;
  copFunction(2,0x280030);
  _DAT_1f800080 = getCopControlWord(2,0xf800);
  if (-1 < _DAT_1f800080) {
    copFunction(2,0x158002d);
    iVar1 = getCopReg(2,7);
    _DAT_1f800080 = (iVar1 >> (iVar1 >> 10 & 0x1fU)) + (iVar1 >> 10) * 0x200;
    if (0x7fb < _DAT_1f800080 - 4U) {
      _DAT_1f800080 = -1;
    }
    if (0 < _DAT_1f800080) {
      uVar3 = getCopReg(2,0xc);
      puVar2[2] = uVar3;
      uVar3 = getCopReg(2,0xe);
      puVar2[8] = uVar3;
      _DAT_1f800084 = getCopReg(2,0xd);
      *(short *)(puVar2 + 4) = (short)((int)(short)puVar2[2] + (int)_DAT_1f800084 >> 1);
      *(short *)(puVar2 + 6) = (short)((int)(short)puVar2[8] + (int)_DAT_1f800084 >> 1);
      *(short *)((int)puVar2 + 0x12) =
           (short)((int)*(short *)((int)puVar2 + 10) + (int)_DAT_1f800086 >> 1);
      *(short *)((int)puVar2 + 0x1a) =
           (short)((int)*(short *)((int)puVar2 + 0x22) + (int)_DAT_1f800086 >> 1);
      uVar3 = (uint)(ushort)puVar2[2] + (uint)*(ushort *)((int)puVar2 + 10) & 0xf;
      uVar7 = (uint)*(byte *)(uVar3 + 0x8012085c);
      uVar4 = uVar3 + 4 & 0xf;
      uVar7 = uVar7 << 0x10 | uVar7 << 8 | 0x5e000000 | uVar7;
      puVar2[1] = uVar7;
      puVar2[0xb] = uVar7;
      uVar3 = (uint)*(byte *)(uVar4 + 0x8012085c);
      uVar4 = uVar4 + 4 & 0xf;
      uVar3 = uVar3 << 0x10 | uVar3 << 8 | uVar3;
      puVar2[3] = uVar3;
      puVar2[0xd] = uVar3;
      uVar3 = (uint)*(byte *)(uVar4 + 0x8012085c);
      uVar3 = uVar3 << 0x10 | uVar3 << 8 | uVar3;
      puVar2[5] = uVar3;
      puVar2[0xf] = uVar3;
      uVar3 = (uint)*(byte *)((uVar4 + 4 & 0xf) + 0x8012085c);
      uVar3 = uVar3 << 0x10 | uVar3 << 8 | uVar3;
      puVar2[7] = uVar3;
      puVar2[0x11] = uVar3;
      puVar5 = (uint *)(_DAT_800ed8c8 + _DAT_1f800080 * 4);
      *puVar2 = *puVar5 | 0x9000000;
      *puVar5 = (uint)puVar2;
      puVar2[0xc] = puVar2[2];
      puVar2[0xe] = puVar2[4];
      puVar2[0x13] = 0x55555555;
      puVar2[0x10] = puVar2[6];
      puVar2[0x12] = puVar2[8];
      *(short *)((int)puVar2 + 0x32) = *(short *)((int)puVar2 + 0x32) + 1;
      *(short *)((int)puVar2 + 0x3a) = *(short *)((int)puVar2 + 0x3a) + 1;
      *(short *)((int)puVar2 + 0x42) = *(short *)((int)puVar2 + 0x42) + 1;
      *(short *)((int)puVar2 + 0x4a) = *(short *)((int)puVar2 + 0x4a) + 1;
      puVar5 = (uint *)(_DAT_800ed8c8 + _DAT_1f800080 * 4);
      puVar2[10] = *puVar5 | 0x9000000;
      *puVar5 = (uint)(puVar2 + 10);
      puVar8 = puVar2 + 0x14;
      func_0x00083de0(puVar8,0,1,0x75,0);
      puVar5 = (uint *)(_DAT_800ed8c8 + _DAT_1f800080 * 4);
      *puVar8 = *puVar5 | 0x2000000;
      *puVar5 = (uint)puVar8;
      _DAT_800bf544 = puVar2 + 0x17;
    }
  }
  return;
}

