/**
 * @brief CD file load setup: stores 5 params at 0x80102700-18, sets flags
 * @note Original: func_8008CEB0 at 0x8008CEB0
 */
// CD_SetupFileLoad



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CD_SetupFileLoad(uint param_1,s32 param_2,s32 param_3,s32 param_4,
                 s32 param_5)

{
  CD_SetParams(1);
  _DAT_80102718 = 0;
  _DAT_80104b78 = param_4;
  _DAT_801026f0 = param_1 & 1;
  _DAT_80102700 = 0;
  _DAT_801026f8 = 0;
  _DAT_801026ec = 0;
  _DAT_801026e8 = 0;
  _DAT_80104b7c = param_5;
  return;
}
