/**
 * @brief Screen mode setup: configures display from DAT_800bfe56 + g_GameState state
 * @note Original: func_800508A8 at 0x800508A8
 */
// Screen_SetMode



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800508a8(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ((int)(uint)_DAT_800bfe56 >> (g_GameState & 0x1f) & 1U) * 4;
  iVar2 = (uint)g_GameState * 8;
  DAT_800ec144 = (&DAT_800a5500)[iVar1 + iVar2];
  DAT_800ea0d5 = *(u8 *)(iVar1 + iVar2 + -0x7ff5aaff);
  DAT_800ea0d6 = *(u8 *)(iVar1 + iVar2 + -0x7ff5aafe);
  DAT_800ea0d7 = *(u8 *)(iVar1 + iVar2 + -0x7ff5aafd);
  DAT_800ea0d4 = DAT_800ec144;
  DAT_800ec145 = DAT_800ea0d5;
  DAT_800ec146 = DAT_800ea0d6;
  DAT_800ec147 = DAT_800ea0d7;
  if (DAT_800ec144 == '\x01') {
    DAT_800bf8a7 = 0x81;
  }
  else {
    DAT_800bf8a7 = 2;
  }
  DAT_800bf8a4 = DAT_800ea0d5;
  DAT_800bf8a5 = DAT_800ea0d6;
  DAT_800bf8a6 = DAT_800ea0d7;
  return;
}
