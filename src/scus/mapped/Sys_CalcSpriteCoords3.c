/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_8001464C at 0x8001464C
 */
// Sys_CalcSpriteCoords3



void Sys_CalcSpriteCoords3(uint param_1,undefined4 param_2,int param_3)

{
  uint in_v1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_s0;
  uint unaff_s2;
  
  uVar1 = 500;
  if ((499 < (int)param_1) && (uVar1 = 0xcb2, (int)param_1 < 0xcb3)) {
    uVar1 = param_1;
  }
  uVar2 = uVar1 + (uint)(byte)(&DAT_80025610)[param_3] * 4;
  if (((int)uVar2 <= (int)in_v1) && (uVar2 = 0xcda, (int)in_v1 < 0xcdb)) {
    uVar2 = in_v1;
  }
  if (unaff_s0 < 0x10) {
    uVar3 = 0x10;
  }
  else {
    uVar3 = 0x101;
    if (unaff_s0 < 0x102) {
      Sys_CalcSpriteCoords3();
      return;
    }
  }
  uVar4 = uVar3 + 2;
  if (((int)(uVar3 + 2) <= (int)unaff_s2) && (uVar4 = 0x102, (int)unaff_s2 < 0x103)) {
    uVar4 = unaff_s2;
  }
  (**(code **)(DAT_8002550c + 0x10))((uVar2 & 0xfff) << 0xc | uVar1 & 0xfff | 0x6000000);
  (**(code **)(DAT_8002550c + 0x10))((uVar4 & 0x3ff) << 10 | uVar3 | 0x7000000);
  Sys_CalcSpriteCoords3(&DAT_80025580);
  return;
}
