
void FUN_800275d4(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  short extraout_var;
  short extraout_var_00;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  undefined4 *puVar8;
  short *psVar9;
  uint uVar10;
  
  bVar1 = *(byte *)(param_1 + 4);
  puVar8 = (undefined4 *)(param_1 + 0x50);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      goto LAB_8002773c;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x4e) = 5;
    uVar3 = FUN_8009a450();
    iVar5 = 0;
    *(undefined2 *)(param_1 + 0x48) = uVar3;
    *(undefined2 *)(param_1 + 0x4a) = 0xffe2;
    *(undefined2 *)(param_1 + 0x32) = 0xffce;
    sVar2 = *(short *)(param_1 + 0x30);
    uVar6 = *(undefined4 *)(param_1 + 0x2c);
    do {
      iVar5 = iVar5 + 1;
      *puVar8 = uVar6;
      puVar8[1] = (int)sVar2 | 0x1000000;
      puVar8 = puVar8 + 2;
    } while (iVar5 * 0x10000 >> 0x10 < 5);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  psVar9 = (short *)(param_1 + 0x50);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar5 = 0;
    uVar4 = *(uint *)(param_1 + 0x48);
    psVar7 = (short *)(param_1 + 0x52);
    uVar10 = uVar4 & 0xffff;
    do {
      FUN_80083f50(uVar10);
      iVar5 = iVar5 + 1;
      *psVar9 = *psVar9 + extraout_var;
      FUN_80083e80(uVar10);
      psVar9 = psVar9 + 4;
      sVar2 = (short)(uVar4 >> 0x10);
      psVar7[1] = psVar7[1] + -10 + extraout_var_00;
      *psVar7 = *psVar7 + sVar2;
      psVar7 = psVar7 + 4;
      uVar10 = uVar10 + 0x333;
    } while (iVar5 < 5);
    *(short *)(param_1 + 0x4a) = sVar2 + 4;
    iVar5 = FUN_8002b278(param_1);
    if (iVar5 != 0) {
      return;
    }
    FUN_80031780(param_1);
    return;
  }
LAB_8002773c:
  FUN_8007a624(param_1);
  return;
}

