// FUN_0801e380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801e380(uint *param_1,undefined4 param_2,short param_3,char param_4)

{
  char cVar1;
  undefined4 in_zero;
  undefined4 in_at;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
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
  
  iVar4 = (int)param_3;
  puVar6 = param_1 + 6;
  puVar5 = _DAT_800bf544 + 10;
  puVar7 = param_1;
  do {
    uVar9 = puVar6[-5];
    local_28 = (uint)CONCAT21((short)(((uint)*(byte *)((int)puVar6 + 6) << 0x18) >> 0x10),
                              (char)puVar6[1]) << 8;
    local_24 = CONCAT22(local_24._2_2_,(short)(((uint)*(byte *)((int)puVar6 + -9) << 0x18) >> 0x10))
    ;
    local_20 = (uint)CONCAT21((ushort)*(byte *)((int)puVar6 + 7) << 8,
                              *(undefined1 *)((int)puVar6 + 5)) << 8;
    local_1c = (uint)CONCAT21(local_1c._2_2_,*(undefined1 *)((int)puVar6 + -5)) << 8;
    local_18 = (uint)CONCAT21((ushort)*(byte *)((int)puVar6 + 10) << 8,(char)puVar6[2]) << 8;
    local_14 = (uint)CONCAT21(local_14._2_2_,*(undefined1 *)((int)puVar6 + -1)) << 8;
    setCopReg(2,in_zero,local_28);
    setCopReg(2,in_at,local_24);
    setCopReg(2,&local_18,local_20);
    setCopReg(2,&local_20,local_1c);
    setCopReg(2,param_1,local_18);
    setCopReg(2,param_2,local_14);
    local_10 = (uint)CONCAT21((ushort)*(byte *)((int)puVar6 + 0xb) << 8,
                              *(undefined1 *)((int)puVar6 + 9)) << 8;
    local_c = (uint)CONCAT21(local_c._2_2_,*(undefined1 *)((int)puVar6 + 3)) << 8;
    copFunction(2,0x280030);
    iVar8 = getCopControlWord(2,0xf800);
    if (-1 < iVar8) {
      uVar3 = getCopReg(2,0xc);
      _DAT_800bf544[2] = uVar3;
      uVar3 = getCopReg(2,0xd);
      _DAT_800bf544[5] = uVar3;
      uVar3 = getCopReg(2,0xe);
      _DAT_800bf544[8] = uVar3;
      setCopReg(2,in_zero,local_10);
      setCopReg(2,in_at,local_c);
      puVar5[-7] = *puVar7;
      copFunction(2,0x180001);
      iVar8 = getCopControlWord(2,0xf800);
      if (-1 < iVar8) {
        uVar3 = getCopReg(2,0xe);
        _DAT_800bf544[0xb] = uVar3;
        puVar5[-4] = uVar9 & 0x7fffff;
        copFunction(2,0x168002e);
        iVar8 = getCopReg(2,7);
        uVar3 = iVar8 + iVar4 >> 10;
        local_4 = (iVar8 + iVar4 >> (uVar3 & 0x1f)) + uVar3 * 0x200;
        if (0x7fb < local_4 - 4U) {
          local_4 = -1;
        }
        if (-1 < local_4) {
          uVar3 = puVar6[-4];
          puVar5[-1] = uVar3;
          puVar5[2] = (int)uVar3 >> 0x10;
          *(char *)(puVar5 + -4) = (char)puVar5[-4] + param_4;
          *(char *)(puVar5 + -7) = (char)puVar5[-7] + param_4;
          cVar1 = (char)param_2;
          *(char *)((int)puVar5 + -0xf) = *(char *)((int)puVar5 + -0xf) + cVar1;
          *(char *)((int)puVar5 + -0x1b) = *(char *)((int)puVar5 + -0x1b) + cVar1;
          *(char *)(puVar5 + 2) = (char)puVar5[2] + param_4;
          *(char *)(puVar5 + -1) = (char)puVar5[-1] + param_4;
          *(char *)((int)puVar5 + 9) = *(char *)((int)puVar5 + 9) + cVar1;
          *(char *)((int)puVar5 + -3) = *(char *)((int)puVar5 + -3) + cVar1;
          setCopReg(2,0x4000,_DAT_1f800090);
          setCopReg(2,unaff_s4,puVar7[3]);
          setCopReg(2,unaff_s5,puVar7[4]);
          setCopReg(2,unaff_s6,puVar7[5]);
          setCopReg(2,iVar4,puVar7[5]);
          copFunction(2,0xf8002a);
          uVar3 = getCopReg(2,0x14);
          _DAT_800bf544[1] = uVar3;
          uVar3 = getCopReg(2,0x15);
          _DAT_800bf544[4] = uVar3;
          uVar3 = getCopReg(2,0x16);
          _DAT_800bf544[7] = uVar3;
          uVar2 = 0x3e;
          if ((uVar9 & 0x40000000) == 0) {
            uVar2 = 0x3c;
          }
          *(undefined1 *)((int)puVar5 + -0x21) = uVar2;
          setCopReg(2,iVar4,*puVar6);
          copFunction(2,0x780010);
          uVar3 = getCopReg(2,0x16);
          *puVar5 = uVar3;
          param_1 = (uint *)(_DAT_800ed8c8 + local_4 * 4);
          *_DAT_800bf544 = *param_1 | 0xc000000;
          *param_1 = (uint)_DAT_800bf544;
          puVar5 = puVar5 + 0xd;
          _DAT_800bf544 = _DAT_800bf544 + 0xd;
        }
      }
    }
    puVar6 = puVar6 + 9;
    puVar7 = puVar7 + 9;
  } while (0 < (int)uVar9);
  return;
}

