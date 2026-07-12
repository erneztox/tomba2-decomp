/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_8001661C at 0x8001661C
 */
// DMA_ExecuteUpdate



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 DMA_ExecuteUpdate(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DMA_ExecuteUpdate(_DAT_80039df8,param_1);
  if (iVar1 != -1) {
    _DAT_80039df8 = _DAT_80039df8 + iVar1 * 4;
    uVar2 = DMA_ExecuteUpdate();
    return uVar2;
  }
  return 0;
}
