// FUN_08029a38

void FUN_08029a38(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(3,9,0);
  *(undefined1 *)(iVar1 + 2) = 0x1d;
  *(undefined1 *)(iVar1 + 3) = param_2;
  *(undefined4 *)(iVar1 + 0x1c) = 0x80122728;
  *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  return;
}

