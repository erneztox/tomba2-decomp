/**
 * @brief UI panel draw variant 2: uses _DAT_800bf552 index, different layout
 * @note Original: func_8004FA38 at 0x8004FA38
 */
// UI_DrawPanel2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004fa38(short *param_1,short param_2,undefined1 param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  if (7 < _DAT_800bf552) {
    FUN_8004f8dc(&DAT_800bf548);
  }
  iVar2 = _DAT_800bf552 * 0x20;
  FUN_8004ee2c((undefined4 *)(iVar2 + -0x7ff40908));
  if (param_2 == -1) {
    *(undefined4 *)(iVar2 + -0x7ff40908) = param_1;
  }
  else {
    psVar3 = (short *)(iVar2 + -0x7ff40904);
    sVar1 = *param_1;
    while (sVar1 != -2) {
      param_1 = param_1 + 1;
      *psVar3 = sVar1;
      psVar3 = psVar3 + 1;
      sVar1 = *param_1;
    }
    *psVar3 = -2;
  }
  *(undefined1 *)(iVar2 + -0x7ff408ec) = param_3;
  _DAT_800bf552 = _DAT_800bf552 + 1;
  return;
}
