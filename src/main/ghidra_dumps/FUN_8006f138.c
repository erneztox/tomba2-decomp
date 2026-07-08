
void FUN_8006f138(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_80085480(param_1 + 0x54,param_1 + 0x98);
  iVar4 = 0;
  *(int *)(param_1 + 0xac) = (int)*(short *)(param_1 + 0x2e);
  *(int *)(param_1 + 0xb0) = (int)*(short *)(param_1 + 0x32);
  *(int *)(param_1 + 0xb4) = (int)*(short *)(param_1 + 0x36);
  if (*(char *)(param_1 + 8) != '\0') {
    iVar2 = 0;
    do {
      iVar2 = *(int *)(param_1 + iVar2 + 0xc0);
      sVar1 = *(short *)(iVar2 + 6);
      FUN_80051794(0x1f800000);
      FUN_80084d10((int)*(short *)(iVar2 + 8),0x1f800000);
      FUN_80085050((int)*(short *)(iVar2 + 0xc),0x1f800000);
      FUN_80084eb0((int)*(short *)(iVar2 + 10),0x1f800000);
      if (sVar1 == -1) {
        FUN_80084110(param_1 + 0x98,0x1f800000,iVar2 + 0x18);
        FUN_80084220(iVar2,iVar2 + 0x2c);
        *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + *(int *)(param_1 + 0xac);
        *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + *(int *)(param_1 + 0xb0);
        iVar3 = *(int *)(iVar2 + 0x34) + *(int *)(param_1 + 0xb4);
      }
      else {
        iVar3 = param_1 + sVar1 * 4;
        FUN_80084110(*(int *)(iVar3 + 0xc0) + 0x18,0x1f800000,iVar2 + 0x18);
        FUN_80084220(iVar2,iVar2 + 0x2c);
        *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + *(int *)(*(int *)(iVar3 + 0xc0) + 0x2c);
        *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + *(int *)(*(int *)(iVar3 + 0xc0) + 0x30);
        iVar3 = *(int *)(iVar2 + 0x34) + *(int *)(*(int *)(iVar3 + 0xc0) + 0x34);
      }
      *(int *)(iVar2 + 0x34) = iVar3;
      iVar4 = iVar4 + 1;
      iVar2 = iVar4 * 4;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 8));
  }
  return;
}

