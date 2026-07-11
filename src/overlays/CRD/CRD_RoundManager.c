// CRD_RoundManager (CRD_RoundManager) - Round/turn management

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_RoundManager(int param_1,int param_2,short param_3,short param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  ushort local_60 [8];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined2 local_36;
  short local_30;
  short local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  
  local_50 = _DAT_8018a0c8;
  local_4c = _DAT_8018a0cc;
  local_48 = _DAT_8018a0d0;
  local_44 = _DAT_8018a0d4;
  local_40 = _DAT_8018a0d8;
  bVar1 = (*(byte *)(param_1 + 0x21) & 8) != 0;
  if (bVar1) {
    local_60[0] = 0xd1;
  }
  uVar2 = (uint)bVar1;
  if ((*(byte *)(param_1 + 0x21) & 2) != 0) {
    local_60[uVar2] = 0x39;
    uVar2 = uVar2 + 1;
  }
  if ((*(byte *)(param_1 + 0x21) & 1) != 0) {
    local_60[uVar2] = 0x3a;
    uVar2 = uVar2 + 1;
  }
  if ((*(byte *)(param_1 + 0x21) & 4) != 0) {
    local_60[uVar2] = 0x3b;
    uVar2 = uVar2 + 1;
  }
  if ((*(ushort *)(param_1 + 0x24) & 0x200) != 0) {
    local_60[uVar2] = 0xd0;
    uVar2 = uVar2 + 1;
  }
  if ((*(uint *)(param_1 + 0x20) & 0x3000) != 0) {
    local_60[uVar2] = 0x115;
    uVar2 = uVar2 + 1;
  }
  iVar3 = uVar2 - 1;
  if (uVar2 != 0) {
    if (-1 < iVar3) {
      iVar5 = iVar3 * 4 + 2;
      psVar4 = (short *)(&local_50 + iVar3);
      do {
        uVar2 = (uint)local_60[iVar3];
        local_2e = *(short *)((int)&local_50 + iVar5) + param_4;
        local_30 = *psVar4 + param_3;
        if (param_2 == 1) {
          uVar2 = uVar2 | 0x8000;
        }
        if ((uVar2 & 0x8000) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        local_38 = 0;
        iVar5 = iVar5 + -4;
        psVar4 = psVar4 + -2;
        local_37 = 5;
        local_36 = 0;
        local_2a = 0;
        local_2c = 0;
        iVar3 = iVar3 + -1;
        func_0x0007e6dc(&local_30,*(undefined4 *)((uVar2 & 0xfff) * 4 + -0x7ffe8ccc),_DAT_800ecf58,
                        &local_38);
      } while (-1 < iVar3);
    }
    return;
  }
  local_30 = param_3 + 0xf8;
  local_2e = param_4 + 0x10;
  if (param_2 != 1) {
    local_38 = 0;
    local_37 = 5;
    local_36 = 0;
    local_2a = 0;
    local_2c = 0;
    func_0x0007e6dc(&local_30,_DAT_80017414,_DAT_800ecf58,&local_38);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

