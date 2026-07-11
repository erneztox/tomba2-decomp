/**
 * @brief Entity sprite draw dispatch: reads sprite type, calls draw handler
 * @note Original: func_80024D34 at 0x80024D34
 */
// Entity_DrawSpriteDispatch



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80024d34(int param_1)

{
  char cVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  
  puVar3 = _DAT_1f800158;
  cVar1 = DAT_1f80015e;
  if ((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) {
    while (DAT_1f800182 = cVar1, DAT_1f800182 != '\0') {
      pbVar2 = (byte *)*puVar3;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar3 = puVar3 + 1;
      cVar1 = DAT_1f800182;
      if (((*pbVar2 & 4) != 0) && (pbVar2[2] == 2)) {
        func_0x80114320(param_1);
        cVar1 = DAT_1f800182;
      }
    }
  }
  return _DAT_1f800080;
}
