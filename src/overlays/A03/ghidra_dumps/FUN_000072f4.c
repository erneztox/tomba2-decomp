// FUN_000072f4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_000072f4(uint *param_1,int param_2,int param_3)

{
  undefined4 in_zero;
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  uint *puVar7;
  int iVar8;
  uint *local_78;
  uint *local_74;
  uint *local_70;
  uint *local_6c;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  byte local_62;
  byte local_61;
  byte local_60;
  byte local_5f;
  byte local_5e;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  byte local_52;
  byte local_51;
  char local_50;
  char local_4f;
  char local_4e;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  byte local_42;
  byte local_41;
  byte local_40;
  byte local_3f;
  byte local_3e;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  byte local_32;
  byte local_31;
  char local_30;
  char local_2f;
  char local_2e;
  
  puVar5 = _DAT_800bf544;
  puVar7 = param_1;
  if (param_3 != 0) {
    pbVar6 = (byte *)((int)param_1 + 6);
    do {
      iVar8 = param_3 + -1;
      setCopReg(2,in_zero,puVar7[5]);
      setCopReg(2,0x800,puVar7[6]);
      setCopReg(2,0x1800,puVar7[6] >> 0x10);
      setCopReg(2,param_3,puVar7[7]);
      setCopReg(2,param_1,puVar7[8]);
      setCopReg(2,0x2800,puVar7[9]);
      uVar3 = *puVar7;
      puVar5[1] = uVar3 & 0xfff0f0f0;
      copFunction(2,0x280030);
      puVar5[4] = (uVar3 & 0xf0f0f) << 4;
      uVar4 = *(uint *)(pbVar6 + -2);
      getCopControlWord(2,0xf800);
      uVar3 = getCopReg(2,0xc);
      puVar5[2] = uVar3;
      uVar3 = getCopReg(2,0xd);
      puVar5[5] = uVar3;
      uVar3 = getCopReg(2,0xe);
      puVar5[8] = uVar3;
      puVar5[7] = uVar4 & 0xf0f0f0;
      setCopReg(2,in_zero,puVar7[10]);
      setCopReg(2,0x800,puVar7[9] >> 0x10);
      puVar5[10] = (uVar4 & 0xf0f0f) << 4;
      copFunction(2,0x180001);
      puVar5[3] = *(uint *)(pbVar6 + 2);
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      uVar3 = getCopReg(2,0xe);
      puVar5[0xb] = uVar3;
      if ((((((ushort)puVar5[2] < 0x140) || ((ushort)puVar5[5] < 0x140)) ||
           ((ushort)puVar5[8] < 0x140)) || ((ushort)puVar5[0xb] < 0x140)) &&
         (((*(ushort *)((int)puVar5 + 10) < 0xf0 || (*(ushort *)((int)puVar5 + 0x16) < 0xf0)) ||
          ((*(ushort *)((int)puVar5 + 0x22) < 0xf0 || (*(ushort *)((int)puVar5 + 0x2e) < 0xf0))))))
      {
        puVar5[6] = *(uint *)(pbVar6 + 6);
        local_78 = (uint *)getCopReg(2,0x10);
        local_74 = (uint *)getCopReg(2,0x11);
        local_70 = (uint *)getCopReg(2,0x12);
        local_6c = (uint *)getCopReg(2,0x13);
        uVar3 = *(uint *)(pbVar6 + 10);
        puVar5[9] = uVar3;
        puVar5[0xc] = uVar3 >> 0x10;
        param_1 = local_74;
        if ((int)local_74 < (int)local_78) {
          param_1 = local_78;
        }
        puVar2 = local_6c;
        if ((int)local_6c < (int)local_70) {
          puVar2 = local_70;
        }
        if ((int)puVar2 < (int)param_1) {
          puVar2 = param_1;
        }
        if (899 < (int)puVar2) {
          param_1 = puVar7;
          if ((uVar4 >> 0x18 & 1) == 0) {
            if ((int)puVar2 < 0xdac) {
              func_0x0010f968(puVar7,puVar5,&local_78,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            copFunction(2,0x168002e);
            iVar1 = getCopReg(2,7);
            _DAT_1f800004 = (iVar1 >> (iVar1 >> 10 & 0x1fU)) + (iVar1 >> 10) * 0x200;
            if (0x7fb < _DAT_1f800004 - 4U) {
              _DAT_1f800004 = -1;
            }
            if ((_DAT_1f800004 < 0x800) && (iVar1 = _DAT_1f800004 + 0x5a, 4 < _DAT_1f800004)) {
              _DAT_1f800004 = iVar1;
              if (0x7ff < iVar1) {
                _DAT_1f800004 = 0x7ff;
              }
              if (0x600 < _DAT_1f800004) {
                setCopReg(2,0x4000,local_78 + -0x753);
                setCopReg(2,0x3000,puVar5[1]);
                copFunction(2,0x780010);
                uVar3 = getCopReg(2,0x16);
                puVar5[1] = uVar3;
                setCopReg(2,0x4000,local_74 + -0x753);
                setCopReg(2,0x3000,puVar5[4]);
                copFunction(2,0x780010);
                uVar3 = getCopReg(2,0x16);
                puVar5[4] = uVar3;
                setCopReg(2,0x4000,local_70 + -0x753);
                setCopReg(2,0x3000,puVar5[7]);
                copFunction(2,0x780010);
                uVar3 = getCopReg(2,0x16);
                puVar5[7] = uVar3;
                setCopReg(2,0x4000,local_6c + -0x753);
                setCopReg(2,0x3000,puVar5[10]);
                copFunction(2,0x780010);
                uVar3 = getCopReg(2,0x16);
                puVar5[10] = uVar3;
              }
              goto LAB_000079c4;
            }
          }
          else {
            if ((int)puVar2 < 0xdac) {
              local_68 = *(undefined2 *)(pbVar6 + 0xe);
              local_66 = *(undefined2 *)(pbVar6 + 0x10);
              local_64 = *(undefined2 *)(pbVar6 + 0x12);
              local_62 = pbVar6[2];
              local_61 = pbVar6[3];
              local_60 = (byte)*puVar7 & 0xf0;
              local_5f = pbVar6[-5] & 0xf0;
              local_5e = pbVar6[-4] & 0xf0;
              local_58 = *(undefined2 *)(pbVar6 + 0x16);
              local_56 = *(undefined2 *)(pbVar6 + 0x18);
              local_54 = *(undefined2 *)(pbVar6 + 0x14);
              local_52 = pbVar6[6];
              local_51 = pbVar6[7];
              local_50 = (byte)*puVar7 << 4;
              local_4f = pbVar6[-5] << 4;
              local_4e = pbVar6[-4] << 4;
              local_48 = *(undefined2 *)(pbVar6 + 0x1a);
              local_46 = *(undefined2 *)(pbVar6 + 0x1c);
              local_44 = *(undefined2 *)(pbVar6 + 0x1e);
              local_42 = pbVar6[10];
              local_41 = pbVar6[0xb];
              local_40 = pbVar6[-2] & 0xf0;
              local_3f = pbVar6[-1] & 0xf0;
              local_3e = *pbVar6 & 0xf0;
              local_38 = *(undefined2 *)(pbVar6 + 0x22);
              local_36 = *(undefined2 *)(pbVar6 + 0x24);
              local_34 = *(undefined2 *)(pbVar6 + 0x20);
              local_32 = pbVar6[0xc];
              local_31 = pbVar6[0xd];
              local_30 = pbVar6[-2] << 4;
              local_2f = pbVar6[-1] << 4;
              local_2e = *pbVar6 << 4;
              func_0x0010f1a0(puVar7,puVar5,2,&local_68,&local_58,&local_48,&local_38);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if ((int)puVar2 < 0x157c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            copFunction(2,0x168002e);
            iVar1 = getCopReg(2,7);
            _DAT_1f800004 = (iVar1 >> (iVar1 >> 10 & 0x1fU)) + (iVar1 >> 10) * 0x200;
            if (0x7fb < _DAT_1f800004 - 4U) {
              _DAT_1f800004 = -1;
            }
            if (_DAT_1f800004 < 0x800) {
              if (0x600 < _DAT_1f800004) {
                setCopReg(2,0x4000,local_78 + -0x753);
                setCopReg(2,0x3000,puVar5[1]);
                copFunction(2,0x780010);
                uVar3 = getCopReg(2,0x16);
                puVar5[1] = uVar3;
                setCopReg(2,0x4000,local_74 + -0x753);
                setCopReg(2,0x3000,puVar5[4]);
                copFunction(2,0x780010);
                uVar3 = getCopReg(2,0x16);
                puVar5[4] = uVar3;
                setCopReg(2,0x4000,local_70 + -0x753);
                setCopReg(2,0x3000,puVar5[7]);
                copFunction(2,0x780010);
                uVar3 = getCopReg(2,0x16);
                puVar5[7] = uVar3;
                setCopReg(2,0x4000,local_6c + -0x753);
                setCopReg(2,0x3000,puVar5[10]);
                copFunction(2,0x780010);
                uVar3 = getCopReg(2,0x16);
                puVar5[10] = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
LAB_000079c4:
              puVar2 = (uint *)(param_2 + _DAT_1f800004 * 4);
              *puVar5 = *puVar2 | 0xc000000;
              *puVar2 = (uint)puVar5;
              puVar5 = puVar5 + 0xd;
              param_1 = (uint *)0xc000000;
            }
          }
        }
      }
      pbVar6 = pbVar6 + 0x2c;
      puVar7 = puVar7 + 0xb;
      param_3 = iVar8;
    } while (iVar8 != 0);
  }
  _DAT_800bf544 = puVar5;
  return puVar7;
}

