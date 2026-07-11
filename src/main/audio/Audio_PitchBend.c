/**
 * @brief Audio pitch bend: computes pitch delta between param5 and param6
 * @note Original: func_8009401C at 0x8009401C
 */
// Audio_PitchBend



void Audio_PitchBend(s16 param_1,s16 param_2,s16 param_3,s32 param_4,u16 param_5,
                 u16 param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_5;
  uVar1 = (uint)param_6;
  if (uVar3 == uVar1) {
    uVar2 = 0x40;
  }
  else if (uVar1 < uVar3) {
    uVar2 = (uVar1 << 6) / uVar3;
    if (uVar3 == 0) {
      trap(0x1c00);
    }
    if ((uVar3 == 0xffffffff) && (uVar1 == 0x2000000)) {
      trap(0x1800);
    }
  }
  else {
    if (uVar1 == 0) {
      trap(0x1c00);
    }
    if ((uVar1 == 0xffffffff) && (uVar3 == 0x2000000)) {
      trap(0x1800);
    }
    uVar2 = 0x7f - (uVar3 << 6) / uVar1;
    param_5 = param_6;
  }
  Audio_SeqCommand(0x21,(int)param_1,(int)param_2,param_3,param_5,uVar2 & 0xffff);
  return;
}
