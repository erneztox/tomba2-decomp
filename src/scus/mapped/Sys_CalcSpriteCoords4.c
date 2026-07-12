/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80014668 at 0x80014668
 */
// Sys_CalcSpriteCoords4



void Sys_CalcSpriteCoords4(undefined4 param_1,uint param_2,int param_3)

{
  uint in_v1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_s0;
  uint unaff_s2;
  
  uVar1 = param_2 + (uint)(byte)(&DAT_80025610)[param_3] * 4;
  if (((int)uVar1 <= (int)in_v1) && (uVar1 = 0xcda, (int)in_v1 < 0xcdb)) {
    uVar1 = in_v1;
  }
  if (unaff_s0 < 0x10) {
    uVar2 = 0x10;
  }
  else {
    uVar2 = 0x101;
    if (unaff_s0 < 0x102) {
      Sys_CalcSpriteCoords4();
      return;
    }
  }
  uVar3 = uVar2 + 2;
  if (((int)(uVar2 + 2) <= (int)unaff_s2) && (uVar3 = 0x102, (int)unaff_s2 < 0x103)) {
    uVar3 = unaff_s2;
  }
  (**(code **)(DAT_8002550c + 0x10))((uVar1 & 0xfff) << 0xc | param_2 & 0xfff | 0x6000000);
  (**(code **)(DAT_8002550c + 0x10))((uVar3 & 0x3ff) << 10 | uVar2 | 0x7000000);
  Sys_CalcSpriteCoords4(&DAT_80025580);
  return;
}
