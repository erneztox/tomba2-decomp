/**
 * @brief GPU primitive list send: iterates param_2 prims, sends each via DMA
 * @note Original: func_80082C28 at 0x80082C28
 */
// GPU_SendPrimList



undefined4 FUN_80082c28(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2 + -1;
  *DAT_800a5aa8 = 0x4000000;
  if (param_2 != 0) {
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
      *DAT_800a5aa4 = uVar1;
    } while (iVar2 != -1);
  }
  return 0;
}
