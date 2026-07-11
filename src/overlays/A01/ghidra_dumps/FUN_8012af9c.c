// FUN_8012af9c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8012af9c(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 in_v0;
  int iVar1;
  undefined4 uVar2;
  undefined4 in_v1;
  uint *puVar3;
  int iVar4;
  undefined1 local_10 [8];
  int local_8;
  
  setCopReg(2,in_zero,*param_2);
  setCopReg(2,in_at,param_2[1]);
  setCopReg(2,in_v0,param_2[2]);
  setCopReg(2,in_v1,param_2[3]);
  setCopReg(2,local_10,param_2[4]);
  setCopReg(2,param_2,param_2[5]);
  copFunction(2,0x280030);
  iVar4 = getCopControlWord(2,0xf800);
  iVar1 = -1;
  if (-1 < iVar4) {
    uVar2 = getCopReg(2,0xc);
    *(undefined4 *)(param_1 + 8) = uVar2;
    uVar2 = getCopReg(2,0xd);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    uVar2 = getCopReg(2,0xe);
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    copFunction(2,0x1400006);
    iVar4 = getCopReg(2,0x18);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    iVar1 = -1;
    if (7 < iVar4) {
      setCopReg(2,in_zero,param_2[6]);
      setCopReg(2,in_at,param_2[7]);
      copFunction(2,0x180001);
      iVar1 = getCopControlWord(2,0xf800);
      if (iVar1 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar2 = getCopReg(2,0xe);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
      copFunction(2,0x168002e);
      iVar1 = getCopReg(2,7);
    }
  }
  param_3 = iVar1 + param_3;
  if ((-1 < iVar1) && (-1 < param_3)) {
    local_8 = (param_3 >> (param_3 >> 10 & 0x1fU)) + (param_3 >> 10) * 0x200;
    if (0x7fb < local_8 - 4U) {
      local_8 = -1;
    }
    if (-1 < local_8) {
      if (((((*(ushort *)(param_1 + 8) < 0x140) || (*(ushort *)(param_1 + 0x14) < 0x140)) ||
           (*(ushort *)(param_1 + 0x20) < 0x140)) ||
          (uVar2 = 1, *(ushort *)(param_1 + 0x2c) < 0x140)) &&
         (((*(ushort *)(param_1 + 10) < 0xf0 || (*(ushort *)(param_1 + 0x16) < 0xf0)) ||
          ((*(ushort *)(param_1 + 0x22) < 0xf0 || (uVar2 = 1, *(ushort *)(param_1 + 0x2e) < 0xf0))))
         )) {
        puVar3 = (uint *)(_DAT_800ed8c8 + local_8 * 4);
        *_DAT_800bf544 = *puVar3 | 0xc000000;
        *puVar3 = (uint)_DAT_800bf544;
        uVar2 = 0;
        _DAT_800bf544[1] = *(uint *)(param_1 + 4);
        _DAT_800bf544[2] = *(uint *)(param_1 + 8);
        _DAT_800bf544[3] = *(uint *)(param_1 + 0xc);
        _DAT_800bf544[4] = *(uint *)(param_1 + 0x10);
        _DAT_800bf544[5] = *(uint *)(param_1 + 0x14);
        _DAT_800bf544[6] = *(uint *)(param_1 + 0x18);
        _DAT_800bf544[7] = *(uint *)(param_1 + 0x1c);
        _DAT_800bf544[8] = *(uint *)(param_1 + 0x20);
        _DAT_800bf544[9] = *(uint *)(param_1 + 0x24);
        _DAT_800bf544[10] = *(uint *)(param_1 + 0x28);
        _DAT_800bf544[0xb] = *(uint *)(param_1 + 0x2c);
        _DAT_800bf544[0xc] = *(uint *)(param_1 + 0x30);
        _DAT_800bf544 = _DAT_800bf544 + 0xd;
      }
      return uVar2;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

