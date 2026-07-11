// FUN_0801db20

void FUN_0801db20(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short local_40;
  short local_3e;
  undefined2 local_3c;
  short local_38;
  short local_36;
  undefined2 local_34;
  short local_30;
  short local_2e;
  undefined2 local_2c;
  
  iVar11 = 0;
  iVar10 = 0;
  iVar9 = 0;
  iVar8 = 0;
  sVar1 = *(short *)(param_1 + 0x32);
  sVar2 = *(short *)(param_1 + 0x2e);
  iVar7 = (uint)*(byte *)(param_1 + 3) * 8;
  sVar3 = *(short *)(iVar7 + -0x7fedf682);
  sVar4 = *(short *)(iVar7 + -0x7fedf684);
  sVar5 = *(short *)(iVar7 + -0x7fedf680);
  local_3c = 0x1751;
  do {
    iVar6 = func_0x00083e80(iVar11);
    local_3e = *(short *)(iVar7 + -0x7fedf682) +
               (short)(iVar6 * ((int)sVar1 - (sVar3 + 0x5e)) >> 0xc);
    iVar6 = iVar8;
    if (iVar8 < 0) {
      iVar6 = iVar8 + 3;
    }
    local_40 = *(short *)(iVar7 + -0x7fedf684) + (short)(iVar6 >> 2);
    if (iVar10 != 0) {
      func_0x00112d10(&local_40,&local_38);
    }
    local_38 = local_40;
    local_36 = local_3e;
    local_34 = local_3c;
    iVar6 = iVar9;
    if (iVar9 < 0) {
      iVar6 = iVar9 + 3;
    }
    local_40 = *(short *)(iVar7 + -0x7fedf680) + (short)(iVar6 >> 2);
    if (iVar10 != 0) {
      func_0x00112d10(&local_40,&local_30);
    }
    iVar11 = iVar11 + 0x100;
    iVar9 = iVar9 + ((int)sVar2 - (int)sVar5);
    iVar8 = iVar8 + ((int)sVar2 - (int)sVar4);
    local_30 = local_40;
    local_2e = local_3e;
    local_2c = local_3c;
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  func_0x00112d10(&local_30,&local_38);
  return;
}

