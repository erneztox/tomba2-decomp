
void FUN_800376ec(int param_1,short param_2,short param_3,int param_4,short param_5,int param_6)

{
  int iVar1;
  short sVar2;
  int iVar3;
  undefined1 auStack_28 [8];
  
  sVar2 = 0x2c;
  if ((param_3 != 0) && (sVar2 = param_3, param_3 == 1)) {
    sVar2 = 0xbc;
  }
  if ((&DAT_800a2beb)[param_2 * 0xc] == '\0') {
    iVar1 = param_4 << 0x10;
  }
  else {
    iVar1 = (param_4 + -4) * 0x10000;
  }
  FUN_80079324((int)sVar2,iVar1 >> 0x10,(int)param_5,(&PTR_s_Blackjack_800a2bec)[param_2 * 3],
               param_6);
  if (((*(char *)(param_1 + 8) == '\0') &&
      (iVar1 = (int)param_2, (&DAT_800a2be8)[iVar1 * 0xc] != '\0')) &&
     (1 < (byte)(&DAT_800bfab4)[iVar1])) {
    iVar3 = 0x110;
    if (param_3 == 0) {
      iVar3 = 0x80;
    }
    FUN_80079324((short)iVar3,(int)(short)param_4,(int)param_5,&DAT_80010680,param_6 + 3);
    FUN_80079634((&DAT_800bfab4)[iVar1],auStack_28);
    FUN_80079324((iVar3 + 8) * 0x10000 >> 0x10,(int)(short)param_4,(int)param_5,auStack_28,
                 param_6 + 3);
  }
  return;
}

