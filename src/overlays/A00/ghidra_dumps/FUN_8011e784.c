// FUN_8011e784

/* WARNING: Removing unreachable block (ram,0x8012778c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_8011e784(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  
  iVar3 = func_0x80072ddc(param_1,0,2,0x14);
  if (iVar3 == 0) {
    DAT_00000005 = 0;
    uRam00000006 = 0;
    _DAT_00000076 = 0;
    _DAT_00000048 = 0;
    _DAT_0000004e = 0;
    iVar3 = FUN_801308e0(0);
    uVar1 = uRam00000070;
    uVar2 = 0;
    if (iVar3 != 0) {
      *(undefined2 *)(_DAT_000000c4 + 10) = uRam00000070;
      uVar2 = uVar1;
    }
    return uVar2;
  }
  func_0x8004d604(0x54,1);
  *(undefined **)(iVar3 + 0x1c) = &DAT_80126264;
  *(undefined1 *)(iVar3 + 3) = 5;
  *(undefined2 *)(iVar3 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x1e;
  return 1;
}

