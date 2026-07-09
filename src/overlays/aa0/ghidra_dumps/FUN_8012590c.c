// FUN_8012590c

void FUN_8012590c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  func_0x80085480(param_1 + 0x54,param_1 + 0x98);
  iVar4 = 0;
  iVar2 = param_1;
  if (*(char *)(param_1 + 8) != '\0') {
    do {
      iVar1 = *(int *)(iVar2 + 0xc0);
      uVar3 = (uint)*(ushort *)(iVar1 + 6);
      if (*(short *)(iVar1 + 6) == -1) {
        func_0x80085480(iVar1 + 8,0x1f800000);
        func_0x80084110(param_1 + 0x98,0x1f800000,*(int *)(iVar2 + 0xc0) + 0x18);
        func_0x80084220(*(int *)(iVar2 + 0xc0),*(int *)(iVar2 + 0xc0) + 0x2c);
        *(int *)(*(int *)(iVar2 + 0xc0) + 0x2c) =
             *(int *)(*(int *)(iVar2 + 0xc0) + 0x2c) + (int)*(short *)(param_1 + 0x2e);
        *(int *)(*(int *)(iVar2 + 0xc0) + 0x30) =
             *(int *)(*(int *)(iVar2 + 0xc0) + 0x30) + (int)*(short *)(param_1 + 0x32);
        *(int *)(*(int *)(iVar2 + 0xc0) + 0x34) =
             *(int *)(*(int *)(iVar2 + 0xc0) + 0x34) + (int)*(short *)(param_1 + 0x36);
        FUN_8012eb18();
        return;
      }
      if ((iVar4 == 2) || ((iVar4 == 3 && ((*(ushort *)(param_1 + 0x60) & 2) != 0)))) {
        func_0x80085480(iVar1 + 8,0x1f800000);
        func_0x80051794(0x1f800020);
        if ((*(ushort *)(param_1 + 0x60) & 1) == 0) {
          func_0x80085050((int)*(short *)(*(int *)(param_1 + 0xc0) + 0xc),0x1f800020);
          func_0x80084eb0((int)*(short *)(param_1 + 0x56),0x1f800020);
          func_0x80084110(0x1f800020,0x1f800000,*(int *)(iVar2 + 0xc0) + 0x18);
          func_0x80084470(*(int *)(param_1 + ((int)(uVar3 << 0x10) >> 0xe) + 0xc0) + 0x18,
                          *(int *)(iVar2 + 0xc0),*(int *)(iVar2 + 0xc0) + 0x2c);
          FUN_8012eabc(uVar3 << 0x10);
          return;
        }
        FUN_8012e9ec();
        return;
      }
      if ((*(ushort *)(param_1 + 0x60) & 1) != 0) {
        func_0x80051794(0x1f800000);
        func_0x80084a80(*(int *)(iVar2 + 0xc0) + 8,0x1f800000);
        FUN_80137a6c();
        return;
      }
      func_0x80085480(*(int *)(iVar2 + 0xc0) + 8,0x1f800000);
      func_0x80084110(*(int *)(param_1 + ((int)(uVar3 << 0x10) >> 0xe) + 0xc0) + 0x18,0x1f800000,
                      *(int *)(iVar2 + 0xc0) + 0x18);
      func_0x80084220(*(int *)(iVar2 + 0xc0),*(int *)(iVar2 + 0xc0) + 0x2c);
      iVar1 = param_1 + ((int)(uVar3 << 0x10) >> 0xe);
      *(int *)(*(int *)(iVar2 + 0xc0) + 0x2c) =
           *(int *)(*(int *)(iVar2 + 0xc0) + 0x2c) + *(int *)(*(int *)(iVar1 + 0xc0) + 0x2c);
      *(int *)(*(int *)(iVar2 + 0xc0) + 0x30) =
           *(int *)(*(int *)(iVar2 + 0xc0) + 0x30) + *(int *)(*(int *)(iVar1 + 0xc0) + 0x30);
      *(int *)(*(int *)(iVar2 + 0xc0) + 0x34) =
           *(int *)(*(int *)(iVar2 + 0xc0) + 0x34) + *(int *)(*(int *)(iVar1 + 0xc0) + 0x34);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 8));
  }
  return;
}

