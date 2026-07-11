/**
 * @brief GPU OT submit: writes prim to ordering table with depth sorting
 * @note Original: func_8007FCC8 at 0x8007FCC8
 */
// GPU_SubmitOT



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007fcc8(s16 param_1,s16 param_2,s16 param_3,s16 param_4,
                 uint param_5)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  
  puVar1 = _g_OT_Buffer;
  iVar3 = 1;
  if ((param_5 & 0x80) != 0) {
    iVar3 = 0x7ff;
  }
  if ((param_5 & 0x7f) == 0) {
    puVar2 = _g_OT_Buffer + 1;
    _g_OT_Buffer = _g_OT_Buffer + 4;
    *puVar2 = 0x460000;
  }
  else {
    puVar2 = _g_OT_Buffer + 1;
    _g_OT_Buffer = _g_OT_Buffer + 4;
    *puVar2 = 0;
  }
  *(u8 *)((int)puVar1 + 3) = 3;
  *(u8 *)((int)puVar1 + 7) = 0x60;
  *(s16 *)(puVar1 + 2) = param_1;
  *(s16 *)((int)puVar1 + 10) = param_2;
  *(s16 *)(puVar1 + 3) = param_3;
  *(s16 *)((int)puVar1 + 0xe) = param_4;
  puVar2 = (uint *)(_g_EntityBuffer + iVar3 * 4);
  *puVar1 = *puVar2 | 0x3000000;
  *puVar2 = (uint)puVar1;
  return;
}
