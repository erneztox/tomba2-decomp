// FUN_0803c488

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0803c488(int param_1,short param_2,int param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = func_0x00134cec();
  uVar1 = _DAT_1f80017c;
  uVar3 = 0xffffffff;
  if (iVar2 == 0) {
    *(short *)(param_1 + 0x32) = _DAT_1f8001a4 + param_2 + 0x28;
    iVar4 = (int)(short)(uVar1 & *(ushort *)((short)param_3 * 2 + -0x7feb91bc));
    iVar2 = func_0x00083e80(iVar4 << (param_3 + 6U & 0x1f));
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + (short)(iVar2 >> (param_4 & 0x1f));
    if ((iVar4 == 0) || (uVar3 = 0, (short)(iVar4 << ((int)(short)param_3 & 0x1fU)) == 0x20)) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

