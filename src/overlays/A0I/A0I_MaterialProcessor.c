// A0I_MaterialProcessor - Material/color processor: iterates entity color list

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0I_MaterialProcessor(int param_1)

{
  u8 bVar1;
  s32 uVar2;
  s32 uVar3;
  uint *puVar4;
  uint uVar5;
  u16 *puVar6;
  int iVar7;
  
  uVar2 = g_OrderingTableEnd;
  bVar1 = param_1->action_state;
  puVar6 = (u16 *)(param_1 + 0x10);
  if (bVar1 != 0) {
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
      uVar3 = func_0x0010b3dc(puVar4 + 1,uVar2,uVar5 & 0xff);
      func_0x0010b6c4(uVar3,uVar2,uVar5 >> 0x10 & 0xff);
    }
  }
  return;
}

