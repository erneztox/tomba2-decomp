// FUN_08014a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08014a10(int param_1,int param_2)

{
  undefined2 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_2 + 0xc0);
  iVar6 = (int)(((uint)*(ushort *)(param_1 + 0x14c) - (uint)*(ushort *)(iVar5 + 0x2c)) * 0x10000) >>
          0x10;
  iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x150) - (uint)*(ushort *)(iVar5 + 0x34)) * 0x10000) >>
          0x10;
  uVar3 = func_0x00084080(iVar6 * iVar6 + iVar4 * iVar4);
  bVar2 = false;
  if (((int)(uVar3 & 0xffff) <= *(short *)(param_2 + 0x80) + _DAT_1f800088) &&
     (bVar2 = false,
     (int)(((uint)*(ushort *)(param_1 + 0x14e) - (uint)*(ushort *)(iVar5 + 0x30)) +
           (uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x68) & 0xffff) <=
     (int)*(short *)(param_2 + 0x86) + ((int)((uint)*(ushort *)(param_1 + 0x68) << 0x10) >> 0xf))) {
    _DAT_1f80008c = func_0x00085690(-iVar4,iVar6);
    bVar2 = true;
    _DAT_1f800084 = iVar5;
    *(short *)(param_1 + 0x156) = *(short *)(param_1 + 0x32) - *(short *)(iVar5 + 0x30);
  }
  if (bVar2) {
    *(undefined2 *)(param_1 + 0x156) = 0;
    uVar1 = *(undefined2 *)(param_2 + 0x80);
    *(undefined1 *)(param_1 + 0x164) = 2;
    DAT_1f800182 = 0;
    _DAT_1f800080 = param_2;
    *(undefined2 *)(param_1 + 0x152) = uVar1;
  }
  return;
}

