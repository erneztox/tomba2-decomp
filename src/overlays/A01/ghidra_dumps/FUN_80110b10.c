// FUN_80110b10

void FUN_80110b10(int param_1)

{
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  
  local_10 = (undefined2)(*(short *)(*(int *)(param_1 + 0xc4) + 0x18) * 0x5f >> 4);
  local_e = (undefined2)(*(short *)(*(int *)(param_1 + 0xc4) + 0x1e) * 0x5f >> 4);
  local_c = (undefined2)(*(short *)(*(int *)(param_1 + 0xc4) + 0x24) * 0x5f >> 4);
  local_18 = *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x2c);
  local_16 = *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x30);
  local_14 = *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x34);
  func_0x80133cac(0,param_1,&local_18,&local_10);
  return;
}

