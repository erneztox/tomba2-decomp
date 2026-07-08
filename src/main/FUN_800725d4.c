
int FUN_800725d4(undefined2 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_8007a980(1,3,1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined1 *)(iVar1 + 2) = 0x17;
    *(code **)(iVar1 + 0x1c) = FUN_8007263c;
    *(undefined2 **)(iVar1 + 0x10) = param_1;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
    *param_1 = 0xffff;
  }
  return iVar1;
}

