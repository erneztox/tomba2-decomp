/**
 * @brief UI character renderer: handles 0xFB escape codes, renders glyph tiles
 * @note Original: func_8004EA4C at 0x8004EA4C
 */
// UI_RenderChar



int UI_RenderChar(u8 *param_1,char *param_2,s32 param_3,u8 *param_4)

{
  u8 bVar1;
  s16 sVar2;
  
  sVar2 = 0;
  if (param_2 != (s8*)0x0) {
    param_4 = param_1;
  }
  do {
    bVar1 = *param_1;
    if (bVar1 == 0xfb) {
LAB_8004eac4:
      sVar2 = sVar2 + 8;
    }
    else {
      if (bVar1 < 0xfc) {
        if (bVar1 == 0xfa) {
LAB_8004ea94:
          if (param_2 != (s8*)0x0) {
            *param_2 = (char)param_1 - (char)param_4;
          }
          return (int)sVar2;
        }
      }
      else if (bVar1 == 0xff) goto LAB_8004ea94;
      if (*param_1 < 0xc0) goto LAB_8004eac4;
    }
    param_1 = param_1 + 1;
  } while( true );
}
