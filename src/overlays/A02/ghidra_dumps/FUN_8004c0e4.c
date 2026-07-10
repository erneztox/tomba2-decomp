// FUN_8004c0e4

int FUN_8004c0e4(undefined4 param_1,byte param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  
  pbVar6 = (byte *)(*(int *)(&DAT_800a3edc + (uint)DAT_800bf870 * 4) + (uint)param_2 * 4);
  bVar1 = *pbVar6;
  if ((bVar1 & 0x80) == 0) {
    iVar4 = FUN_8004d7ec((int)*(short *)(pbVar6 + 2),1);
  }
  else {
    iVar4 = FUN_8004d868((int)*(short *)(pbVar6 + 2),1);
  }
  iVar5 = 0;
  if (iVar4 == 0) {
    iVar5 = FUN_80072ddc(param_1,param_3 != 0,5,4);
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      *(code **)(iVar5 + 0x1c) = FUN_8004c238;
      *(byte *)(iVar5 + 3) = pbVar6[1];
      bVar2 = *pbVar6;
      *(undefined2 *)(iVar5 + 0x60) = 1;
      *(byte *)(iVar5 + 0x5e) = bVar2 & 0x7f;
      uVar3 = *(undefined2 *)(pbVar6 + 2);
      *(undefined2 *)(iVar5 + 100) = 2;
      *(undefined2 *)(iVar5 + 0x62) = uVar3;
      if ((bVar1 & 0x80) != 0) {
        *(undefined2 *)(iVar5 + 100) = 6;
      }
      if ((DAT_800bf870 == 0) && ((byte)(param_2 - 1) < 5)) {
        *(ushort *)(iVar5 + 0x40) = param_2 - 1;
      }
    }
  }
  return iVar5;
}

