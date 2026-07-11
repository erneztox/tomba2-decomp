// A03_PlayerStateMask - Modifies player state flags (DAT_800e7e8d & 0xd0)

/* WARNING: Control flow encountered bad instruction data */

void A03_PlayerStateMask(void)

{
  u8 bVar1;
  u8 bVar2;
  u8 bVar3;
  
  bVar2 = DAT_800e7e8d;
  bVar3 = DAT_800e7e8d | 2;
  if ((DAT_800e7e8d & 0xd0) == 0) {
    DAT_800e7e8d = 0;
  }
  else {
    bVar1 = DAT_800e7e8d & 0x20;
    DAT_800e7e8d = bVar3;
    if (bVar1 == 0) {
      if ((bVar2 & 0x10) == 0) {
        if ((bVar2 & 0x80) != 0) {
          Math_Cos((DAT_1f800247 & 0xf) << 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        DAT_800e7e98 = 0x20;
        DAT_800e7e99 = 0x20;
        DAT_800e7e9a = 0x20;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (((DAT_1f800247 & 0x30) == 0) && (1 < (DAT_1f800247 & 3))) {
        DAT_800e7e98 = 0xd0;
      }
      else {
        if ((bVar2 & 0x80) != 0) {
          Math_Cos((DAT_1f800247 & 0xf) << 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((bVar2 & 0x40) == 0) {
          DAT_800e7e98 = 0x80;
        }
        else {
          DAT_800e7e98 = 0x20;
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  func_0x00109870(0x800e7e80);
  if (DAT_800e7e81 != '\0') {
    Entity_Draw(0x800e7e80);
  }
  return;
}

