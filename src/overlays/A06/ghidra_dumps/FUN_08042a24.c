// FUN_08042a24

void FUN_08042a24(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(((uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >>
          0x10;
  iVar2 = (int)(((uint)*(ushort *)(param_2 + 6) - (uint)*(ushort *)(param_1 + 0x32)) * 0x10000) >>
          0x10;
  iVar3 = (int)(((uint)*(ushort *)(param_2 + 10) - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >>
          0x10;
  func_0x00084080(iVar1 * iVar1 + iVar2 * iVar2 + iVar3 * iVar3);
  return;
}

