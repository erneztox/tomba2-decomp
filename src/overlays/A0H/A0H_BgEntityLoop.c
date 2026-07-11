// A0H_BgEntityLoop - Background entity iterator DAT_1f800154

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0H_BgEntityLoop(void)

{
  u8 bVar1;
  u8 *pbVar2;
  s32 *puVar3;
  
  puVar3 = _DAT_1f800154;
  DAT_1f800183 = DAT_1f80015c;
  while( true ) {
    do {
      if (DAT_1f800183 == '\0') {
        return;
      }
      pbVar2 = (u8 *)*puVar3;
      DAT_1f800183 = DAT_1f800183 + -1;
      puVar3 = puVar3 + 1;
    } while ((*pbVar2 & 2) != 0);
    bVar1 = pbVar2->kind;
    if (bVar1 != 1) break;
    if (pbVar2->sub_type == 1) {
      DAT_1f800182 = DAT_1f800150;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      DAT_1f800182 = DAT_1f800150;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 4) {
    DAT_1f800182 = DAT_1f800150;
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

