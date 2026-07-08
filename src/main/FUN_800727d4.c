
int FUN_800727d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_80040a58(param_2,param_3);
  if ((iVar2 == 0) || (iVar3 = FUN_8007a980(0,3,1), iVar3 == 0)) {
    iVar3 = 0;
  }
  else {
    *(code **)(iVar3 + 0x1c) = FUN_80072898;
    *(undefined1 *)(iVar3 + 2) = 0x1d;
    *(char *)(iVar3 + 3) = (char)param_3;
    *(short *)(iVar3 + 0x60) = (short)param_2;
    *(undefined4 *)(iVar3 + 0x10) = param_1;
    *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
    uVar1 = FUN_80079634(iVar2,iVar3 + 0x44);
    *(undefined2 *)(iVar3 + 0xe) = uVar1;
    *(undefined2 *)(iVar3 + 0x5c) = 0x7c7e;
  }
  return iVar3;
}

