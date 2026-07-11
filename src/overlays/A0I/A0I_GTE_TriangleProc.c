// A0I_GTE_TriangleProc - GTE triangle processor: 3-point transform, bounds check

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 * A0I_GTE_TriangleProc(s32 *param_1,s32 param_2,int param_3)

{
  s32 uVar1;
  int iVar2;
  int iVar3;
  s32 in_zero;
  uint uVar4;
  int iVar5;
  int iVar6;
  s32 *puVar7;
  
  iVar2 = g_OrderingTable;
  puVar7 = param_1;
  if (param_3 != 0) {
    iVar6 = (int)param_1 + 0x22;
    do {
      iVar5 = param_3 + -1;
      setCopReg(2,in_zero,puVar7->state);
      setCopReg(2,param_3,puVar7->action_state);
      setCopReg(2,0x800,puVar7->behavior_state);
      setCopReg(2,param_1,puVar7->sub_action);
      setCopReg(2,0x1800,(uint)puVar7->behavior_state >> 0x10);
      setCopReg(2,param_2,puVar7->counter1);
      *(s32 *)(iVar2 + 4) = *puVar7;
      copFunction(2,0x280030);
      *(s32 *)(iVar2 + 0xc) = *(s32 *)(iVar6 + -0x1a);
      iVar2->script_data = *(s32 *)(iVar6 + -0x16);
      uVar4 = *(uint *)(iVar6 + -0x1e);
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        iVar2->parent = uVar4 & 0xf0f0f0;
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar1 = getCopReg(2,0xc);
          *(s32 *)(iVar2 + 8) = uVar1;
          uVar1 = getCopReg(2,0xd);
          iVar2->script_ptr = uVar1;
          uVar1 = getCopReg(2,0xe);
          iVar2->prev = uVar1;
          if ((((*(u16 *)(iVar2 + 8) < 0x140) || (*(u16 *)(iVar2 + 0x14) < 0x140)) ||
              (*(u16 *)(iVar2 + 0x20) < 0x140)) &&
             (((*(u16 *)(iVar2 + 10) < 0xf0 || (*(u16 *)(iVar2 + 0x16) < 0xf0)) ||
              (*(u16 *)(iVar2 + 0x22) < 0xf0)))) {
            *(uint *)(iVar2 + 0x1c) = (uVar4 & 0xf0f0f) << 4;
            if (uVar4 >> 0x18 == 1) {
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
              if (uVar4 >> 0x18 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              iVar2 = getCopReg(2,0x11);
              iVar5 = getCopReg(2,0x12);
              iVar3 = getCopReg(2,0x13);
              if (iVar2 < iVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              iVar6 = iVar3 >> 2;
              if (iVar5 < iVar3) {
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
  g_OrderingTable = iVar2;
  return puVar7;
}

