// FUN_8002192c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8002192c(int param_1,byte *param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000)
          >> 0x10;
  iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) * 0x10000)
          >> 0x10;
  uVar2 = FUN_80084080(iVar6 * iVar6 + iVar5 * iVar5);
  bVar1 = false;
  if (((int)(uint)uVar2 <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) &&
     (bVar1 = false,
     (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
           (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
     (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) {
    _DAT_1f80008c = (int)(short)uVar2;
    _DAT_1f80009c = FUN_80085690(-iVar5,iVar6);
    bVar1 = true;
  }
  uVar3 = 0;
  if (bVar1) {
    if ((*param_2 & 8) == 0) {
      if (param_3 == 0) {
        uVar3 = 0x800;
      }
      else {
        uVar3 = 0;
      }
      uVar4 = FUN_8001dc9c(param_1,param_2,0,uVar3);
    }
    else {
      uVar4 = FUN_8001e860(param_1,param_2,0,0);
    }
    uVar3 = 1;
    if ((uVar4 & 0x80) == 0) {
      DAT_1f800182 = 0;
      uVar3 = 1;
    }
  }
  return uVar3;
}

