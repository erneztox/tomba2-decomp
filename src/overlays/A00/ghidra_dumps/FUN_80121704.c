// FUN_80121704

void FUN_80121704(int param_1,int param_2,int param_3)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  undefined1 auStack_30 [2];
  short sStack_2e;
  undefined2 uStack_2a;
  short sStack_26;
  
  sVar10 = -0x78;
  iVar8 = (int)((*(ushort *)(*(int *)(param_1 + *(short *)(param_2 + 6) * 4 + 0xc0) + 10) - 0x100) *
               0x10000) >> 0x10;
  iVar5 = func_0x80083f50(iVar8);
  iVar6 = func_0x80083e80(iVar8);
  bVar2 = 0 < param_3;
  iVar8 = 0;
  do {
    sVar3 = (short)((uint)(iVar5 * 0x19) >> 10);
    sVar4 = (short)((uint)(iVar6 * -100) >> 0xc);
    if ((!bVar2) || (iVar7 = func_0x8007b26c(), iVar7 == 0)) break;
    *(undefined1 *)(iVar7 + 1) = 0;
    *(char *)(iVar7 + 2) = (char)iVar8;
    *(short *)(iVar7 + 0x1e) = *(short *)(param_2 + 0x2c) + sVar3 + sVar10;
    iVar9 = iVar8 + 1;
    *(undefined2 *)(iVar7 + 0x22) = *(undefined2 *)(param_2 + 0x30);
    sVar1 = *(short *)(param_2 + 0x34);
    *(undefined2 *)(iVar7 + 0xc) = 0xa00;
    *(short *)(iVar7 + 0x26) = sVar1 + sVar4 + sVar10;
    sVar10 = sVar10 + 0x1e;
    func_0x80027058(iVar7,*(undefined4 *)(param_2 + 0x40),iVar8);
    bVar2 = iVar9 < param_3;
    iVar8 = iVar9;
  } while (iVar9 < 8);
  sStack_2e = *(short *)(param_2 + 0x2c) + sVar3;
  uStack_2a = *(undefined2 *)(param_2 + 0x30);
  sStack_26 = *(short *)(param_2 + 0x34) + sVar4;
  iVar8 = func_0x8003116c(0x107,auStack_30,0xfffffff6);
  if (iVar8 != 0) {
    *(byte *)(iVar8 + 0x28) = *(byte *)(iVar8 + 0x28) | 0x80;
  }
  return;
}

