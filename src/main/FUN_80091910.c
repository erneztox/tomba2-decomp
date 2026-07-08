
void FUN_80091910(int param_1,short param_2)

{
  int iVar1;
  
  *(undefined1 *)(*(int *)(&DAT_80104c30 + ((param_1 << 0x10) >> 0xe)) + param_2 * 0xb0 + 0x14) = 1;
  iVar1 = param_2 * 0xb0 + *(int *)(&DAT_80104c30 + ((param_1 << 0x10) >> 0xe));
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) & 0xfffffff7;
  return;
}

