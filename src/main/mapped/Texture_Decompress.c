/**
 * @brief Texture decompressor: LZ-like with 8-slot ring buffer. Byte format: 5-bit count + 3-bit mode
 * @note Original: func_80044D8C at 0x80044D8C
 */
// Texture_Decompress



int FUN_80044d8c(int param_1,byte *param_2,byte *param_3,int param_4)

{
  int *piVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  int iVar10;
  byte *pbVar11;
  int local_20 [8];
  
  piVar9 = local_20;
  pbVar11 = param_3 + param_4;
  iVar10 = 0;
  piVar6 = &DAT_800153c8;
  do {
    piVar1 = piVar6 + 1;
    iVar10 = iVar10 + 1;
    iVar4 = *piVar6;
    piVar6 = piVar6 + 2;
    *piVar9 = iVar4 + *piVar1 * (int)*(short *)(param_1 + 4) * 2;
    piVar9 = piVar9 + 1;
    pbVar8 = param_2;
  } while (iVar10 < 8);
LAB_80044de0:
  bVar3 = param_3 < pbVar11;
LAB_80044de4:
  do {
    if (!bVar3) {
LAB_80044e7c:
      return (int)pbVar8 - (int)param_2;
    }
    bVar2 = *param_3;
    uVar5 = (uint)(bVar2 >> 3);
    param_3 = param_3 + 1;
    if ((bVar2 & 7) != 0) {
      pbVar7 = pbVar8 + local_20[bVar2 & 7];
      if (uVar5 != 0) {
        do {
          uVar5 = uVar5 - 1;
          bVar2 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          *pbVar8 = bVar2;
          pbVar8 = pbVar8 + 1;
        } while (0 < (int)uVar5);
        bVar3 = param_3 < pbVar11;
        goto LAB_80044de4;
      }
      goto LAB_80044de0;
    }
    if (uVar5 == 0) goto LAB_80044e7c;
    if (uVar5 == 0) goto LAB_80044de0;
    do {
      uVar5 = uVar5 - 1;
      bVar2 = *param_3;
      param_3 = param_3 + 1;
      *pbVar8 = bVar2;
      pbVar8 = pbVar8 + 1;
    } while (0 < (int)uVar5);
    bVar3 = param_3 < pbVar11;
  } while( true );
}
