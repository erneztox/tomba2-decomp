// FUN_80114000

undefined4 FUN_80114000(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if (param_2 == 0) {
    uVar4 = thunk_FUN_80126104(&DAT_800e7e80);
    return uVar4;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  iVar8 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(iVar5 + 0x2e)) * 0x10000) >>
          0x10;
  iVar6 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(iVar5 + 0x36)) * 0x10000) >>
          0x10;
  uVar1 = *(ushort *)(param_1 + 0x32);
  uVar2 = *(ushort *)(iVar5 + 0x32);
  sVar3 = func_0x80084080(iVar8 * iVar8 + iVar6 * iVar6);
  iVar5 = func_0x80085690(iVar6,iVar8);
  iVar5 = func_0x80077768((int)*(short *)(param_1 + 0x56),-iVar5 & 0xfff,1);
  if (iVar5 != 0) {
    sVar3 = -sVar3;
  }
  iVar5 = func_0x80085690((int)(((uint)uVar1 - (uint)uVar2) * 0x10000) >> 0x10,(int)sVar3);
  uVar7 = iVar5 + 0x100U & 0xfff;
  if (0xc00 < uVar7) {
    uVar4 = FUN_8011d098();
    return uVar4;
  }
  if (0x900 < uVar7) {
    uVar7 = 0x900;
  }
  iVar5 = (int)uVar7 >> 9;
  if (*(short *)(param_1 + 0x6c) != iVar5) {
    FUN_8011de34(param_1,*(undefined1 *)(iVar5 + -0x7fec9e94),8,3);
    FUN_8011dc4c(param_1,(short)iVar5);
    uVar4 = thunk_FUN_801260bc();
    return uVar4;
  }
  return 0;
}

