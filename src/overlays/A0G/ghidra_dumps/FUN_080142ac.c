// FUN_080142ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080142ac(short param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar1 = (param_2 << 0x10) >> 0xe;
    iVar2 = _DAT_1f80021c + (uint)*(ushort *)(iVar1 + -0x7fef2a40) * 0x20;
    func_0x0001d2a8(3,iVar2,iVar2 + (*(ushort *)(iVar1 + -0x7fef2a3e) + 1) * 0x20,0);
  }
  return;
}

