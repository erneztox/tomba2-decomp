// FUN_0803b8b0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0803b8b0(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_zero;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  undefined2 *puVar11;
  uint *puVar12;
  
  puVar10 = _DAT_800bf544;
  puVar12 = param_1;
  if (param_3 != 0) {
    puVar11 = (undefined2 *)((int)param_1 + 0x22);
    puVar9 = _DAT_800bf544 + 9;
    do {
      iVar8 = param_3 + -1;
      setCopReg(2,in_zero,puVar12[4]);
      setCopReg(2,param_3,puVar12[6]);
      setCopReg(2,0x800,puVar12[5]);
      setCopReg(2,param_1,puVar12[7]);
      setCopReg(2,0x1800,puVar12[5] >> 0x10);
      setCopReg(2,param_2,puVar12[8]);
      puVar9[-8] = *puVar12;
      copFunction(2,0x280030);
      puVar9[-6] = *(uint *)(puVar11 + -0xd);
      puVar9[-3] = *(uint *)(puVar11 + -0xb);
      uVar6 = *(uint *)(puVar11 + -0xf);
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        puVar9[-5] = uVar6 & 0xf0f0f0;
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar7 = getCopReg(2,0xc);
          puVar10[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          puVar10[5] = uVar7;
          uVar7 = getCopReg(2,0xe);
          puVar10[8] = uVar7;
          if (((((ushort)puVar9[-7] < 0x140) || ((ushort)puVar9[-4] < 0x140)) ||
              ((ushort)puVar9[-1] < 0x140)) &&
             (((*(ushort *)((int)puVar9 + -0x1a) < 0xf0 || (*(ushort *)((int)puVar9 + -0xe) < 0xf0))
              || (*(ushort *)((int)puVar9 + -2) < 0xf0)))) {
            puVar9[-2] = (uVar6 & 0xf0f0f) << 4;
            iVar1 = getCopReg(2,0x11);
            iVar2 = getCopReg(2,0x12);
            iVar3 = getCopReg(2,0x13);
            uVar7 = uVar6 >> 0x18 & 3;
            iVar4 = iVar3 >> 2;
            if (uVar7 == 2) {
              if (iVar1 < iVar2) {
                if (iVar1 < iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else if (iVar2 < iVar3) {
                iVar4 = iVar2 >> 2;
              }
              _DAT_1f800004 = iVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (uVar7 < 3) {
              if (uVar7 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
LAB_0803ba48:
              if (iVar2 < iVar1) {
                if (iVar3 < iVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else if (iVar3 < iVar2) {
                iVar4 = iVar2 >> 2;
              }
              _DAT_1f800004 = iVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (uVar7 == 3) goto LAB_0803ba48;
            copFunction(2,0x158002d);
            _DAT_1f800004 = getCopReg(2,7);
            if (_DAT_1f800004 + 399U < 0x1b7) {
              _DAT_1f800004 = 0x28;
            }
            _DAT_1f800004 =
                 (_DAT_1f800004 >> (_DAT_1f800004 >> 10 & 0x1fU)) + (_DAT_1f800004 >> 10) * 0x200;
            if (0x7fb < _DAT_1f800004 - 4U) {
              _DAT_1f800004 = -1;
            }
            if ((uVar6 >> 0x18 & 4) != 0) {
              _DAT_1f800004 = _DAT_1f800004 + -10;
            }
            param_1 = (uint *)0x9000000;
            if (-1 < _DAT_1f800004) {
              *(undefined2 *)puVar9 = *puVar11;
              puVar5 = (uint *)(param_2 + _DAT_1f800004 * 4);
              *puVar10 = *puVar5 | 0x9000000;
              *puVar5 = (uint)puVar10;
              puVar9 = puVar9 + 10;
              puVar10 = puVar10 + 10;
            }
          }
        }
      }
      puVar11 = puVar11 + 0x12;
      puVar12 = puVar12 + 9;
      param_3 = iVar8;
    } while (iVar8 != 0);
  }
  _DAT_800bf544 = puVar10;
  return puVar12;
}

