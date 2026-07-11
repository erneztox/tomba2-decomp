// FUN_08014cdc

void FUN_08014cdc(byte *param_1)

{
  int iVar1;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  short local_12;
  undefined2 local_e;
  
  if ((*param_1 < 2) &&
     ((iVar1 = func_0x000495dc(param_1,0,0x5a), 0 < iVar1 ||
      (iVar1 = func_0x000495dc(param_1,0,0), 0 < iVar1)))) {
    local_16 = *(undefined2 *)(param_1 + 0x2e);
    *param_1 = 2;
    local_12 = *(short *)(param_1 + 0x32) + 0x5a;
    local_e = *(undefined2 *)(param_1 + 0x36);
    func_0x0003116c(param_1[3] + 0xd,auStack_18,0xffffffb0);
    func_0x00031470(2,auStack_18,0,param_1 + 0x68);
    func_0x00074590(0x32,0xfffffffd,0x14);
  }
  return;
}

