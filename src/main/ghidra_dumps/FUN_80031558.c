
int FUN_80031558(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = FUN_8007a980(0,6,1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(code **)(iVar1 + 0x1c) = FUN_80029b40;
    *(undefined1 *)(iVar1 + 0xb) = 0x20;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(code **)(iVar1 + 0x18) = FUN_80029f6c;
    *(undefined1 *)(iVar1 + 3) = param_2;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  }
  return iVar1;
}

