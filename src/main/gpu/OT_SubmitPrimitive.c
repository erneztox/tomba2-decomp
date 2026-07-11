/**
 * @brief Submits a primitive to the ordering table with depth sorting
 * @note Original: func_8003FAE8 at 0x8003FAE8
 */
// OT_SubmitPrimitive



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003fae8(int param_1,s16 param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = _g_OT_Buffer;
  FUN_80083db0(_g_OT_Buffer,(int)param_2);
  puVar2 = (uint *)(((param_1 << 0x10) >> 0xe) + _g_EntityBuffer);
  *puVar1 = *puVar1 & 0xff000000 | *puVar2 & 0xffffff;
  _g_OT_Buffer = puVar1 + 3;
  *puVar2 = *puVar2 & 0xff000000 | (uint)puVar1 & 0xffffff;
  return;
}
