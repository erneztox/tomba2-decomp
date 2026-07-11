/**
 * @brief Draws configuration menu layout: sets up panels, sliders, text elements
 * @note Original: func_80034548 at 0x80034548
 */
// UI_DrawConfigMenu



void UI_DrawConfigMenu(s32 param_1)

{
  Entity_DrawChild6(param_1,0x65);
  Entity_DrawQuad(param_1,0,0,0x6c);
  Entity_DrawChild5(param_1,0,100);
  GPU_SpriteOT(0x404040,0,0x74);
  Entity_DrawQuad(param_1,3,3,0x84);
  GPU_SubmitOT(0,0,0x140,0xf0,0x81);
  return;
}
