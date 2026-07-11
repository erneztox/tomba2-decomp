// FUN_0802be1c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0802be1c(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 in_zero;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined2 *puVar11;
  uint *puVar12;
  
  puVar10 = _DAT_800bf544;
  puVar12 = param_1;
  if (param_3 != 0) {
    puVar11 = (undefined2 *)((int)param_1 + 0x22);
    puVar7 = _DAT_800bf544 + 9;
    iVar4 = 0x1f800000;
    do {
      param_3 = param_3 + -1;
      setCopReg(2,in_zero,puVar12[4]);
      setCopReg(2,iVar4,puVar12[6]);
      setCopReg(2,0x800,puVar12[5]);
      setCopReg(2,param_1,puVar12[7]);
      setCopReg(2,0x1800,puVar12[5] >> 0x10);
      setCopReg(2,param_2,puVar12[8]);
      puVar7[-8] = *puVar12;
      copFunction(2,0x280030);
      puVar7[-6] = *(uint *)(puVar11 + -0xd);
      puVar7[-3] = *(uint *)(puVar11 + -0xb);
      uVar8 = *(uint *)(puVar11 + -0xf);
      _DAT_1f800080 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800080) {
        copFunction(2,0x1400006);
        puVar7[-5] = uVar8 & 0xfff0f0f0;
        _DAT_1f800080 = getCopReg(2,0x18);
        if (0 < _DAT_1f800080) {
          uVar9 = getCopReg(2,0xc);
          puVar10[2] = uVar9;
          uVar9 = getCopReg(2,0xd);
          puVar10[5] = uVar9;
          uVar9 = getCopReg(2,0xe);
          puVar10[8] = uVar9;
          if (((((ushort)puVar7[-7] < 0x140) || ((ushort)puVar7[-4] < 0x140)) ||
              ((ushort)puVar7[-1] < 0x140)) &&
             (((*(ushort *)((int)puVar7 + -0x1a) < 0xf0 || (*(ushort *)((int)puVar7 + -0xe) < 0xf0))
              || (*(ushort *)((int)puVar7 + -2) < 0xf0)))) {
            uVar9 = uVar8 >> 0x18;
            puVar7[-2] = (uVar8 & 0xfff0f0f) << 4;
            if ((uVar9 & 3) != 0) {
              iVar4 = getCopReg(2,0x11);
              iVar1 = getCopReg(2,0x12);
              iVar2 = getCopReg(2,0x13);
              iVar5 = iVar2 >> 2;
              if ((uVar9 & 3) == 1) {
                if (iVar4 <= iVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                if (iVar2 < iVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else {
                if (iVar4 < iVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                if (iVar1 < iVar2) {
                  iVar5 = iVar1 >> 2;
                }
              }
              _DAT_1f800084 = iVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            copFunction(2,0x158002d);
            iVar4 = getCopReg(2,7);
            _DAT_1f800084 = (iVar4 >> (iVar4 >> 10 & 0x1fU)) + (iVar4 >> 10) * 0x200;
            if (0x7fb < _DAT_1f800084 - 4U) {
              _DAT_1f800084 = -1;
            }
            if (-1 < _DAT_1f800084) {
              *(undefined2 *)puVar7 = *puVar11;
              if ((uVar9 & 0x10) != 0) {
                *(char *)(puVar7 + -6) = (char)puVar7[-6] + (char)(_DAT_8012c92c >> 4);
                *(char *)(puVar7 + -3) = (char)puVar7[-3] + (char)(_DAT_8012c92c >> 4);
                *(char *)puVar7 = (char)*puVar7 + (char)(_DAT_8012c92c >> 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if ((uVar9 & 8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if ((uVar9 & 4) != 0) {
                cVar3 = (char)(_DAT_8012c928 >> 4);
                *(char *)(puVar7 + -6) = (char)puVar7[-6] + cVar3;
                *(char *)puVar7 = (char)*puVar7 + cVar3;
                *(char *)(puVar7 + -3) = (char)puVar7[-3] + cVar3;
              }
              puVar6 = (uint *)(param_2 + _DAT_1f800084 * 4);
              param_1 = (uint *)0x9000000;
              *puVar10 = *puVar6 | 0x9000000;
              *puVar6 = (uint)puVar10;
              puVar7 = puVar7 + 10;
              puVar10 = puVar10 + 10;
            }
          }
        }
      }
      puVar11 = puVar11 + 0x12;
      puVar12 = puVar12 + 9;
      iVar4 = param_3;
    } while (param_3 != 0);
  }
  _DAT_800bf544 = puVar10;
  return puVar12;
}

