/**
 * @brief Engine pool initializer: calls init funcs, clears entity pools
 * @note Original: func_8007B18C at 0x8007B18C
 */
// Engine_InitPool



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Engine_InitPool(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  Render_ClearQueue();
  iVar2 = 0;
  Engine_InitEntity();
  iVar3 = -0x7ff0d8c0;
  do {
    Mem_Set(iVar3,0,0x44);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x44;
  } while (iVar2 < 0x208);
  iVar2 = -0x7ff04ee4;
  _DAT_800e7e74 = &g_EntityPoolFree;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    piVar1 = (int *)(_DAT_800e7e74 + -4);
    _DAT_800e7e74 = _DAT_800e7e74 + -4;
    *piVar1 = iVar2;
    iVar2 = iVar2 + -0x44;
  } while (iVar3 < 0x208);
  _g_EntityPoolCount = 0x208;
  Entity_ClearPool5();
  Entity_InitBackgroundPool();
  Entity_ClearPool0();
  Entity_ClearPool1();
  Entity_ClearPool2();
  Entity_ClearPool3();
  Entity_ClearPool4();
  Entity_InitRenderQueue();
  return;
}
