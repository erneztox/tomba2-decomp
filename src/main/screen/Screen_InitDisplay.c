/**
 * @brief Screen display init: sets up 2 framebuffers at 0x800EA0BC/EC12C with 320x240
 * @note Original: func_80050738 at 0x80050738
 */
// Screen_InitDisplay



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Screen_InitDisplay(void)

{
  GPU_InitDisplay(0x800ea0bc,0,0,0x140,0xf0);
  GPU_InitDisplay(0x800ec12c,0,0x100,0x140,0xf0);
  GPU_InitPacket(0x800ea0a8,0,0x100,0x140,0xf0);
  GPU_InitPacket(0x800ec118,0,0,0x140,0xf0);
  _DAT_800ea0b4 = 0x100;
  _DAT_800ea0b6 = 0xe0;
  _DAT_800ec124 = 0x100;
  _DAT_800ec126 = 0xe0;
  DAT_800ea0d5 = 0;
  DAT_800ea0d6 = 0;
  DAT_800ea0d7 = 0;
  DAT_800ec145 = 0;
  DAT_800ec146 = 0;
  DAT_800ec147 = 0;
  _DAT_800ea0b0 = _DAT_800e7e70;
  _DAT_800ea0b2 = _DAT_800e7e72;
  _DAT_800ec120 = _DAT_800e7e70;
  _DAT_800ec122 = _DAT_800e7e72;
  return;
}
