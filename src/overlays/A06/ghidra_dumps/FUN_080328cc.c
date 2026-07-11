// FUN_080328cc

void FUN_080328cc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  func_0x000517bc(0x1f800000,(int)*(short *)(param_1 + 0xb8),(int)*(short *)(param_1 + 0xba),
                  (int)*(short *)(param_1 + 0xbc));
  func_0x00051794(0x1f800020);
  func_0x00084d10((int)*(short *)(param_1 + 0x54),0x1f800020);
  func_0x00085050((int)*(short *)(param_1 + 0x58),0x1f800020);
  func_0x00084eb0((int)*(short *)(param_1 + 0x56),0x1f800020);
  func_0x00084110(0x1f800020,0x1f800000,param_1 + 0x98);
  *(int *)(param_1 + 0xac) = (int)*(short *)(param_1 + 0x2e);
  *(int *)(param_1 + 0xb0) = (int)*(short *)(param_1 + 0x32);
  *(int *)(param_1 + 0xb4) = (int)*(short *)(param_1 + 0x36);
  func_0x000517bc(0x1f800000,(int)*(short *)(iVar1 + 0x38),(int)*(short *)(iVar1 + 0x3a),
                  (int)*(short *)(iVar1 + 0x3c));
  func_0x00051794(0x1f800020);
  func_0x00084d10((int)*(short *)(iVar1 + 8),0x1f800020);
  func_0x00085050((int)*(short *)(iVar1 + 0xc),0x1f800020);
  func_0x00084eb0((int)*(short *)(iVar1 + 10),0x1f800020);
  func_0x00084110(0x1f800000,0x1f800020,&DAT_1f800040);
  func_0x00084110(param_1 + 0x98,&DAT_1f800040,iVar1 + 0x18);
  func_0x00084220(iVar1,iVar1 + 0x2c);
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + *(int *)(param_1 + 0xac);
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + *(int *)(param_1 + 0xb0);
  *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + *(int *)(param_1 + 0xb4);
  return;
}

