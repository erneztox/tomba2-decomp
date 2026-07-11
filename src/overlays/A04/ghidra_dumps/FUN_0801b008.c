// FUN_0801b008

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801b008(byte *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[7] == 0) {
    param_1[0x154] = 0;
    param_1[0x155] = 1;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[7] = param_1[7] + 1;
  }
  else if (param_1[7] != 1) {
    halt_baddata();
  }
  sVar1 = *(short *)(param_1 + 0x154);
  *(short *)(param_1 + 0x154) = sVar1 + -0x20;
  if ((short)(sVar1 + -0x20) < 0x20) {
    param_1[0x154] = 0x20;
    param_1[0x155] = 0;
  }
  iVar2 = (uint)*(ushort *)(param_1 + 0x56) - (uint)*(ushort *)(param_1 + 0x154);
  *(short *)(param_1 + 0x56) = (short)iVar2;
  if (iVar2 * 0x10000 >> 0x10 < -0x3ff) {
    param_1[0x149] = 2;
    param_1[0x14a] = 2;
    param_1[0x56] = 0;
    param_1[0x57] = 0xc;
    param_1[0x140] = 0;
    param_1[0x141] = 0xc;
    param_1[0x2a] = 1;
    param_1[0x147] = 0;
    param_1[5] = 4;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0x61] = 0;
    *param_1 = *param_1 & 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = (iVar2 + 0x800) * 0x10000 >> 0x10;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar2 = func_0x00083f50(iVar3);
  *(short *)(param_1 + 0x2e) =
       *(short *)(iVar4 + 0x2c) + (short)(iVar2 * *(short *)(param_1 + 0x152) >> 0xc);
  iVar2 = func_0x00083e80(iVar3);
  *(short *)(param_1 + 0x36) =
       *(short *)(iVar4 + 0x34) - (short)(iVar2 * *(short *)(param_1 + 0x152) >> 0xc);
  *(short *)(param_1 + 0x32) = *(short *)(iVar4 + 0x30) + *(short *)(param_1 + 0x156);
  func_0x00076d68(param_1);
  return;
}

