/**
 * @brief Audio SPU init: iterates _DAT_800bed78 slots, sets ADSR/volume per slot
 * @note Original: func_80074B44 at 0x80074B44
 */
// Audio_InitSPU



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80074b44(void)

{
  undefined1 *puVar1;
  uint uVar2;
  
  DAT_800be358 = 0;
  if ((int)_DAT_800bed78 < 0x18) {
    puVar1 = &DAT_800be238 + _DAT_800bed78 * 0xc;
    uVar2 = _DAT_800bed78;
    do {
      DAT_800be358 = DAT_800be358 | 1 << (uVar2 & 0x1f);
      uVar2 = uVar2 + 1;
      *puVar1 = 0;
      puVar1->flags = puVar1->flags & 0xc0;
      puVar1 = puVar1 + 0xc;
    } while ((int)uVar2 < 0x18);
  }
  FUN_80098f90(0);
  return;
}
