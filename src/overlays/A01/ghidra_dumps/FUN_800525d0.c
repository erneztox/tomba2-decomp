// FUN_800525d0

int FUN_800525d0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = FUN_80072ddc(param_1,0x84,3,0);
  if (iVar1 != 0) {
    *(code **)(iVar1 + 0x1c) = FUN_800527c8;
    *(undefined1 *)(iVar1 + 3) = param_2;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
  }
  return iVar1;
}

