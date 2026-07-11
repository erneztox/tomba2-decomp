// FUN_080120d0

void FUN_080120d0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  
  iVar6 = 0;
  sVar5 = -400;
  do {
    iVar4 = 0;
    do {
      iVar1 = func_0x00072ddc(param_1,1,4,0x20);
      if (iVar1 != 0) {
        *(char *)(iVar1 + 3) = (char)(iVar4 + 1);
        *(undefined4 *)(iVar1 + 0x1c) = 0x8010ad64;
        *(short *)(iVar1 + 0x56) = (short)(iVar4 + 1) * 0x200 + 0x71a;
        uVar2 = func_0x0009a450();
        iVar3 = (*(ushort *)(iVar1 + 0x56) - 0x1f) + (uVar2 & 0x3f);
        *(short *)(iVar1 + 0x56) = (short)iVar3;
        iVar3 = func_0x00083f50(iVar3 * 0x10000 >> 0x10);
        *(short *)(iVar1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)(iVar3 >> 4);
        *(short *)(iVar1 + 0x32) = *(short *)(param_1 + 0x32) + sVar5;
        iVar3 = func_0x00083e80((int)*(short *)(iVar1 + 0x56));
        *(short *)(iVar1 + 0x36) = *(short *)(param_1 + 0x36) + (short)(-iVar3 >> 4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    iVar6 = iVar6 + 1;
    sVar5 = sVar5 + 200;
  } while (iVar6 < 4);
  return;
}

