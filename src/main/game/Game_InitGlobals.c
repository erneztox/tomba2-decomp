/**
 * @brief Game globals init: clears 0x68 bytes at 0x800BF808, sets defaults
 * @note Original: func_800796DC at 0x800796DC
 */
// Game_InitGlobals



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800796dc(void)

{
  undefined4 uVar1;
  
  FUN_8009a420(&DAT_800bf808,0,0x68);
  DAT_800bf831 = 0xff;
  DAT_800bf830 = 0xff;
  DAT_1f80027e = 0;
  _DAT_1f800248 = 0;
  DAT_1f800246 = 0;
  _DAT_1f80024c = 0;
  DAT_1f800250 = 0;
  DAT_1f800259 = 0;
  DAT_1f80025a = 0;
  DAT_1f80025b = 0;
  DAT_1f80027a = 0;
  DAT_1f800230 = 0;
  DAT_800bf80f = 1;
  DAT_1f800136 = 0;
  DAT_1f800137 = 0;
  _DAT_1f800184 = 0;
  _DAT_1f800214 = 0;
  _DAT_1f800208 = 0;
  _DAT_1f800280 = 0;
  DAT_1f800231 = 0;
  DAT_1f800251 = 0;
  DAT_1f800232 = 0;
  DAT_1f800253 = 0;
  DAT_1f800233 = 0;
  DAT_1f80023b = 0;
  FUN_800782f0(DAT_800bf870,DAT_800bf871);
  FUN_800508a8();
  uVar1 = 0;
  if ((DAT_1f800236 != 0) && (uVar1 = 0, 1 < DAT_1f800236 - 7)) {
    uVar1 = 0xff;
  }
  FUN_8005082c(uVar1,uVar1,uVar1);
  DAT_800bf9d4 = 0;
  return;
}
