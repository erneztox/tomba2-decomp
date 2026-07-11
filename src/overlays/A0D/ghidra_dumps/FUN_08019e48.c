// FUN_08019e48

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_08019e48(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_zero;
  uint uVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar2 = _DAT_800bf544;
  puVar9 = param_1;
  if (param_3 != 0) {
    puVar7 = param_1 + 7;
    puVar6 = (ushort *)(_DAT_800bf544 + 0x22);
    do {
      iVar8 = param_3 + -1;
      setCopReg(2,in_zero,puVar9[4]);
      setCopReg(2,param_3,puVar9[6]);
      setCopReg(2,0x800,puVar9[5]);
      setCopReg(2,param_1,puVar9[7]);
      setCopReg(2,0x1800,(uint)puVar9[5] >> 0x10);
      setCopReg(2,param_2,puVar9[8]);
      *(undefined4 *)(iVar2 + 4) = *puVar9;
      copFunction(2,0x280030);
      *(undefined4 *)(iVar2 + 0xc) = puVar7[-5];
      *(undefined4 *)(iVar2 + 0x18) = puVar7[-4];
      param_1 = (undefined4 *)puVar7[-6];
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        *(uint *)(iVar2 + 0x10) = (uint)param_1 & 0xf0f0f0;
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar1 = getCopReg(2,0xc);
          *(undefined4 *)(iVar2 + 8) = uVar1;
          uVar1 = getCopReg(2,0xd);
          *(undefined4 *)(iVar2 + 0x14) = uVar1;
          uVar1 = getCopReg(2,0xe);
          *(undefined4 *)(iVar2 + 0x20) = uVar1;
          if ((((*(ushort *)(iVar2 + 8) < 0x140) || (*(ushort *)(iVar2 + 0x14) < 0x140)) ||
              (*(ushort *)(iVar2 + 0x20) < 0x140)) &&
             (((*(ushort *)(iVar2 + 10) < 0xf0 || (*(ushort *)(iVar2 + 0x16) < 0xf0)) ||
              (*puVar6 < 0xf0)))) {
            *(uint *)(iVar2 + 0x1c) = ((uint)param_1 & 0xf0f0f) << 4;
            uVar5 = (uint)param_1 >> 0x18 & 3;
            if (uVar5 == 1) {
              iVar2 = getCopReg(2,0x11);
              iVar8 = getCopReg(2,0x12);
              iVar3 = getCopReg(2,0x13);
              if (iVar2 <= iVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              iVar8 = iVar3 >> 2;
              if (iVar3 < iVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
            else {
              if (uVar5 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              iVar2 = getCopReg(2,0x11);
              iVar3 = getCopReg(2,0x12);
              iVar4 = getCopReg(2,0x13);
              if (iVar2 < iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              iVar8 = iVar4 >> 2;
              if (iVar3 < iVar4) {
                iVar8 = iVar3 >> 2;
              }
            }
            _DAT_1f800004 = iVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
      puVar7 = puVar7 + 9;
      puVar9 = puVar9 + 9;
      param_3 = iVar8;
    } while (iVar8 != 0);
  }
  _DAT_800bf544 = iVar2;
  return puVar9;
}

