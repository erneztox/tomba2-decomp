// A09_EntityState_Boss - Boss entity state machine: action dispatch

/* WARNING: Control flow encountered bad instruction data */

void A09_EntityState_Boss(int param_1)

{
  u8 bVar1;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    func_0x0010a060(1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007add0();
      }
      return;
    }
    if (bVar1 == 0) {
      param_1->state = 1;
      func_0x00109eac(param_1,0);
      func_0x0010a060(0);
      Audio_AllocVoice2(0);
      func_0x00075d24(0x1fff);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

