// FUN_00002cfc

void FUN_00002cfc(int param_1,short param_2)

{
  undefined1 auStack_18 [2];
  undefined2 local_16;
  undefined2 local_12;
  undefined2 local_e;
  
  local_16 = *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 8) - 1) * 4 + 0xc0) + 0x2c);
  local_12 = *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 8) - 1) * 4 + 0xc0) + 0x30);
  local_e = *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 8) - 1) * 4 + 0xc0) + 0x34);
  func_0x00027144(*(undefined4 *)
                   (*(int *)(param_1 + (*(byte *)(param_1 + 8) - 1) * 4 + 0xc0) + 0x40),auStack_18,
                  0x800,(int)param_2);
  func_0x00074590(0xc,0,0);
  return;
}

