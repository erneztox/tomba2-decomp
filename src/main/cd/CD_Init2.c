/**
 * @brief CD init variant 2: calls FUN_80096bf0, clears buffer at 0x800AC5EE
 * @note Original: func_80096A90 at 0x80096A90
 */
// CD_Init2



void FUN_80096a90(int param_1)

{
  s16 *puVar1;
  int iVar2;
  
  FUN_80085b20();
  FUN_80096bf0(param_1);
  if (param_1 == 0) {
    iVar2 = 0x17;
    puVar1 = &DAT_800ac5ee;
    do {
      *puVar1 = 0xc000;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -1;
    } while (-1 < iVar2);
  }
  FUN_80096b78();
  DAT_800ac598 = 0;
  DAT_800ac59c = 0;
  DAT_800ac5a8 = 0;
  DAT_800ac5ac = 0;
  DAT_800ac5ae = 0;
  DAT_800ac5b0 = 0;
  DAT_800ac5b4 = 0;
  DAT_800ac5a0 = DAT_800acb94;
  FUN_800974fc(0xd1,DAT_800acb94,0);
  DAT_800ac664 = 0;
  DAT_800ac668 = 0;
  DAT_800ac66c = 0;
  DAT_800ac594 = 0;
  DAT_800ac620 = 0;
  DAT_800ac590 = 0;
  DAT_800ac5bc = 0;
  DAT_800ac5b8 = 0;
  DAT_800ac5f0 = 0;
  return;
}
