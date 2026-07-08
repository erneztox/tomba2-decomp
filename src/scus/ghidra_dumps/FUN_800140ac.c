
int FUN_800140ac(int param_1)

{
  int iVar1;
  
  if (1 < DAT_80025516) {
    (*DAT_80025510)(&DAT_800102d8,param_1);
  }
  FUN_8001428c(param_1 + 0x1c,param_1);
  iVar1 = DAT_8002550c;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0xffffff;
  (**(code **)(iVar1 + 8))(*(undefined4 *)(iVar1 + 0x18),param_1 + 0x1c,0x40,0);
  FUN_8001e44c(&DAT_80025524,param_1,0x5c);
  return param_1;
}

