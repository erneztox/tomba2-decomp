/**
 * @brief Sets up GPU primitive packet header before DMA transfer
 * @note Original: func_80080FD4 at 0x80080FD4
 */
// GPU_SetupPacket



void FUN_80080fd4(undefined4 param_1,short *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  if (DAT_800a59a2 == '\x01') {
    iVar3 = (int)param_2->kind;
    if ((iVar3 <= DAT_800a59a4) && (iVar3 + *param_2 <= (int)DAT_800a59a4)) {
      iVar1 = (int)param_2->flags;
      if (((iVar1 <= DAT_800a59a6) &&
          (((iVar1 + param_2->sub_type <= (int)DAT_800a59a6 && (0 < iVar3)) && (-1 < *param_2)))) &&
         ((-1 < iVar1 && (0 < param_2->sub_type)))) {
        return;
      }
    }
    pcVar2 = s__s_bad_RECT_8001bef0;
  }
  else {
    if (DAT_800a59a2 != '\x02') {
      return;
    }
    pcVar2 = &DAT_8001bf10;
  }
  (*(code *)PTR_FUN_800a599c)(pcVar2,param_1);
  (*(code *)PTR_FUN_800a599c)
            (s___d__d____d__d__8001befc,(int)*param_2,(int)param_2->flags,(int)param_2->kind,
             (int)param_2->sub_type);
  return;
}
