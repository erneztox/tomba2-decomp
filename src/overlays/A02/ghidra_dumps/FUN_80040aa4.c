// FUN_80040aa4

int FUN_80040aa4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_8007a980(4,3,1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(code **)(iVar1 + 0x1c) = FUN_8003ad48;
    *(undefined1 *)(iVar1 + 2) = 0xb;
    *(char *)(iVar1 + 3) = (char)param_2;
    *(short *)(iVar1 + 0x60) = (short)param_1;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
    DAT_800bf849 = DAT_800bf849 + '\x01';
    FUN_800727d4(iVar1,param_1,param_2);
  }
  return iVar1;
}

