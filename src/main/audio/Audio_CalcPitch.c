/**
 * @brief Audio pitch calculator: clamps abs(param) to 0-0x3FFF, scales to pitch
 * @note Original: func_80092B00 at 0x80092B00
 */
// Audio_CalcPitch



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int Audio_CalcPitch(u16 param_1)

{
  s32 bVar1;
  u16 uVar2;
  int iVar3;
  
  bVar1 = (int)((uint)param_1 << 0x10) < 0;
  if (bVar1) {
    param_1 = -param_1;
  }
  if (param_1 < 10) {
    _DAT_80105bf8 = 1;
    uVar2 = param_1;
    if (bVar1) {
      uVar2 = param_1 | 0x100;
    }
    _DAT_80105bfc = (int)(s16)uVar2;
    iVar3 = (int)(s16)param_1;
    if (iVar3 == 0) {
      GPU_SPU_Cmd(0);
    }
    CD_Main(&DAT_80105bf8);
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}
