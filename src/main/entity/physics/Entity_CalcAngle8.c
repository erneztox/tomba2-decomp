/**
 * @brief Entity angle calc variant 8: checks param2 flags, computes atan2
 * @note Original: func_80020B08 at 0x80020B08
 */
// Entity_CalcAngle8



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80020b08(int param_1,byte *param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  if ((*param_2 & 2) == 0) {
    iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000)
            >> 0x10;
    iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) * 0x10000)
            >> 0x10;
    uVar2 = FUN_80084080(iVar4 * iVar4 + iVar3 * iVar3);
    bVar1 = false;
    if (((int)(uint)uVar2 <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) &&
       (bVar1 = false,
       (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
             (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
       (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) {
      _DAT_1f80008c = (int)(short)uVar2;
      _DAT_1f80009c = FUN_80085690(-iVar3,iVar4);
      bVar1 = true;
    }
    if (bVar1) {
      param_2[0x29] = 1;
      return 1;
    }
  }
  return 0;
}
