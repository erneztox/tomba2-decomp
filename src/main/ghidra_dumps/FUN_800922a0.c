
void FUN_800922a0(int param_1,short param_2,short param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_80104c30 + ((param_1 << 0x10) >> 0xe)) + param_2 * 0xb0;
  if ((((*(uint *)(iVar1 + 0x98) & 4) == 0) && ((*(uint *)(iVar1 + 0x98) & 0x100) == 0)) &&
     (param_3 != 0)) {
    *(short *)(iVar1 + 0x48) = param_3;
    *(undefined4 *)(iVar1 + 0x9c) = param_4;
    *(undefined4 *)(iVar1 + 0xa0) = 0;
    *(undefined2 *)(iVar1 + 0x4a) = 0;
  }
  return;
}

