// FUN_8012fa2c

void FUN_8012fa2c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  func_0x80051c8c();
  iVar2 = 0;
  iVar3 = param_1;
  if (*(char *)(param_1 + 8) != '\0') {
    do {
      iVar1 = *(int *)(iVar3 + 0xc0);
      func_0x800517bc(0x1f800000,(int)*(short *)(iVar1 + 0x38),(int)*(short *)(iVar1 + 0x3a),
                      (int)*(short *)(iVar1 + 0x3c));
      func_0x80084250(iVar1 + 0x18,0x1f800000);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 8));
  }
  return;
}

