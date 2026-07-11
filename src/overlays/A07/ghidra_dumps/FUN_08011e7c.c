// FUN_08011e7c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08011e7c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short local_40;
  short local_38;
  ushort local_30;
  
  iVar4 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e);
  local_40 = (short)iVar4;
  iVar5 = (uint)*(ushort *)(param_2 + 0x80) + (uint)*(ushort *)(param_1 + 0x80);
  local_30 = (ushort)iVar5;
  uVar1 = 0;
  if ((int)(iVar4 + iVar5 & 0xffffU) <=
      (int)*(short *)(param_2 + 0x82) + (int)*(short *)(param_1 + 0x82)) {
    iVar2 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36);
    local_38 = (short)iVar2;
    iVar3 = (uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x80);
    if (((int)*(short *)(param_2 + 0x86) + (int)*(short *)(param_1 + 0x82) <
         (int)(iVar2 + iVar3 & 0xffffU)) ||
       (*(short *)(param_1 + 0x86) + 400 <
        (int)((uint)*(ushort *)(param_1 + 0x84) +
              ((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) + 200 & 0xffff
             ))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = iVar2 * 0x10000 >> 0x10;
    iVar4 = iVar4 * 0x10000 >> 0x10;
    _DAT_1f80009c = func_0x00085690(-iVar2,iVar4);
    _DAT_1f80009c = _DAT_1f80009c & 0xfff;
    if (iVar4 < 0) {
      local_40 = -local_40;
      local_30 = -local_30;
    }
    iVar4 = iVar3;
    if (iVar2 < 0) {
      local_38 = -local_38;
      iVar4 = -iVar3;
    }
    if ((iVar5 * 0x10000 >> 0x10) - (int)local_40 < (iVar3 * 0x10000 >> 0x10) - (int)local_38) {
      *(ushort *)(param_1 + 0x2e) = *(short *)(param_2 + 0x2e) + local_30;
      uVar1 = 3;
      if (-1 < (int)((uint)local_30 << 0x10)) {
        uVar1 = 1;
      }
    }
    else {
      *(short *)(param_1 + 0x36) = *(short *)(param_2 + 0x36) + (short)iVar4;
      uVar1 = 2;
      if (-1 < iVar4 << 0x10) {
        halt_baddata();
      }
    }
  }
  return uVar1;
}

