
byte FUN_80087d84(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = (*DAT_800abe4c)();
  if (param_2 < 0) {
    bVar1 = *(byte *)(iVar2 + 0xea);
  }
  else if (param_2 < (int)(uint)*(byte *)(iVar2 + 0xea)) {
    pbVar3 = (byte *)(*(int *)(iVar2 + 8) + param_2 * 8);
    if (param_3 < 0) {
      bVar1 = *pbVar3;
    }
    else {
      bVar1 = 0;
      if (param_3 < (int)(uint)*pbVar3) {
        bVar1 = *(byte *)(*(int *)(pbVar3 + 4) + param_3);
      }
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}

