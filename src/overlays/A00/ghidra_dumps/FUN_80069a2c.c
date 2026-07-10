// FUN_80069a2c

int FUN_80069a2c(int param_1,short param_2,short param_3,short param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  sVar3 = *(short *)(param_1 + 0x2e);
  sVar1 = *(short *)(param_1 + 0x32);
  sVar2 = *(short *)(param_1 + 0x36);
  iVar4 = FUN_80083f50(-(int)*(short *)(param_1 + 0x68));
  iVar5 = FUN_80083e80(-(int)*(short *)(param_1 + 0x68));
  sVar3 = FUN_80085690((int)param_3 - (int)sVar1,
                       iVar4 * ((int)param_2 - (int)sVar3) + iVar5 * ((int)param_4 - (int)sVar2) >>
                       0xc);
  return (int)sVar3;
}

