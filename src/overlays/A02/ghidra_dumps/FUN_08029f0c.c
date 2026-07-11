// FUN_08029f0c

void FUN_08029f0c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_20 [2];
  short local_1e;
  undefined2 local_1a;
  short local_16;
  
  iVar3 = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  do {
    iVar3 = iVar3 + 1;
    iVar1 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
    iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
    local_1e = *(short *)(param_1 + 0x2e) + (short)(iVar1 * 0x46 >> 0xc);
    *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0x400;
    local_1a = *(undefined2 *)(param_1 + 0x32);
    local_16 = *(short *)(param_1 + 0x36) - (short)(iVar2 * 0x46 >> 0xc);
    func_0x0003116c(0,auStack_20,0xffffffa6);
  } while (iVar3 < 4);
  return;
}

