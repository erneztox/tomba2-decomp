// FUN_00002e40

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002e40(int param_1)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  short *psVar6;
  short *psVar7;
  undefined2 local_38;
  short local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined1 local_30;
  undefined1 local_2f;
  undefined2 local_2e;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  
  puVar1 = _DAT_800bf544;
  local_34 = 0x140;
  local_32 = 0xf0;
  local_38 = 0;
  _DAT_800bf544 = _DAT_800bf544 + 3;
  local_36 = (ushort)DAT_1f800135 << 8;
  func_0x00081cf8(puVar1,&local_38);
  iVar3 = _DAT_800ed8c8;
  *puVar1 = *(uint *)(_DAT_800ed8c8 + 0x14) | 0x2000000;
  *(uint **)(iVar3 + 0x14) = puVar1;
  psVar7 = *(short **)(param_1 + 8);
  if (*(short *)(param_1 + 0x56) != 0) {
    sVar2 = *(short *)(param_1 + 0x58) + 1;
    *(short *)(param_1 + 0x58) = sVar2;
    if (8 < sVar2) {
      *(undefined2 *)(param_1 + 0x58) = 8;
    }
    if (*(short *)(param_1 + 0x56) < *(short *)(param_1 + 0x54)) {
      iVar3 = (uint)*(ushort *)(param_1 + 0x56) + (uint)*(ushort *)(param_1 + 0x58);
      *(short *)(param_1 + 0x56) = (short)iVar3;
      if ((int)*(short *)(param_1 + 0x54) <= iVar3 * 0x10000 >> 0x10) {
        cVar4 = *(char *)(param_1 + 0x47) + -1;
        *(char *)(param_1 + 0x47) = cVar4;
        if (((_DAT_800ecf54 & 0x10) != 0) && (cVar4 != '\0')) {
          func_0x00074590(0x15,0,0);
          _DAT_800bf4ee = 0x20;
          _DAT_800bf4ec = 0x50;
          DAT_800bf4ea = *(char *)(param_1 + 0x47) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
LAB_00003040:
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0;
      }
    }
    else {
      iVar3 = (uint)*(ushort *)(param_1 + 0x56) - (uint)*(ushort *)(param_1 + 0x58);
      *(short *)(param_1 + 0x56) = (short)iVar3;
      if (iVar3 * 0x10000 >> 0x10 <= (int)*(short *)(param_1 + 0x54)) {
        *(char *)(param_1 + 0x47) = *(char *)(param_1 + 0x47) + '\x01';
        if (((_DAT_800ecf54 & 0x40) != 0) && ((int)(uint)*(byte *)(param_1 + 0x47) < *psVar7 + -1))
        {
          func_0x00074590(0x15,0,0);
          DAT_800bf4ea = *(undefined1 *)(param_1 + 0x47);
          _DAT_800bf4ec = 0x20;
          _DAT_800bf4ee = 0x50;
          halt_baddata();
        }
        goto LAB_00003040;
      }
    }
    sVar2 = *(short *)(param_1 + 0x56);
    if (*(short *)(param_1 + 0x56) != 0) {
      iVar3 = (int)*psVar7 - (uint)*(byte *)(param_1 + 0x52);
      psVar6 = psVar7 + (uint)*(byte *)(param_1 + 0x52) * 0x1e + 2;
      puVar1 = _DAT_800bf544;
      if (3 < iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto joined_r0x000030cc;
    }
  }
  iVar3 = (int)*psVar7 - (uint)*(byte *)(param_1 + 0x47);
  psVar6 = psVar7 + (uint)*(byte *)(param_1 + 0x47) * 0x1e + 2;
  sVar2 = 0x50;
  puVar1 = _DAT_800bf544;
  if (2 < iVar3) {
    iVar3 = 3;
  }
joined_r0x000030cc:
  while (iVar3 = iVar3 + -1, iVar3 != -1) {
    bVar5 = true;
    if (*(short *)(param_1 + 0x56) == 0) {
      bVar5 = psVar6 != psVar7 + (uint)*(byte *)(param_1 + 0x47) * 0x1e + 2;
    }
    _DAT_800bf544 = puVar1;
    func_0x0018c790(0x20,(int)sVar2,bVar5,psVar6);
    psVar6 = psVar6 + 0x1e;
    sVar2 = sVar2 + 0x30;
    puVar1 = _DAT_800bf544;
  }
  local_38 = 0x18;
  local_34 = 0x118;
  local_32 = 0x8d;
  _DAT_800bf544 = puVar1 + 3;
  local_36 = (ushort)DAT_1f800135 * 0x100 + 0x4b;
  func_0x00081cf8(puVar1,&local_38);
  iVar3 = _DAT_800ed8c8;
  *puVar1 = *(uint *)(_DAT_800ed8c8 + 0x14) | 0x2000000;
  *(uint **)(iVar3 + 0x14) = puVar1;
  if (*(char *)(param_1 + 0x47) != '\0') {
    local_2f = 5;
    local_30 = 0;
    local_2e = 0;
    local_22 = 0;
    local_24 = 0;
    local_28 = 0xe;
    local_26 = 0x62;
    func_0x0007e6dc(&local_28,_DAT_800174ac,_DAT_800ecf58);
  }
  if (1 < (int)((int)*psVar7 - (uint)*(byte *)(param_1 + 0x47))) {
    local_2f = 5;
    local_30 = 0;
    local_2e = 0;
    local_22 = 0;
    local_24 = 0;
    local_28 = 0xe;
    local_26 = 0xc2;
    func_0x0007e6dc(&local_28,_DAT_800174b0,_DAT_800ecf58);
  }
  return;
}

