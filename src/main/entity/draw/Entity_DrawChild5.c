/**
 * @brief Entity child drawer variant 5: draws with GTE projection
 * @note Original: func_80033B94 at 0x80033B94
 */
// Entity_DrawChild5



void FUN_80033b94(int param_1,undefined4 param_2,short param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = (int)param_3;
  FUN_80033afc(0x4000,(int)DAT_800a240c,0x20,iVar3);
  FUN_80033afc(0x8000,(int)DAT_800a2410,0x20,iVar3);
  FUN_80033afc(0x2000,(int)DAT_800a2414,0x20,iVar3);
  FUN_80033afc(0x1000,(int)DAT_800a2418,0x20,iVar3);
  if (param_1->counter2 == '\0') {
    if (param_1->counter1 == '\x02') {
      FUN_80079324(0x1c,0x1c,0x14,PTR_s_____800a3a64,iVar3);
      FUN_80079324(0x68,0x1c,0x14,PTR_s_____800a3a64,iVar3);
      puVar2 = PTR_s__Close_800a3a60;
    }
    else {
      FUN_80079324(0x1c,0x1c,0x14,PTR_DAT_800a3a4c,iVar3);
      FUN_80079324(0x68,0x1c,0x14,PTR_s_____800a3a64,iVar3);
      puVar2 = PTR_s__Close_800a3a60;
    }
  }
  else {
    bVar1 = param_1->counter1;
    if (bVar1 != 1) {
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          return;
        }
        bVar1 = *(byte *)(param_1 + 0x20);
        if (bVar1 == 4) {
          iVar3 = FUN_800368d0(param_1,*(undefined1 *)(param_1 + 0x1f),
                               *(undefined1 *)(param_1 + 0x1d));
          bVar1 = (&DAT_800a2be8)[iVar3 * 0xc];
        }
        if (bVar1 == 1) {
          if (*(char *)(param_1 + 0x27) == '\0') {
            FUN_80079324(0x1c,0x1c,0x14,PTR_DAT_800a3a54,(int)param_3);
            puVar2 = PTR_s__Menu_800a3a5c;
          }
          else {
            FUN_80079324(0x1c,0x1c,0x14,PTR_DAT_800a3a4c,(int)param_3);
            puVar2 = PTR_s__Return_800a28f8;
          }
          FUN_80079324(0xb4,0x1c,0x14,puVar2,(int)param_3);
          puVar2 = PTR_s__Note_800a3a58;
        }
        else if (bVar1 < 2) {
          if (bVar1 != 0) goto LAB_80033fcc;
          FUN_80079324(0x1c,0x1c,0x14,PTR_s__Equip_800a3a50,(int)param_3);
          FUN_80079324(0xb4,0x1c,0x14,PTR_s__Menu_800a3a5c,(int)param_3);
          puVar2 = PTR_s__Note_800a3a58;
        }
        else if (bVar1 == 2) {
          FUN_80079324(0x1c,0x1c,0x14,PTR_s_____800a3a64,(int)param_3);
          FUN_80079324(0xb4,0x1c,0x14,PTR_s__Menu_800a3a5c,(int)param_3);
          puVar2 = PTR_s__Note_800a3a58;
        }
        else {
          if (bVar1 != 5) goto LAB_80033fcc;
          FUN_80079324(0x1c,0x1c,0x14,PTR_DAT_800a3a4c,(int)param_3);
          FUN_80079324(0xb4,0x1c,0x14,PTR_s__Menu_800a3a5c,(int)param_3);
          puVar2 = PTR_s_____800a3a64;
        }
        FUN_80079324(0x68,0x1c,0x14,puVar2,(int)param_3);
        goto LAB_80033fcc;
      }
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 != 3) {
        return;
      }
    }
    FUN_80079324(0x1c,0x1c,0x14,PTR_s_____800a3a64,iVar3);
    FUN_80079324(0x68,0x1c,0x14,PTR_s_____800a3a64,iVar3);
    puVar2 = PTR_s__Menu_800a3a5c;
  }
  FUN_80079324(0xb4,0x1c,0x14,puVar2,iVar3);
LAB_80033fcc:
  FUN_80079324(0x100,0x1c,0x14,PTR_s__Close_800a3a60,(int)param_3);
  return;
}
