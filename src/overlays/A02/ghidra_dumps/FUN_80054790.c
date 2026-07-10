// FUN_80054790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80054790(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)(byte)(&DAT_800a42f8)[param_2];
  if (uVar3 != *(byte *)(param_1 + 0x47)) {
    *(undefined *)(param_1 + 0x47) = (&DAT_800a42f8)[param_2];
    iVar1 = _DAT_800ed014;
    iVar4 = _DAT_800ed014 + 4;
    if ((_DAT_800e7ffe & 0x40) == 0) {
      iVar2 = uVar3 * 3;
      *(int *)(*(int *)(param_1 + 0xc4) + 0x40) =
           _DAT_800ed014 + *(int *)((uint)(byte)(&DAT_800a44ac)[iVar2] * 4 + iVar4);
      *(int *)(*(int *)(param_1 + 0xd0) + 0x40) =
           iVar1 + *(int *)((uint)(byte)(&DAT_800a44ad)[iVar2] * 4 + iVar4);
      iVar4 = *(int *)((uint)(byte)(&DAT_800a44ae)[iVar2] * 4 + iVar4);
      iVar2 = *(int *)(param_1 + 0xdc);
    }
    else {
      if (uVar3 == 10) {
        *(int *)(*(int *)(param_1 + 0xc4) + 0x40) = _DAT_800ed014 + *(int *)(_DAT_800ed014 + 8);
        *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x40) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0xd0) + 0x40) = 0;
        *(int *)(*(int *)(param_1 + 0xcc) + 0x40) = iVar1 + *(int *)(iVar1 + 0x50);
        iVar4 = *(int *)(iVar1 + 0x54);
      }
      else {
        *(int *)(*(int *)(param_1 + 0xc4) + 0x40) =
             _DAT_800ed014 + *(int *)((uint)(byte)(&DAT_800a44ac)[uVar3 * 3] * 4 + iVar4);
        *(int *)(*(int *)(param_1 + 0xd0) + 0x40) = iVar1 + *(int *)(iVar1 + 0x14);
        *(int *)(*(int *)(param_1 + 0xdc) + 0x40) = iVar1 + *(int *)(iVar1 + 0x20);
        *(int *)(*(int *)(param_1 + 0xcc) + 0x40) = iVar1 + *(int *)(iVar1 + 0x10);
        iVar4 = *(int *)(iVar1 + 0x1c);
      }
      iVar2 = *(int *)(param_1 + 0xd8);
    }
    *(int *)(iVar2 + 0x40) = iVar1 + iVar4;
  }
  return;
}

