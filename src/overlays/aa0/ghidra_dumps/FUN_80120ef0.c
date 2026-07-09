// FUN_80120ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80120ef0(int param_1,int param_2,ushort param_3,ushort param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  short in_t0;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  int unaff_s8;
  
  uVar5 = (uint)*(byte *)(param_1 + 3);
  if (uVar5 != 0) {
    if (uVar5 < 3) {
      param_3 = *(ushort *)(uVar5 * 10 + -0x7feb6138);
      param_4 = *(ushort *)(uVar5 * 10 + -0x7feb6134);
      in_t0 = *(short *)(param_1 + 0x50) - *(short *)(param_1 + 0x32);
      param_2 = (uint)*(ushort *)(param_1 + 0x52) - (uint)param_3;
      unaff_s8 = ((uint)param_4 - (uint)param_3) - param_2;
    }
    sVar12 = (short)unaff_s8;
    sVar6 = (short)param_2;
    if (*(byte *)(param_1 + 3) < 2) {
      in_t0 = in_t0 + -0x80;
    }
    if (param_2 << 0x10 < 0) {
      sVar6 = 0;
    }
    iVar8 = 0;
    if (unaff_s8 << 0x10 < 0) {
      sVar12 = 0;
    }
    iVar11 = 2;
    iVar9 = 0;
    iVar10 = param_1;
    do {
      iVar1 = sVar12 * iVar8;
      iVar2 = func_0x80083e80((iVar8 << 10) / 3);
      iVar7 = param_1 + iVar11;
      sVar4 = *(short *)(param_1 + 0x32);
      iVar11 = iVar11 + 4;
      *(ushort *)(iVar10 + 0x60) =
           param_3 + ((short)((ulonglong)((longlong)iVar9 * 0x55555556) >> 0x20) -
                     (short)(iVar9 >> 0x1f));
      iVar10 = iVar10 + 4;
      iVar9 = iVar9 + sVar6;
      iVar3 = 7 - iVar8;
      iVar8 = iVar8 + 1;
      sVar4 = sVar4 + (short)(in_t0 * iVar2 >> 0xc);
      *(short *)(iVar7 + 0x60) = sVar4;
      *(ushort *)(param_1 + iVar3 * 4 + 0x60) =
           param_4 - ((short)((ulonglong)((longlong)iVar1 * 0x55555556) >> 0x20) -
                     (short)(iVar1 >> 0x1f));
      *(short *)(param_1 + (iVar3 * 4 | 2U) + 0x60) = sVar4;
    } while (iVar8 < 4);
    return;
  }
  FUN_80129f28(*(undefined2 *)(param_1 + 0x50),param_2,_DAT_80149ec6,_DAT_80149eca);
  return;
}

