/**
 * @brief CD interrupt handler: reads status, dispatches by event type
 * @note Original: func_80085D8C at 0x80085D8C
 */
// CD_InterruptHandler



void FUN_80085d8c(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (DAT_800aad18 == 0) {
    FUN_8009a730(s_unexpected_interrupt__04x__8001c064,*DAT_800abda4);
    FUN_80086200();
  }
  DAT_800aad1a = 1;
  uVar2 = (uint)(*DAT_800abda8 & DAT_800aad48 & *DAT_800abda4);
  if (uVar2 != 0) {
    do {
      puVar5 = &DAT_800aad1c;
      for (uVar4 = 0; (uVar2 != 0 && ((int)uVar4 < 0xb)); uVar4 = uVar4 + 1) {
        if ((uVar2 & 1) != 0) {
          *DAT_800abda4 = ~(ushort)(1 << (uVar4 & 0x1f));
          if ((code *)*puVar5 != (code *)0x0) {
            (*(code *)*puVar5)();
          }
        }
        puVar5 = puVar5 + 1;
        uVar2 = uVar2 >> 1;
      }
      uVar2 = (uint)(*DAT_800abda8 & DAT_800aad48 & *DAT_800abda4);
    } while (uVar2 != 0);
  }
  if ((*DAT_800abda4 & *DAT_800abda8) == 0) {
    DAT_800abdb0 = 0;
  }
  else {
    iVar3 = DAT_800abdb0 + 1;
    bVar1 = 0x800 < DAT_800abdb0;
    DAT_800abdb0 = iVar3;
    if (bVar1) {
      FUN_8009a730(s_intr_timeout__04x__04x__8001c080,*DAT_800abda4,*DAT_800abda8);
      DAT_800abdb0 = 0;
      *DAT_800abda4 = 0;
    }
  }
  DAT_800aad1a = 0;
  FUN_80086200();
  return;
}
