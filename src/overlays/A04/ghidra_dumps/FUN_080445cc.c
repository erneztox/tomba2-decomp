// FUN_080445cc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_080445cc(uint *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_zero;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  
  iVar3 = _DAT_800bf544;
  puVar9 = param_1;
  if (param_3 != 0) {
    puVar8 = param_1 + 4;
    do {
      iVar7 = param_3 + -1;
      setCopReg(2,in_zero,puVar9[5]);
      setCopReg(2,0x800,puVar9[6]);
      setCopReg(2,0x1800,puVar9[6] >> 0x10);
      setCopReg(2,param_3,puVar9[7]);
      setCopReg(2,param_1,puVar9[8]);
      setCopReg(2,0x2800,puVar9[9]);
      uVar5 = *puVar9;
      *(uint *)(iVar3 + 4) = uVar5 & 0xfff0f0f0;
      copFunction(2,0x280030);
      *(uint *)(iVar3 + 0x10) = (uVar5 & 0xfff0f0f) << 4;
      uVar5 = puVar8[-3];
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        *(uint *)(iVar3 + 0xc) = puVar8[-2];
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar2 = getCopReg(2,0xc);
          *(undefined4 *)(iVar3 + 8) = uVar2;
          uVar2 = getCopReg(2,0xd);
          *(undefined4 *)(iVar3 + 0x14) = uVar2;
          uVar2 = getCopReg(2,0xe);
          *(undefined4 *)(iVar3 + 0x20) = uVar2;
          setCopReg(2,in_zero,puVar9[10]);
          setCopReg(2,0x800,puVar9[9] >> 0x10);
          *(uint *)(iVar3 + 0x1c) = uVar5 & 0xfff0f0f0;
          copFunction(2,0x180001);
          *(uint *)(iVar3 + 0x28) = (uVar5 & 0xfff0f0f) << 4;
          *(uint *)(iVar3 + 0x18) = puVar8[-1];
          _DAT_1f800000 = getCopControlWord(2,0xf800);
          if (-1 < _DAT_1f800000) {
            uVar2 = getCopReg(2,0xe);
            *(undefined4 *)(iVar3 + 0x2c) = uVar2;
            if (((((*(ushort *)(iVar3 + 8) < 0x140) || (*(ushort *)(iVar3 + 0x14) < 0x140)) ||
                 (*(ushort *)(iVar3 + 0x20) < 0x140)) || (*(ushort *)(iVar3 + 0x2c) < 0x140)) &&
               (((*(ushort *)(iVar3 + 10) < 0xf0 || (*(ushort *)(iVar3 + 0x16) < 0xf0)) ||
                ((*(ushort *)(iVar3 + 0x22) < 0xf0 || (*(ushort *)(iVar3 + 0x2e) < 0xf0)))))) {
              *(uint *)(iVar3 + 0x18) = puVar8[-1];
              iVar3 = getCopReg(2,0x10);
              iVar7 = getCopReg(2,0x11);
              iVar4 = getCopReg(2,0x12);
              iVar6 = getCopReg(2,0x13);
              uVar5 = uVar5 >> 0x18 & 3;
              if (uVar5 == 1) {
                if (iVar7 < iVar3) {
                  iVar7 = iVar3;
                }
                bVar1 = iVar6 < iVar7;
                if (iVar6 < iVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else {
                if (uVar5 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                if (iVar3 < iVar7) {
                  iVar7 = iVar3;
                }
                bVar1 = iVar7 < iVar6;
                if (iVar4 < iVar6) {
                  bVar1 = iVar7 < iVar4;
                  iVar6 = iVar4;
                }
              }
              if (bVar1) {
                iVar6 = iVar7;
              }
              _DAT_1f800004 = iVar6 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
      }
      puVar8 = puVar8 + 0xb;
      puVar9 = puVar9 + 0xb;
      param_3 = iVar7;
    } while (iVar7 != 0);
  }
  _DAT_800bf544 = iVar3;
  return puVar9;
}

