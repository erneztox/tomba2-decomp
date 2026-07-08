
void FUN_80091810(int param_1,short param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = (int *)(&DAT_80104c30 + ((param_1 << 0x10) >> 0xe));
  iVar2 = param_2 * 0xb0;
  puVar3 = (undefined4 *)(*piVar1 + iVar2);
  *(undefined1 *)(puVar3 + 8) = 1;
  *(undefined1 *)((int)puVar3 + 0x21) = 0;
  *(uint *)(iVar2 + *piVar1 + 0x98) = *(uint *)(iVar2 + *piVar1 + 0x98) & 0xfffffeff;
  *(uint *)(iVar2 + *piVar1 + 0x98) = *(uint *)(iVar2 + *piVar1 + 0x98) & 0xfffffff7;
  *(uint *)(iVar2 + *piVar1 + 0x98) = *(uint *)(iVar2 + *piVar1 + 0x98) & 0xfffffffd;
  *(uint *)(iVar2 + *piVar1 + 0x98) = *(uint *)(iVar2 + *piVar1 + 0x98) & 0xfffffffb;
  *(uint *)(iVar2 + *piVar1 + 0x98) = *(uint *)(iVar2 + *piVar1 + 0x98) & 0xfffffdff;
  *(undefined1 *)(puVar3 + 5) = 1;
  *puVar3 = puVar3[1];
  *(uint *)(iVar2 + *piVar1 + 0x98) = *(uint *)(iVar2 + *piVar1 + 0x98) | 1;
  return;
}

