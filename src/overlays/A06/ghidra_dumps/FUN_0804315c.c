// FUN_0804315c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0804315c(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 in_zero;
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  short *psVar7;
  int *unaff_s4;
  uint *puVar8;
  int unaff_s6;
  int iVar9;
  uint *unaff_s7;
  undefined4 uStack00000010;
  int iStack00000044;
  int iStack0000004c;
  
  uStack00000010 = 0x34808080;
  setCopReg(2,0x3000,&stack0x00000010);
  puVar8 = _DAT_800bf544;
  if (unaff_s6 != 0) {
    psVar7 = (short *)(param_1 + 0x20);
    puVar6 = _DAT_800bf544 + 7;
    iStack00000044 = param_2;
    iStack0000004c = param_4;
    do {
      iVar9 = unaff_s6 + -1;
      setCopReg(2,in_zero,unaff_s7[4]);
      setCopReg(2,unaff_s6,unaff_s7[6]);
      setCopReg(2,0x800,unaff_s7[5]);
      setCopReg(2,param_1,unaff_s7[7]);
      setCopReg(2,0x1800,unaff_s7[5] >> 0x10);
      setCopReg(2,param_2,unaff_s7[8]);
      puVar6[-6] = *unaff_s7;
      copFunction(2,0x280030);
      puVar6[-4] = *(uint *)(psVar7 + -0xc);
      puVar6[-1] = *(uint *)(psVar7 + -10);
      param_1 = *(uint *)(psVar7 + -0xe);
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        puVar6[-3] = param_1 & 0xf0f0f0;
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar5 = getCopReg(2,0xc);
          puVar8[2] = uVar5;
          uVar5 = getCopReg(2,0xd);
          puVar8[5] = uVar5;
          uVar5 = getCopReg(2,0xe);
          puVar8[8] = uVar5;
          if (((((ushort)puVar6[-5] < 0x140) || ((ushort)puVar6[-2] < 0x140)) ||
              ((ushort)puVar6[1] < 0x140)) &&
             (((*(ushort *)((int)puVar6 + -0x12) < 0xf0 || (*(ushort *)((int)puVar6 + -6) < 0xf0))
              || (*(ushort *)((int)puVar6 + 6) < 0xf0)))) {
            *puVar6 = (param_1 & 0xf0f0f) << 4;
            _DAT_1f800084 = getCopReg(2,0x11);
            _DAT_1f800088 = getCopReg(2,0x12);
            _DAT_1f80008c = getCopReg(2,0x13);
            if (((param_1 >> 0x18 & 4) == 0) || (_DAT_1f80009c == 0)) {
              uVar5 = param_1 >> 0x18 & 3;
              iVar1 = _DAT_1f80008c >> 2;
              if (uVar5 == 2) {
                if (_DAT_1f800084 < _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                if (_DAT_1f800088 < _DAT_1f80008c) {
                  iVar1 = _DAT_1f800088 >> 2;
                }
                goto LAB_080433ec;
              }
              if (uVar5 < 3) {
                if (uVar5 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else if (uVar5 != 3) {
                copFunction(2,0x158002d);
                iVar1 = getCopReg(2,7);
                *unaff_s4 = iVar1;
                uVar5 = *unaff_s4 >> 10;
                iVar1 = (*unaff_s4 >> (uVar5 & 0x1f)) + uVar5 * 0x200;
                *unaff_s4 = iVar1;
                if (0x7fb < iVar1 - 4U) {
                  *unaff_s4 = -1;
                }
                if (-1 < *unaff_s4) {
                  *(short *)(puVar6 + 2) = psVar7[1];
                  if (iStack0000004c != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  iVar1 = func_0x00078240((int)psVar7[-8] - (int)_DAT_1f800160,
                                          (int)psVar7[-7] - (int)_DAT_1f800162,
                                          (int)psVar7[-6] - (int)_DAT_1f800164);
                  iVar1 = iVar1 << 1;
                  iVar2 = func_0x00078240((int)psVar7[-4] - (int)_DAT_1f800160,
                                          (int)psVar7[-3] - (int)_DAT_1f800162,
                                          (int)psVar7[-5] - (int)_DAT_1f800164);
                  iVar2 = iVar2 << 1;
                  param_2 = (int)psVar7[-1] - (int)_DAT_1f800162;
                  iVar3 = func_0x00078240((int)psVar7[-2] - (int)_DAT_1f800160,param_2,
                                          (int)*psVar7 - (int)_DAT_1f800164);
                  iVar3 = iVar3 << 1;
                  if (0x4000 < iVar1) {
                    iVar1 = 0x4000;
                  }
                  if (0x4000 < iVar2) {
                    iVar2 = 0x4000;
                  }
                  if (0x4000 < iVar3) {
                    iVar3 = 0x4000;
                  }
                  setCopReg(2,0x4000,iVar1);
                  setCopReg(2,0x3000,puVar6[-6]);
                  copFunction(2,0x780010);
                  uVar5 = getCopReg(2,0x16);
                  puVar8[1] = uVar5;
                  setCopReg(2,0x4000,iVar2);
                  setCopReg(2,0x3000,puVar6[-3]);
                  copFunction(2,0x780010);
                  uVar5 = getCopReg(2,0x16);
                  puVar8[4] = uVar5;
                  setCopReg(2,0x4000,iVar3);
                  setCopReg(2,0x3000,*puVar6);
                  copFunction(2,0x780010);
                  uVar5 = getCopReg(2,0x16);
                  *puVar6 = uVar5;
                  puVar4 = (uint *)(iStack00000044 + *unaff_s4 * 4);
                  param_1 = 0x9000000;
                  *puVar8 = *puVar4 | 0x9000000;
                  *puVar4 = (uint)puVar8;
                  puVar6 = puVar6 + 10;
                  puVar8 = puVar8 + 10;
                }
                goto LAB_080435c8;
              }
              if (_DAT_1f800084 <= _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (_DAT_1f80008c < _DAT_1f800084) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
LAB_080433ec:
              *unaff_s4 = iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
      }
LAB_080435c8:
      psVar7 = psVar7 + 0x12;
      unaff_s7 = unaff_s7 + 9;
      unaff_s6 = iVar9;
    } while (iVar9 != 0);
  }
  _DAT_800bf544 = puVar8;
  return unaff_s7;
}

