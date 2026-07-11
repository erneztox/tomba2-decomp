// FUN_0801a1b4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0801a1b4(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_zero;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  undefined2 *puVar10;
  uint *puVar11;
  
  puVar9 = _DAT_800bf544;
  puVar11 = param_1;
  if (param_3 != 0) {
    puVar10 = (undefined2 *)((int)param_1 + 0x22);
    puVar8 = _DAT_800bf544 + 9;
    do {
      iVar7 = param_3 + -1;
      setCopReg(2,in_zero,puVar11[4]);
      setCopReg(2,param_3,puVar11[6]);
      setCopReg(2,0x800,puVar11[5]);
      setCopReg(2,param_1,puVar11[7]);
      setCopReg(2,0x1800,puVar11[5] >> 0x10);
      setCopReg(2,param_2,puVar11[8]);
      puVar8[-8] = *puVar11;
      copFunction(2,0x280030);
      puVar8[-6] = *(uint *)(puVar10 + -0xd);
      puVar8[-3] = *(uint *)(puVar10 + -0xb);
      uVar6 = *(uint *)(puVar10 + -0xf);
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        puVar8[-5] = uVar6 & 0xf0f0f0;
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar1 = getCopReg(2,0xc);
          puVar9[2] = uVar1;
          uVar1 = getCopReg(2,0xd);
          puVar9[5] = uVar1;
          uVar1 = getCopReg(2,0xe);
          puVar9[8] = uVar1;
          if (((((ushort)puVar8[-7] < 0x140) || ((ushort)puVar8[-4] < 0x140)) ||
              ((ushort)puVar8[-1] < 0x140)) &&
             (((*(ushort *)((int)puVar8 + -0x1a) < 0xf0 || (*(ushort *)((int)puVar8 + -0xe) < 0xf0))
              || (*(ushort *)((int)puVar8 + -2) < 0xf0)))) {
            puVar8[-2] = (uVar6 & 0xf0f0f) << 4;
            if (uVar6 >> 0x18 != 0) {
              iVar7 = getCopReg(2,0x11);
              iVar2 = getCopReg(2,0x12);
              iVar3 = getCopReg(2,0x13);
              iVar4 = iVar3 >> 2;
              if (uVar6 >> 0x18 == 1) {
                if (iVar7 <= iVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                if (iVar3 < iVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else {
                if (iVar7 < iVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                if (iVar2 < iVar3) {
                  iVar4 = iVar2 >> 2;
                }
              }
              _DAT_1f800004 = iVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            copFunction(2,0x158002d);
            iVar2 = getCopReg(2,7);
            _DAT_1f800004 = (iVar2 >> (iVar2 >> 10 & 0x1fU)) + (iVar2 >> 10) * 0x200;
            if (0x7fb < _DAT_1f800004 - 4U) {
              _DAT_1f800004 = -1;
            }
            param_1 = (uint *)0x9000000;
            if (-1 < _DAT_1f800004) {
              *(undefined2 *)puVar8 = *puVar10;
              puVar5 = (uint *)(param_2 + _DAT_1f800004 * 4);
              *puVar9 = *puVar5 | 0x9000000;
              *puVar5 = (uint)puVar9;
              puVar8 = puVar8 + 10;
              puVar9 = puVar9 + 10;
            }
          }
        }
      }
      puVar10 = puVar10 + 0x12;
      puVar11 = puVar11 + 9;
      param_3 = iVar7;
    } while (iVar7 != 0);
  }
  _DAT_800bf544 = puVar9;
  return puVar11;
}

