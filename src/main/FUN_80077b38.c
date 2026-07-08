
void FUN_80077b38(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_3 * 4 + param_2);
  uVar1 = *(ushort *)(iVar2 + 2);
  *(int *)(param_1 + 0x38) = iVar2;
  *(ushort *)(param_1 + 0xe) = uVar1 & 0x3fff;
  return;
}

