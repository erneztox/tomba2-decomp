// A03_MaterialProcessor - Material/color processor: GTE cop2, entity color list

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A03_MaterialProcessor(int param_1)

{
  u8 bVar1;
  s32 uVar2;
  s32 uVar3;
  uint *puVar4;
  uint uVar5;
  u16 *puVar6;
  int iVar7;
  
  uVar2 = g_OrderingTableEnd;
  if (param_1->action_state != '\0') {
    _DAT_8011c0e4 = 0;
    _DAT_8011c0e0 = 0;
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    puVar6 = (u16 *)(param_1 + 0x10);
    bVar1 = param_1->action_state;
    iVar7 = *(int *)(param_1 + 0xc);
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopControlWord(2,0x2800,_DAT_1f80010c);
    setCopControlWord(2,0x3000,_DAT_1f800110);
    setCopControlWord(2,0x3800,_DAT_1f800114);
    for (; puVar6 < (u16 *)(param_1 + (uint)bVar1 * 2 + 0x10); puVar6 = puVar6 + 1) {
      puVar4 = (uint *)(iVar7 + (uint)*puVar6 * 4);
      uVar5 = *puVar4;
      uVar3 = func_0x00110094(puVar4 + 1,uVar2,uVar5 & 0xff);
      func_0x00110290(uVar3,uVar2,uVar5 >> 0x10 & 0xff);
    }
  }
  return;
}

