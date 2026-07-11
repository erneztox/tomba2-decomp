/**
 * @brief BIOS IRQ init: calls BIOS_B0, IRQ off, checks CD status, enables
 * @note Original: func_8009BB10 at 0x8009BB10
 */
// BIOS_InitIRQ



void FUN_8009bb10(s32 param_1)

{
  int iVar1;
  
  FUN_80080920(0);
  FUN_80080890();
  iVar1 = FUN_8009bbec();
  if (iVar1 == 0) {
    param_1 = 0;
  }
  FUN_8009c030(param_1);
  FUN_8009c1fc();
  FUN_8009c0f8();
  FUN_8009c18c();
  FUN_800808a0();
  return;
}
