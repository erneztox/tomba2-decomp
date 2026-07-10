// FUN_80091050

void FUN_80091050(ushort param_1,short param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_80104c30 + ((int)((uint)param_1 << 0x10) >> 0xe));
  FUN_80095b90((int)(short)(param_1 | param_2 << 8));
  *(undefined1 *)(iVar1 + param_2 * 0xb0 + 0x14) = 0;
  iVar1 = param_2 * 0xb0 + *(int *)(&DAT_80104c30 + ((int)((uint)param_1 << 0x10) >> 0xe));
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) & 0xfffffffd;
  return;
}

