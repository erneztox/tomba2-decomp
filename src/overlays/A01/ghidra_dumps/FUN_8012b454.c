// FUN_8012b454

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012b454(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_2 << 0x10) >> 0xe;
  iVar2 = _DAT_1f80021c + (uint)*(ushort *)(iVar1 + -0x7fec70a8) * 0x20 + 0x4e40;
  func_0x8001d2a8(9,iVar2,iVar2 + (*(ushort *)(iVar1 + -0x7fec70a6) + 1) * 0x20,0);
  return;
}

