// FUN_08042aa8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_08042aa8(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_zero;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  undefined2 *puVar9;
  uint *puVar10;
  
  puVar8 = _DAT_800bf544;
  puVar10 = param_1;
  if (param_3 != 0) {
    puVar9 = (undefined2 *)((int)param_1 + 0x22);
    puVar7 = _DAT_800bf544 + 9;
    do {
      iVar6 = param_3 + -1;
      setCopReg(2,in_zero,puVar10[4]);
      setCopReg(2,param_3,puVar10[6]);
      setCopReg(2,0x800,puVar10[5]);
      setCopReg(2,param_1,puVar10[7]);
      setCopReg(2,0x1800,puVar10[5] >> 0x10);
      setCopReg(2,param_2,puVar10[8]);
      puVar7[-8] = *puVar10;
      copFunction(2,0x280030);
      puVar7[-6] = *(uint *)(puVar9 + -0xd);
      puVar7[-3] = *(uint *)(puVar9 + -0xb);
      uVar5 = *(uint *)(puVar9 + -0xf);
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        puVar7[-5] = uVar5 & 0xf0f0f0;
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar1 = getCopReg(2,0xc);
          puVar8[2] = uVar1;
          uVar1 = getCopReg(2,0xd);
          puVar8[5] = uVar1;
          uVar1 = getCopReg(2,0xe);
          puVar8[8] = uVar1;
          if (((((ushort)puVar7[-7] < 0x140) || ((ushort)puVar7[-4] < 0x140)) ||
              ((ushort)puVar7[-1] < 0x140)) &&
             (((*(ushort *)((int)puVar7 + -0x1a) < 0xf0 || (*(ushort *)((int)puVar7 + -0xe) < 0xf0))
              || (*(ushort *)((int)puVar7 + -2) < 0xf0)))) {
            puVar7[-2] = (uVar5 & 0xf0f0f) << 4;
            if (((uVar5 >> 0x18 & 4) == 0) || (_DAT_1f80009c == 0)) {
              uVar5 = uVar5 >> 0x18 & 3;
              if (uVar5 == 2) {
                iVar6 = getCopReg(2,0x11);
                iVar2 = getCopReg(2,0x12);
                iVar3 = getCopReg(2,0x13);
                if (iVar6 < iVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                if (iVar3 <= iVar2) {
                  _DAT_1f800004 = iVar3 >> 2;
                  halt_baddata();
                }
                _DAT_1f800004 = iVar2 >> 2;
                halt_baddata();
              }
              if (uVar5 < 3) {
                if (uVar5 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
LAB_08042c48:
                iVar6 = getCopReg(2,0x11);
                iVar2 = getCopReg(2,0x12);
                iVar3 = getCopReg(2,0x13);
                if (iVar6 <= iVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                if (iVar6 <= iVar3) {
                  _DAT_1f800004 = iVar3 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (uVar5 == 3) goto LAB_08042c48;
              copFunction(2,0x158002d);
              iVar2 = getCopReg(2,7);
              _DAT_1f800004 = (iVar2 >> (iVar2 >> 10 & 0x1fU)) + (iVar2 >> 10) * 0x200;
              if (0x7fb < _DAT_1f800004 - 4U) {
                _DAT_1f800004 = -1;
              }
              param_1 = (uint *)0x9000000;
              if (-1 < _DAT_1f800004) {
                *(undefined2 *)puVar7 = *puVar9;
                puVar4 = (uint *)(param_2 + _DAT_1f800004 * 4);
                *puVar8 = *puVar4 | 0x9000000;
                *puVar4 = (uint)puVar8;
                puVar7 = puVar7 + 10;
                puVar8 = puVar8 + 10;
              }
            }
          }
        }
      }
      puVar9 = puVar9 + 0x12;
      puVar10 = puVar10 + 9;
      param_3 = iVar6;
    } while (iVar6 != 0);
  }
  _DAT_800bf544 = puVar8;
  return puVar10;
}

