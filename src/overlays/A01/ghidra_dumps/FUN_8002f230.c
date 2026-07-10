// FUN_8002f230

void FUN_8002f230(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      goto LAB_8002f348;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x4e) = 7;
    uVar2 = FUN_8009a450();
    *(undefined2 *)(param_1 + 0x48) = uVar2;
    *(undefined2 *)(param_1 + 0x4a) = 0xff92;
    *(undefined2 *)(param_1 + 0x32) = 0xffce;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  psVar5 = (short *)(param_1 + 0x50);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar6 = 0;
    psVar4 = (short *)(param_1 + 0x52);
    do {
      iVar6 = iVar6 + 1;
      iVar3 = FUN_8009a450();
      *psVar5 = *psVar5 + -8 + (short)(iVar3 >> 0xb);
      iVar3 = FUN_8009a450();
      psVar4[1] = psVar4[1] + -8 + (short)(iVar3 >> 0xb);
      iVar3 = FUN_8009a450();
      psVar5 = psVar5 + 4;
      *psVar4 = *psVar4 + -4 + (short)(iVar3 >> 0xb);
      psVar4 = psVar4 + 4;
    } while (iVar6 < 7);
    iVar6 = FUN_8002b278(param_1);
    if (iVar6 != 0) {
      return;
    }
    FUN_80031780(param_1);
    return;
  }
LAB_8002f348:
  FUN_8007a624(param_1);
  return;
}

