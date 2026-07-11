// FUN_80121878

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80121878(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = _DAT_1f800218;
  iVar5 = (int)(((uint)*(ushort *)(param_1 + 10) - (uint)*(ushort *)(_DAT_1f800218 + 0x36)) *
               0x10000) >> 0x10;
  iVar3 = (int)(((uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)(_DAT_1f800218 + 0x2e)) * 0x10000
               ) >> 0x10;
  iVar2 = func_0x80085690(-iVar5,iVar3);
  uVar4 = iVar2 + ((int)*(short *)(*(int *)(iVar1 + 0xc0) + 0x16) >> (param_3 & 0x1f)) & 0xfff;
  iVar2 = func_0x80084080(iVar3 * iVar3 + iVar5 * iVar5);
  if (iVar2 < 0x262) {
    iVar2 = iVar2 + 4;
  }
  iVar3 = func_0x80083f50(uVar4);
  iVar5 = func_0x80083e80(uVar4);
  *(short *)(param_1 + 2) = *(short *)(iVar1 + 0x2e) + (short)(iVar3 * iVar2 >> 0xc);
  *(short *)(param_1 + 10) = *(short *)(iVar1 + 0x36) - (short)(iVar5 * iVar2 >> 0xc);
  iVar2 = (uint)*(ushort *)(param_1 + 6) -
          ((int)((uint)*(ushort *)(*(int *)(iVar1 + 0xc0) + 0x16) << 0x10) >> 0x16);
  *(short *)(param_1 + 6) = (short)iVar2;
  if (iVar2 * 0x10000 >> 0x10 <
      (int)*(short *)(iVar1 + 0x32) + (int)*(short *)(*(int *)(iVar1 + 0xc0) + 2) + -300) {
    *(short *)(param_1 + 6) =
         *(short *)(iVar1 + 0x32) + *(short *)(*(int *)(iVar1 + 0xc0) + 2) + -300;
  }
  if (param_2 != 0) {
    _DAT_1f800184 = 1;
  }
  return;
}

