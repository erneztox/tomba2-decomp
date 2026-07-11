// FUN_8011f758

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011f758(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  func_0x80051d20(iVar1,param_1 + 0x88,&DAT_1f8000c0);
  *(undefined2 *)(param_1 + 0x2e) = _DAT_1f8000c0;
  *(undefined2 *)(param_1 + 0x32) = _DAT_1f8000c2;
  *(undefined2 *)(param_1 + 0x36) = _DAT_1f8000c4;
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(iVar1 + 0x56);
  func_0x800517f8(param_1);
  if (((*(short *)(param_1 + 0xe) == 5) && ((DAT_800bfa06 & 1) == 0)) &&
     (iVar1 = func_0x80072ddc(param_1,0,2,0x1e), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801236cc;
    *(undefined1 *)(iVar1 + 3) = 0;
    *param_1 = 3;
  }
  return;
}

