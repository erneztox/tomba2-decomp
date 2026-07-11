// FUN_080278ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080278ac(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short local_18;
  ushort local_16;
  undefined2 local_14;
  short local_12;
  
  uVar1 = _DAT_800a29b8;
  iVar2 = func_0x00073750(_DAT_800a29b8);
  iVar4 = 0x10;
  if (iVar2 < 0) {
    iVar4 = 0x20;
    iVar2 = -iVar2;
  }
  iVar3 = iVar2 * -4 + 0xa0;
  local_18 = (short)iVar3;
  local_16 = 0x3c;
  local_14 = (undefined2)(iVar2 << 3);
  local_12 = (short)iVar4 + 0x2c;
  func_0x00079374(iVar3 * 0x10000 >> 0x10,0x3c,0,uVar1,0);
  func_0x00079374(0x80,(int)(((uint)local_16 + iVar4 + 4) * 0x10000) >> 0x10,0,_DAT_800a2864,0);
  func_0x00079374(0x80,(int)(((uint)local_16 + iVar4 + 0x18) * 0x10000) >> 0x10,0,_DAT_800a2868,0);
  func_0x00033afc(0x4000,0xbc,(short)local_16 + iVar4 + 0xc,0);
  func_0x00033afc(0x2000,0xbc,(short)local_16 + iVar4 + 0x20,0);
  if (0x78 < local_18) {
    local_18 = 0x78;
    local_14 = 0x50;
  }
  func_0x0005019c(&local_18,7,1,1);
  return;
}

