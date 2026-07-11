// FUN_080229bc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080229bc(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  func_0x00085480(param_1 + 0x54,param_1 + 0x98);
  iVar6 = 0;
  iVar4 = param_1;
  if (*(char *)(param_1 + 8) != '\0') {
    do {
      iVar3 = *(int *)(iVar4 + 0xc0);
      iVar5 = (int)*(short *)(iVar3 + 6);
      uVar2 = *(ushort *)(iVar3 + 6);
      if (iVar5 == -1) {
        func_0x00085480(iVar3 + 8,0x1f800000);
        func_0x00084110(param_1 + 0x98,0x1f800000,*(int *)(iVar4 + 0xc0) + 0x18);
        func_0x00084220(*(int *)(iVar4 + 0xc0),*(int *)(iVar4 + 0xc0) + 0x2c);
        *(int *)(*(int *)(iVar4 + 0xc0) + 0x2c) =
             *(int *)(*(int *)(iVar4 + 0xc0) + 0x2c) + (int)*(short *)(param_1 + 0x2e);
        *(int *)(*(int *)(iVar4 + 0xc0) + 0x30) =
             *(int *)(*(int *)(iVar4 + 0xc0) + 0x30) + (int)*(short *)(param_1 + 0x32);
        *(int *)(*(int *)(iVar4 + 0xc0) + 0x34) =
             *(int *)(*(int *)(iVar4 + 0xc0) + 0x34) + (int)*(short *)(param_1 + 0x36);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar6 - 2U < 2) {
        func_0x00085480(iVar3 + 8,0x1f800000);
        func_0x00051794(0x1f800020);
        func_0x00085050((int)*(short *)(*(int *)(param_1 + 0xc4) + 0xc),0x1f800020);
        func_0x00084eb0((int)*(short *)(param_1 + 0x56),0x1f800020);
        func_0x00084110(0x1f800020,0x1f800000,*(int *)(iVar4 + 0xc0) + 0x18);
        func_0x00084470(*(int *)(param_1 + iVar5 * 4 + 0xc0) + 0x18,*(int *)(iVar4 + 0xc0),
                        *(int *)(iVar4 + 0xc0) + 0x2c);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00051794(0x1f800000);
      func_0x00084a80(*(int *)(iVar4 + 0xc0) + 8,0x1f800000);
      func_0x00084110(*(int *)(param_1 + iVar5 * 4 + 0xc0) + 0x18,0x1f800000,
                      *(int *)(iVar4 + 0xc0) + 0x18);
      func_0x00084220(*(int *)(iVar4 + 0xc0),*(int *)(iVar4 + 0xc0) + 0x2c);
      iVar3 = param_1 + ((int)((uint)uVar2 << 0x10) >> 0xe);
      *(int *)(*(int *)(iVar4 + 0xc0) + 0x2c) =
           *(int *)(*(int *)(iVar4 + 0xc0) + 0x2c) + *(int *)(*(int *)(iVar3 + 0xc0) + 0x2c);
      *(int *)(*(int *)(iVar4 + 0xc0) + 0x30) =
           *(int *)(*(int *)(iVar4 + 0xc0) + 0x30) + *(int *)(*(int *)(iVar3 + 0xc0) + 0x30);
      *(int *)(*(int *)(iVar4 + 0xc0) + 0x34) =
           *(int *)(*(int *)(iVar4 + 0xc0) + 0x34) + *(int *)(*(int *)(iVar3 + 0xc0) + 0x34);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar6 < (int)(uint)*(byte *)(param_1 + 8));
  }
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 == 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(*(int *)(param_1 + 200) + 0x2c) = (int)_DAT_80144e98;
  *(int *)(*(int *)(param_1 + 0xcc) + 0x2c) = (int)_DAT_80144e9a;
  return;
}

