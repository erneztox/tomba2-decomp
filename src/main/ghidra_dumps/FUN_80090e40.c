
void FUN_80090e40(ushort param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort local_28;
  ushort local_26 [3];
  
  iVar3 = (short)param_2 * 0xb0;
  iVar6 = *(int *)(&DAT_80104c30 + ((int)((uint)param_1 << 0x10) >> 0xe)) + iVar3;
  iVar1 = *(int *)(iVar6 + 0x9c);
  iVar2 = *(int *)(iVar6 + 0xa0) + 1;
  *(int *)(iVar6 + 0xa0) = iVar2;
  if (iVar1 < iVar2) {
    iVar3 = iVar3 + *(int *)(&DAT_80104c30 + ((int)((uint)param_1 << 0x10) >> 0xe));
  }
  else {
    iVar2 = *(short *)(iVar6 + 0x48) * iVar2;
    if (iVar1 == 0) {
      trap(0x1c00);
    }
    if ((iVar1 == -1) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    iVar2 = iVar2 / iVar1 - (int)*(short *)(iVar6 + 0x4a);
    if (iVar2 == 0) goto LAB_80091010;
    iVar3 = (int)(short)(param_1 | (ushort)(param_2 << 8));
    *(short *)(iVar6 + 0x4a) = *(short *)(iVar6 + 0x4a) + (short)iVar2;
    FUN_80095a9c(iVar3,&local_28,local_26);
    uVar5 = (uint)local_28 + iVar2;
    if (0x7f < (int)uVar5) {
      uVar5 = 0x7f;
    }
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    uVar4 = (uint)local_26[0] + iVar2;
    if (0x7f < (int)uVar4) {
      uVar4 = 0x7f;
    }
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    FUN_80095530(iVar3,uVar5 & 0xffff,uVar4 & 0xffff,1);
    if (((uVar5 != 0x7f) || (uVar4 != 0x7f)) && ((uVar5 != 0 || (uVar4 != 0)))) goto LAB_80091010;
    iVar3 = (short)param_2 * 0xb0 + *(int *)(&DAT_80104c30 + ((int)((uint)param_1 << 0x10) >> 0xe));
  }
  *(uint *)(iVar3 + 0x98) = *(uint *)(iVar3 + 0x98) & 0xffffffef;
LAB_80091010:
  FUN_80095a9c((int)(short)(param_1 | (ushort)(param_2 << 8)),iVar6 + 0x5c,iVar6 + 0x5e);
  return;
}

