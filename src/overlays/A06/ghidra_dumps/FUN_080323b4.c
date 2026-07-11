// FUN_080323b4

undefined4 FUN_080323b4(int param_1)

{
  int iVar1;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  undefined2 local_12;
  undefined2 local_e;
  
  local_16 = 0x5d2a;
  local_12 = 0xe3f8;
  local_e = 0x4122;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar1 = func_0x0003116c(0x716,auStack_18,0xffffffec);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x14) = iVar1;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  }
  return 1;
}

