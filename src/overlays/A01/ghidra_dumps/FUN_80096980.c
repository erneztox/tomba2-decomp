// FUN_80096980

int FUN_80096980(undefined4 param_1,ushort param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 < 0x11) {
    iVar3 = (int)(short)param_2;
    if (*(char *)(iVar3 + -0x7fefa2e8) == '\x02') {
      uVar2 = *(undefined4 *)(iVar3 * 4 + -0x7fefa288);
      FUN_80099370(0);
      iVar1 = FUN_80099310(uVar2);
      if (iVar1 != 0) {
        FUN_80099150(param_1,*(undefined4 *)(iVar3 * 4 + -0x7fefa2d0));
        *(undefined1 *)(iVar3 + -0x7fefa2e8) = 1;
        return iVar3;
      }
    }
  }
  FUN_80099450(0);
  return -1;
}

