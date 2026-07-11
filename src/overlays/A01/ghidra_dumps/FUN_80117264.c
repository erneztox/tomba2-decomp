// FUN_80117264

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80117264(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x14);
  if (((iVar5 != 0) && ((_DAT_1f80017c & 0xf) == 0)) &&
     (iVar3 = func_0x8003116c(0x204,iVar5 + 0x2c,0xfffffff6), iVar3 != 0)) {
    *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
    *(short *)(iVar3 + 0x2e) = *(short *)(iVar3 + 0x2e) + 0x30;
    iVar4 = func_0x80083f50((int)*(short *)(iVar5 + 0x54));
    sVar1 = (short)(iVar4 >> 6);
    *(short *)(iVar3 + 0x2e) = *(short *)(iVar3 + 0x2e) - (sVar1 + (sVar1 >> 1));
    uVar2 = func_0x8009a450();
    *(ushort *)(iVar3 + 0x2e) = *(short *)(iVar3 + 0x2e) - (*(byte *)(param_1 + 0xbf) >> 4 & uVar2);
    iVar5 = func_0x80083e80((int)*(short *)(iVar5 + 0x54));
    sVar1 = (short)(iVar5 >> 6);
    *(short *)(iVar3 + 0x30) = *(short *)(iVar3 + 0x30) - (sVar1 + (sVar1 >> 1));
    uVar2 = func_0x8009a450();
    *(ushort *)(iVar3 + 0x30) = *(short *)(iVar3 + 0x30) - (*(byte *)(param_1 + 0xbf) & uVar2);
  }
  return;
}

