
void FUN_80071cf4(int param_1,short param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + (param_4 + 7) * 2;
  if (*(short *)(iVar3 + 0x60) == 0) {
    if ((param_4 <= *(short *)(param_1 + 0x42)) &&
       (iVar2 = param_1 + param_4 * 2, uVar1 = *(short *)(iVar2 + 0x60) + 0x100U & 0xfff,
       *(ushort *)(iVar2 + 0x60) = uVar1, uVar1 == 0)) {
      *(short *)(iVar3 + 0x60) = *(short *)(iVar3 + 0x60) + 1;
    }
    *(short *)(param_1 + 0x2e) = param_2 + *(short *)(param_1 + 0x82) * (short)param_4;
    iVar3 = FUN_80083e80((int)*(short *)(param_1 + param_4 * 2 + 0x60));
    *(int *)(param_1 + 0x30) = param_3 * 0x10000 + iVar3 * *(short *)(param_1 + 0x82) * 0x10;
  }
  else if (*(short *)(iVar3 + 0x60) == 1) {
    *(short *)(param_1 + 0x32) = (short)param_3;
    *(short *)(param_1 + 0x2e) = param_2 + *(short *)(param_1 + 0x82) * (short)param_4;
  }
  return;
}

