// FUN_8010cde8

undefined4 FUN_8010cde8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x8007a980(1,3,1);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 2) = 0x10;
    *(undefined1 *)(iVar1 + 3) = 5;
    *(undefined4 *)(iVar1 + 0x1c) = 0x801156a4;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    uVar2 = FUN_80115dd0();
    return uVar2;
  }
  return 0;
}

