// FUN_0801f044

void FUN_0801f044(int param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_c8 [64];
  int local_88 [16];
  undefined1 local_48 [16];
  short local_38;
  short local_36;
  short local_34;
  int local_30;
  int local_2c;
  
  if (*(short *)(param_1 + 0x60) != 0) {
    func_0x00084660(&DAT_1f8000f8);
    func_0x00084690(&DAT_1f8000f8);
    iVar11 = 0;
    iVar10 = 0;
    iVar9 = 0;
    iVar8 = 0;
    local_30 = (int)*(short *)(param_1 + 0x6c) - (int)*(short *)(param_1 + 100);
    sVar1 = *(short *)(param_1 + 0x70);
    sVar2 = *(short *)(param_1 + 0x68);
    local_2c = (int)*(short *)(param_1 + 0x6e) - (int)*(short *)(param_1 + 0x66);
    do {
      iVar4 = iVar8;
      if (iVar8 < 0) {
        iVar4 = iVar8 + 0xf;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0xf;
      }
      iVar7 = iVar10;
      if (iVar10 < 0) {
        iVar7 = iVar10 + 0xf;
      }
      local_38 = *(short *)(param_1 + 100) + (short)(iVar4 >> 4);
      local_36 = *(short *)(param_1 + 0x66) + (short)(iVar6 >> 4);
      local_34 = *(short *)(param_1 + 0x68) + (short)(iVar7 >> 4);
      uVar3 = func_0x00078240();
      local_48[iVar11] = (char)(uVar3 >> 4);
      iVar4 = func_0x0003f7a0(&local_38,auStack_c8 + iVar11 * 4);
      piVar5 = local_88 + iVar11;
      iVar4 = (iVar4 >> (iVar4 >> 10 & 0x1fU)) + (iVar4 >> 10) * 0x200;
      *piVar5 = iVar4;
      if (0x7fb < iVar4 - 4U) {
        *piVar5 = -1;
      }
      iVar10 = iVar10 + ((int)sVar1 - (int)sVar2);
      iVar11 = iVar11 + 1;
      iVar9 = iVar9 + local_2c;
      iVar8 = iVar8 + local_30;
    } while (iVar11 < 0x10);
    func_0x00117ab8(0x10,auStack_c8,local_88,local_48);
  }
  return;
}

