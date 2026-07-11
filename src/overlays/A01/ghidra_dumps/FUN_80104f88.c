// FUN_80104f88

void FUN_80104f88(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar5 = func_0x80020db8(param_1,param_2,*(undefined4 *)(param_2 + 0xc0));
  if (-1 < iVar5) {
    if (*(char *)(param_1 + 0x5f) == '\x10') {
      bVar4 = *(byte *)(param_1 + 0x46) >> 1;
      if (bVar4 == 2) {
        if (iVar5 == 1) {
          iVar5 = func_0x80083f50(*(short *)(param_1 + 0x68) + 0x800);
          sVar1 = *(short *)(param_1 + 0x80);
          sVar2 = *(short *)(param_2 + 0x80);
          iVar6 = func_0x80083e80(*(short *)(param_1 + 0x68) + 0x800);
          sVar3 = *(short *)(param_2 + 0x80);
          *(short *)(param_1 + 0x2e) =
               *(short *)(*(int *)(param_2 + 0xc0) + 0x2c) +
               (short)(iVar5 * ((int)sVar1 + (int)sVar2) >> 0xc);
          *(short *)(param_1 + 0x36) =
               *(short *)(*(int *)(param_2 + 0xc0) + 0x34) -
               (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
          *(short *)(param_1 + 0x32) =
               *(short *)(*(int *)(param_2 + 0xc0) + 0x30) +
               (*(short *)(param_2 + 0x86) - *(short *)(param_2 + 0x84));
          FUN_8010e078();
          return;
        }
      }
      else {
        if (bVar4 < 3) {
          FUN_8010dfb4(param_1);
          return;
        }
        if (bVar4 != 3) {
          FUN_8010e080(param_1,param_2);
          return;
        }
      }
      *(short *)(param_1 + 0x32) =
           *(short *)(param_1 + 0x84) +
           *(short *)(*(int *)(param_2 + 0xc0) + 0x30) +
           (*(short *)(param_2 + 0x86) - *(short *)(param_2 + 0x84));
    }
    uVar7 = func_0x8001e860(param_1,param_2,*(undefined4 *)(param_2 + 0xc0),0x200);
    if ((uVar7 & 0x80) != 0) {
      *(undefined1 *)(param_1 + 0x2b) = 2;
    }
    *(undefined1 *)(param_2 + 0x2b) = 1;
    DAT_1f800182 = 0;
  }
  return;
}

