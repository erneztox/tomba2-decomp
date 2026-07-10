// FUN_8002bafc

void FUN_8002bafc(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      goto LAB_8002bc68;
    }
    psVar9 = (short *)(param_1 + 0x50);
    if (bVar1 != 0) {
      return;
    }
    iVar7 = 0;
    puVar6 = (undefined2 *)(param_1 + 0x56);
    sVar2 = *(short *)(param_1 + 0x2c);
    sVar3 = *(short *)(param_1 + 0x2e);
    sVar4 = *(short *)(param_1 + 0x30);
    *(undefined2 *)(param_1 + 0x4e) = 7;
    *(undefined1 *)(param_1 + 4) = 1;
    do {
      iVar7 = iVar7 + 1;
      iVar5 = FUN_8009a450();
      *psVar9 = sVar2 + (short)((uint)(iVar5 + -0x4000) >> 8);
      iVar5 = FUN_8009a450();
      puVar6[-2] = sVar3 + (short)((uint)(iVar5 + -0x4000) >> 8);
      iVar5 = FUN_8009a450();
      puVar6[-1] = sVar4 + (short)((uint)(iVar5 + -0x4000) >> 8);
      *puVar6 = 0x100;
      puVar6 = puVar6 + 4;
      psVar9 = psVar9 + 4;
    } while (iVar7 < 7);
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) != 0) {
    psVar8 = (short *)(param_1 + 0x50);
    iVar7 = 0;
    psVar9 = (short *)(param_1 + 0x52);
    do {
      iVar7 = iVar7 + 1;
      iVar5 = FUN_8009a450();
      *psVar8 = *psVar8 + (short)(iVar5 + -0x4000 >> 0xb);
      iVar5 = FUN_8009a450();
      psVar8 = psVar8 + 4;
      psVar9[1] = psVar9[1] + (short)(iVar5 + -0x4000 >> 0xb);
      *psVar9 = *psVar9 + -0x12;
      psVar9 = psVar9 + 4;
    } while (iVar7 < 7);
    iVar7 = FUN_8002b278(param_1);
    if (iVar7 != 0) {
      return;
    }
    FUN_80031780(param_1);
    return;
  }
LAB_8002bc68:
  FUN_8007a624(param_1);
  return;
}

