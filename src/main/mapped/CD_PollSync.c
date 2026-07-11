/**
 * @brief CD poll sync: spins on DAT_800ac280 flag, waits for FUN_8008a190 completion
 * @note Original: func_8008B818 at 0x8008B818
 */
// CD_PollSync



void FUN_8008b818(void)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *DAT_800ac280;
  while( true ) {
    uVar2 = FUN_8008a190();
    if (uVar2 == 0) break;
    if (((uVar2 & 4) != 0) && (DAT_800abfc0 != (code *)0x0)) {
      (*DAT_800abfc0)(DAT_800ac299,&DAT_80102738);
    }
    if (((uVar2 & 2) != 0) && (DAT_800abfbc != (code *)0x0)) {
      (*DAT_800abfbc)(DAT_800ac298,&DAT_80102730);
    }
  }
  *DAT_800ac280 = bVar1 & 3;
  return;
}
