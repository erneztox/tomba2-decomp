// FUN_801114a0

undefined4 FUN_801114a0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 9;
  iVar1 = func_0x8007a980(3,9,0);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 2) = 1;
    *(char *)(iVar1 + 3) = (char)param_2;
    *(undefined4 *)(iVar1 + 0x1c) = 0x8011a27c;
    *(undefined4 *)(iVar1 + 0x14) = param_1;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
    *(char *)(param_2 + 0x7b) = (char)param_1;
    *(undefined4 *)(iVar3 + 0x30) = 0xe53e0000;
    *(undefined4 *)(iVar3 + 0x34) = 0x23400000;
    *(char *)(iVar3 + 5) = *(char *)(iVar3 + 5) + '\x01';
    uVar2 = func_0x8007778c(iVar3);
    return uVar2;
  }
  return 0;
}

