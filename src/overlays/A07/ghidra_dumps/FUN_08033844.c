// FUN_08033844

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_08033844(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_zero;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar2 = _DAT_800bf544;
  puVar7 = param_1;
  if (param_3 != 0) {
    iVar6 = (int)param_1 + 0x22;
    do {
      iVar5 = param_3 + -1;
      setCopReg(2,in_zero,puVar7[4]);
      setCopReg(2,param_3,puVar7[6]);
      setCopReg(2,0x800,puVar7[5]);
      setCopReg(2,param_1,puVar7[7]);
      setCopReg(2,0x1800,(uint)puVar7[5] >> 0x10);
      setCopReg(2,param_2,puVar7[8]);
      *(undefined4 *)(iVar2 + 4) = *puVar7;
      copFunction(2,0x280030);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar6 + -0x1a);
      *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar6 + -0x16);
      uVar4 = *(uint *)(iVar6 + -0x1e);
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        *(uint *)(iVar2 + 0x10) = uVar4 & 0xf0f0f0;
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
              (*(ushort *)(iVar2 + 0x22) < 0xf0)))) {
            *(uint *)(iVar2 + 0x1c) = (uVar4 & 0xf0f0f) << 4;
            uVar4 = uVar4 >> 0x18 & 3;
            if (uVar4 == 1) {
              iVar2 = getCopReg(2,0x11);
              iVar6 = getCopReg(2,0x12);
              iVar5 = getCopReg(2,0x13);
              if (iVar2 <= iVar6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              iVar6 = iVar5 >> 2;
              if (iVar5 < iVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
            else {
              if (uVar4 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              iVar2 = getCopReg(2,0x11);
              iVar5 = getCopReg(2,0x12);
              iVar3 = getCopReg(2,0x13);
              if (iVar5 < iVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              iVar6 = iVar3 >> 2;
              if (iVar3 < iVar5) {
                iVar6 = iVar5 >> 2;
              }
            }
            _DAT_1f800004 = iVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
      iVar6 = iVar6 + 0x24;
      puVar7 = puVar7 + 9;
      param_3 = iVar5;
    } while (iVar5 != 0);
  }
  _DAT_800bf544 = iVar2;
  return puVar7;
}

