// FUN_80027768

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80027768(uint *param_1,int param_2,short param_3,char param_4)

{
  undefined4 in_zero;
  undefined4 in_at;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_4;
  
  iVar3 = (int)param_3;
  puVar5 = param_1 + 6;
  puVar4 = _DAT_800bf544 + 10;
  puVar6 = param_1;
  do {
    uVar8 = puVar5[-5];
    local_28 = (uint)CONCAT21((short)(((uint)*(byte *)((int)puVar5 + 6) << 0x18) >> 0x10),
                              (char)puVar5[1]) << 8;
    local_24 = CONCAT22(local_24._2_2_,(short)(((uint)*(byte *)((int)puVar5 + -9) << 0x18) >> 0x10))
    ;
    local_20 = (uint)CONCAT21((ushort)*(byte *)((int)puVar5 + 7) << 8,
                              *(undefined1 *)((int)puVar5 + 5)) << 8;
    local_1c = (uint)CONCAT21(local_1c._2_2_,*(undefined1 *)((int)puVar5 + -5)) << 8;
    local_18 = (uint)CONCAT21((ushort)*(byte *)((int)puVar5 + 10) << 8,(char)puVar5[2]) << 8;
    local_14 = (uint)CONCAT21(local_14._2_2_,*(undefined1 *)((int)puVar5 + -1)) << 8;
    setCopReg(2,in_zero,local_28);
    setCopReg(2,in_at,local_24);
    setCopReg(2,&local_18,local_20);
    setCopReg(2,&local_20,local_1c);
    setCopReg(2,param_1,local_18);
    setCopReg(2,param_2 * 0x400000,local_14);
    local_10 = (uint)CONCAT21((ushort)*(byte *)((int)puVar5 + 0xb) << 8,
                              *(undefined1 *)((int)puVar5 + 9)) << 8;
    local_c = (uint)CONCAT21(local_c._2_2_,*(undefined1 *)((int)puVar5 + 3)) << 8;
    copFunction(2,0x280030);
    iVar7 = getCopControlWord(2,0xf800);
    if (-1 < iVar7) {
      uVar2 = getCopReg(2,0xc);
      _DAT_800bf544[2] = uVar2;
      uVar2 = getCopReg(2,0xd);
      _DAT_800bf544[5] = uVar2;
      uVar2 = getCopReg(2,0xe);
      _DAT_800bf544[8] = uVar2;
      setCopReg(2,in_zero,local_10);
      setCopReg(2,in_at,local_c);
      puVar4[-7] = *puVar6 + param_2 * 0x400000;
      copFunction(2,0x180001);
      iVar7 = getCopControlWord(2,0xf800);
      if (-1 < iVar7) {
        uVar2 = getCopReg(2,0xe);
        _DAT_800bf544[0xb] = uVar2;
        puVar4[-4] = uVar8 & 0x7fffff;
        copFunction(2,0x168002e);
        iVar7 = getCopReg(2,7);
        uVar2 = iVar7 + iVar3 >> 10;
        local_4 = (iVar7 + iVar3 >> (uVar2 & 0x1f)) + uVar2 * 0x200;
        if (0x7fb < local_4 - 4U) {
          local_4 = -1;
        }
        if (-1 < local_4) {
          uVar2 = puVar5[-4];
          puVar4[-1] = uVar2;
          puVar4[2] = (int)uVar2 >> 0x10;
          *(char *)(puVar4 + -4) = (char)puVar4[-4] + param_4;
          *(char *)(puVar4 + -7) = (char)puVar4[-7] + param_4;
          *(char *)(puVar4 + 2) = (char)puVar4[2] + param_4;
          *(char *)(puVar4 + -1) = (char)puVar4[-1] + param_4;
          setCopReg(2,0x4000,_DAT_1f800090);
          setCopReg(2,unaff_s4,puVar6[3]);
          setCopReg(2,unaff_s5,puVar6[4]);
          setCopReg(2,unaff_s6,puVar6[5]);
          setCopReg(2,iVar3,puVar6[5]);
          copFunction(2,0xf8002a);
          uVar2 = getCopReg(2,0x14);
          _DAT_800bf544[1] = uVar2;
          uVar2 = getCopReg(2,0x15);
          _DAT_800bf544[4] = uVar2;
          uVar2 = getCopReg(2,0x16);
          _DAT_800bf544[7] = uVar2;
          uVar1 = 0x3e;
          if ((uVar8 & 0x40000000) == 0) {
            uVar1 = 0x3c;
          }
          *(undefined1 *)((int)puVar4 + -0x21) = uVar1;
          setCopReg(2,iVar3,*puVar5);
          copFunction(2,0x780010);
          uVar2 = getCopReg(2,0x16);
          *puVar4 = uVar2;
          param_1 = (uint *)(_DAT_800ed8c8 + local_4 * 4);
          *_DAT_800bf544 = *param_1 | 0xc000000;
          *param_1 = (uint)_DAT_800bf544;
          puVar4 = puVar4 + 0xd;
          _DAT_800bf544 = _DAT_800bf544 + 0xd;
        }
      }
    }
    puVar5 = puVar5 + 9;
    puVar6 = puVar6 + 9;
  } while (0 < (int)uVar8);
  return;
}

