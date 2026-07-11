/**
 * @brief Resets engine state buffer (0x5F4 bytes at g_GameState)
 * @note Original address: 0x8007982C
 */
// Engine_ResetStateBuffer

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Engine_ResetStateBuffer(void)

{
  FUN_8009a420(&g_GameState,0,0x5f4);
  g_ItemType = 8;
  g_ItemCount = 4;
  g_SpriteParam1 = 0;
  g_SpriteParam2 = 0;
  g_SpriteParam3 = 0;
  g_SpriteParam4 = 0;
  DAT_800bf872 = 0xff;
  DAT_800bfe60 = 0xff;
  DAT_1f8001ff = 0xff;
  _DAT_1f800278 = 0;
  g_ItemFlag = 0x40;
  _DAT_800bf9d0 = 0x15f;
  DAT_800bfab4 = 1;
  DAT_800bfabe = 1;
  DAT_800bfbbe = 1;
  DAT_800bf8b5 = 1;
  DAT_800bf9d2 = 0x56;
  DAT_800bfbb4 = 0;
  DAT_800bf8a2 = 2;
  DAT_800bf9ce = 4;
  _DAT_800bf8a8 = 1;
  _DAT_800bf9f6 = 0x8e8;
  _DAT_800bf9b6 = 0;
  _DAT_800bf9b8 = 0;
  DAT_800bfa21 = 1;
  DAT_800bf89c = 2;
  return;
}

