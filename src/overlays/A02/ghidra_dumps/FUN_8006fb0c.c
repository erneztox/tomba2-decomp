// FUN_8006fb0c

int FUN_8006fb0c(undefined4 param_1,short param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = *(short **)(&DAT_800a3e80 + (uint)DAT_800bf870 * 4);
  sVar1 = *psVar4;
  if (*psVar4 != -1) {
    do {
      if (sVar1 == param_2) break;
      psVar4 = psVar4 + 3;
      sVar1 = *psVar4;
    } while (*psVar4 != -1);
    iVar3 = 0;
    if (*psVar4 != -1) {
      do {
        iVar2 = FUN_80072ddc(param_1,(&DAT_800a4bb8)[iVar3],3,4);
        iVar3 = iVar3 + 1;
        if (iVar2 != 0) {
          iVar3 = FUN_8006f9d8(param_1,iVar2,psVar4,(int)param_2);
          if (iVar3 == 0) {
            return 0;
          }
          return iVar2;
        }
      } while (iVar3 < 3);
      return 0;
    }
  }
  return 0;
}

