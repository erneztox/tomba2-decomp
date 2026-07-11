// A0I_ActiveEntityLoop - Active entity list iterator from DAT_1f80013c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0I_ActiveEntityLoop(s32 param_1)

{
  u8 *pbVar1;
  s32 *puVar2;
  
  puVar2 = _DAT_1f80013c;
  DAT_1f800182 = DAT_1f800144;
  while( true ) {
    do {
      if (DAT_1f800182 == '\0') {
        return;
      }
      pbVar1 = (u8 *)*puVar2;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar2 = puVar2 + 1;
    } while ((*pbVar1 & 1) == 0);
    if (pbVar1[0xc] == 9) break;
    if (pbVar1->kind == 8) {
      Entity_CheckTarget(param_1);
    }
  }
  func_0x001090f0(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

