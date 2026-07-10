/**
 * @brief Initializes background entity pool with 4 pre-allocated entities
 * @note Original: func_8007A810 at 0x8007A810
 */
// Entity_InitBackgroundPool



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007a810(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_8009a420(&DAT_800e7e80,0,0x184);
  iVar1 = -0x7feff970;
  _DAT_800f2738 = 0;
  _DAT_800f23a0 = 0;
  iVar3 = 0;
  iVar4 = iVar1;
  do {
    iVar2 = iVar3;
    iVar4 = iVar4 + 0x108;
    FUN_8009a420(iVar1,0,0x108);
    *(int *)(iVar1 + 0x24) = iVar4;
    *(undefined1 *)(iVar1 + 0x28) = 5;
    iVar3 = iVar2 + 1;
    iVar1 = iVar1 + 0x108;
  } while (iVar3 < 4);
  *(undefined4 *)(&DAT_801006b4 + iVar2 * 0x108) = 0;
  _DAT_800f273c = 0x80100690;
  DAT_800f2410 = 4;
  return;
}
