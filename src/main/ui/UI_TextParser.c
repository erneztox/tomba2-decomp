/**
 * @brief UI text parser: processes text buffer, handles control codes
 * @note Original: func_8004F058 at 0x8004F058
 */
// UI_TextParser



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int UI_TextParser(s32 param_1,u16 *param_2,s16 param_3)

{
  u16 uVar1;
  s16 sVar2;
  s32 uVar3;
  
  while( true ) {
    if (param_3 == 0) {
      uVar1 = *param_2;
      uVar3 = param_1;
      while (1 < (uVar1 + 2 & 0xffff)) {
        if ((uVar1 & 0x8000) == 0) {
          uVar3 = UI_TextDecode(uVar3,&DAT_800a2be8 + (uint)*param_2 * 0xc);
        }
        else {
          uVar3 = String_CopyUntil(uVar3,_DAT_800bf800 +
                                     (uint)*(u16 *)((uVar1 & 0xfff) * 2 + _DAT_800bf7fc));
        }
        param_2 = param_2 + 1;
        uVar1 = *param_2;
      }
      sVar2 = UI_RenderChar(param_1,0);
      return (int)sVar2;
    }
    if (*param_2 == 0xfffe) break;
    if (*param_2 == 0xffff) {
      param_3 = param_3 + -1;
    }
    param_2 = param_2 + 1;
  }
  return 0;
}
