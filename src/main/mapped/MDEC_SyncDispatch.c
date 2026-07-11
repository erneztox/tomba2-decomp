/**
 * @brief MDEC sync dispatch: param=0 calls SyncOut, else calls SyncIn (swapped)
 * @note Original: func_8009C820 at 0x8009C820
 */
// MDEC_SyncDispatch



uint FUN_8009c820(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_8009caec();
  }
  else {
    uVar1 = FUN_8009cc14();
    uVar1 = uVar1 >> 0x1d & 1;
  }
  return uVar1;
}
