// FUN_80020c34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80020c34(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  
  iVar7 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e);
  iVar2 = iVar7 * 0x10000 >> 0x10;
  iVar5 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36);
  iVar3 = iVar5 * 0x10000 >> 0x10;
  uVar1 = FUN_80084080(iVar2 * iVar2 + iVar3 * iVar3);
  uVar4 = 0xffffffff;
  if ((int)(uint)uVar1 <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    iVar3 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
    sVar6 = (short)iVar3;
    iVar2 = (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84);
    sVar8 = (short)iVar2;
    if ((int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
        (int)(iVar3 + iVar2 & 0xffffU)) {
      uVar4 = 0xffffffff;
    }
    else {
      if (iVar3 * 0x10000 < 0) {
        sVar6 = -sVar6;
      }
      else {
        sVar8 = (*(short *)(param_2 + 0x86) - *(ushort *)(param_2 + 0x84)) +
                (*(short *)(param_1 + 0x86) - *(ushort *)(param_1 + 0x84));
      }
      if (((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) - (int)(short)uVar1 <
          (int)sVar8 - (int)sVar6) {
        _DAT_1f80009c = FUN_80085690(-(int)(short)iVar5,(int)(short)iVar7);
        uVar4 = 1;
      }
      else {
        uVar4 = 2;
        if (0 < iVar3 * 0x10000) {
          uVar4 = 3;
        }
      }
    }
  }
  return uVar4;
}

