/**
 * @brief GPU DMA queue processor: waits for slot, submits packet, advances
 * @note Original: func_80082D04 at 0x80082D04
 */
// GPU_DMAQueue



uint FUN_80082d04(code *param_1,s32 *param_2,int param_3,s32 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  s32 uVar4;
  int iVar5;
  
  FUN_800834a0();
  while( true ) {
    if ((DAT_800a5ac8 + 1 & 0x3f) != DAT_800a5acc) {
      DAT_800a5ad0 = FUN_80085c9c(0);
      DAT_800a59a8 = 1;
      if ((DAT_800a59a1 == '\0') ||
         (((DAT_800a5ac8 == DAT_800a5acc && ((*DAT_800a5ab4 & 0x1000000) == 0)) &&
          (DAT_800a59ac == 0)))) {
        do {
        } while ((*DAT_800a5aa8 & 0x4000000) == 0);
        (*param_1)(param_2,param_4);
        FUN_80085c9c(DAT_800a5ad0);
        uVar1 = 0;
      }
      else {
        FUN_80085b80(2,FUN_80082fb4);
        iVar5 = 0;
        if (param_3 == 0) {
          *(s32 **)(DAT_800a5ac8 * 0x60 + -0x7feff3cc) = param_2;
        }
        else {
          while( true ) {
            iVar2 = param_3;
            if (param_3 < 0) {
              iVar2 = param_3 + 3;
            }
            iVar3 = iVar5 * 4;
            if (iVar2 >> 2 <= iVar5) break;
            uVar4 = *param_2;
            param_2 = param_2 + 1;
            iVar5 = iVar5 + 1;
            *(s32 *)(iVar3 + DAT_800a5ac8 * 0x60 + -0x7feff3c4) = uVar4;
          }
          *(uint *)(DAT_800a5ac8 * 0x60 + -0x7feff3cc) = DAT_800a5ac8 * 0x60 + -0x7feff3c4;
        }
        *(s32 *)(DAT_800a5ac8 * 0x60 + -0x7feff3c8) = param_4;
        *(code **)(DAT_800a5ac8 * 0x60 + -0x7feff3d0) = param_1;
        DAT_800a5ac8 = DAT_800a5ac8 + 1 & 0x3f;
        FUN_80085c9c(DAT_800a5ad0);
        FUN_80082fb4();
        uVar1 = DAT_800a5ac8 - DAT_800a5acc & 0x3f;
      }
      return uVar1;
    }
    iVar5 = FUN_800834d4();
    if (iVar5 != 0) break;
    FUN_80082fb4();
  }
  return 0xffffffff;
}
