// FUN_80129fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80129fc0(void)

{
  int iVar1;
  uint uVar2;
  
  _DAT_801388ec = 0;
  _DAT_801388ee = 0;
  _DAT_80139004 = 0;
  _DAT_801388f0 = 0;
  if (DAT_800bf873 != '\0') {
    uVar2 = 0;
    iVar1 = -0x7fec7540;
    do {
      func_0x801321c4(iVar1);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 8;
    } while (uVar2 < 6);
  }
  return;
}

