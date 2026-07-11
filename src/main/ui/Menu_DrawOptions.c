/**
 * @brief Menu options draw: renders text strings via Menu_TextDraw2 + sprites via GPU_RenderSprite_V2
 * @note Original: func_8007F078 at 0x8007F078
 */
// Menu_DrawOptions



void Menu_DrawOptions(void)

{
  Menu_TextDraw2(0x76,200,0,&DAT_800172a4,0);
  GPU_RenderSprite_V2(0x82,200,6,PTR_s__Return_800a28f8,0);
  Menu_TextDraw2(0xc6,200,0,&DAT_800172a8,0);
  GPU_RenderSprite_V2(0xd2,200,6,PTR_s__Exit_800a2900,0);
  return;
}
