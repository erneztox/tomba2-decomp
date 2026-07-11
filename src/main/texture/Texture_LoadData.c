/**
 * @brief Texture data load: DMA transfer from 0x800A3ED8 table, switches on param_2 mode
 * @note Original: func_800450BC at 0x800450BC
 */
// Texture_LoadData



void FUN_800450bc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_FUN_800a3ed8;
  if (param_2 != 3) {
    FUN_8001db8c(0x80106228,(&DAT_800be1e0)[param_2 * 2],(&DAT_800be1e4)[param_2 * 2]);
    FUN_80051f80(1);
    puVar2 = *(undefined **)(&DAT_800a3ecc + param_2 * 4);
  }
  *param_1 = puVar2;
  uVar1 = FUN_80080930();
  param_1->flags = uVar1;
  return;
}
