// A0I_GTE_QuadProc - GTE quad processor: 4-point transform, depth test

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * A0I_GTE_QuadProc(uint *param_1,s32 param_2,int param_3)

{
  s32 bVar1;
  s32 uVar2;
  int iVar3;
  int iVar4;
  s32 in_zero;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  
  iVar3 = g_OrderingTable;
  puVar9 = param_1;
  if (param_3 != 0) {
    puVar8 = param_1 + 4;
    do {
      iVar7 = param_3 + -1;
      setCopReg(2,in_zero,puVar9->behavior_state);
      setCopReg(2,0x800,puVar9->action_state);
      setCopReg(2,0x1800,puVar9->action_state >> 0x10);
      setCopReg(2,param_3,puVar9->sub_action);
      setCopReg(2,param_1,puVar9->counter1);
      setCopReg(2,0x2800,puVar9->counter2);
      uVar5 = *puVar9;
      *(uint *)(iVar3 + 4) = uVar5 & 0xfff0f0f0;
      copFunction(2,0x280030);
      iVar3->parent = (uVar5 & 0xf0f0f) << 4;
      uVar5 = puVar8[-3];
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        *(uint *)(iVar3 + 0xc) = puVar8[-2];
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar2 = getCopReg(2,0xc);
          *(s32 *)(iVar3 + 8) = uVar2;
          uVar2 = getCopReg(2,0xd);
          iVar3->script_ptr = uVar2;
          uVar2 = getCopReg(2,0xe);
          iVar3->prev = uVar2;
          setCopReg(2,in_zero,puVar9[10]);
          setCopReg(2,0x800,puVar9->counter2 >> 0x10);
          *(uint *)(iVar3 + 0x1c) = uVar5 & 0xf0f0f0;
          copFunction(2,0x180001);
          *(uint *)(iVar3 + 0x28) = (uVar5 & 0xf0f0f) << 4;
          iVar3->script_data = puVar8[-1];
          _DAT_1f800000 = getCopControlWord(2,0xf800);
          if (-1 < _DAT_1f800000) {
            uVar2 = getCopReg(2,0xe);
            *(s32 *)(iVar3 + 0x2c) = uVar2;
            if (((((*(u16 *)(iVar3 + 8) < 0x140) || (*(u16 *)(iVar3 + 0x14) < 0x140)) ||
                 (*(u16 *)(iVar3 + 0x20) < 0x140)) || (iVar3->pos_x < 0x140)) &&
               (((*(u16 *)(iVar3 + 10) < 0xf0 || (*(u16 *)(iVar3 + 0x16) < 0xf0)) ||
                ((*(u16 *)(iVar3 + 0x22) < 0xf0 || (iVar3->pos_y < 0xf0)))))) {
              if (uVar5 >> 0x18 == 1) {
                iVar3 = getCopReg(2,0x10);
                iVar7 = getCopReg(2,0x11);
                iVar4 = getCopReg(2,0x12);
                iVar6 = getCopReg(2,0x13);
                if (iVar7 < iVar3) {
                  iVar7 = iVar3;
                }
                bVar1 = iVar6 < iVar7;
                if (iVar6 < iVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else {
                if (uVar5 >> 0x18 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                iVar3 = getCopReg(2,0x10);
                iVar7 = getCopReg(2,0x11);
                iVar4 = getCopReg(2,0x12);
                iVar6 = getCopReg(2,0x13);
                if (iVar3 < iVar7) {
                  iVar7 = iVar3;
                }
                bVar1 = iVar7 < iVar6;
                if (iVar4 < iVar6) {
                  bVar1 = iVar7 < iVar4;
                  iVar6 = iVar4;
                }
              }
              if (bVar1) {
                iVar6 = iVar7;
              }
              _DAT_1f800004 = iVar6 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
      }
      puVar8 = puVar8 + 0xb;
      puVar9 = puVar9 + 0xb;
      param_3 = iVar7;
    } while (iVar7 != 0);
  }
  g_OrderingTable = iVar3;
  return puVar9;
}

