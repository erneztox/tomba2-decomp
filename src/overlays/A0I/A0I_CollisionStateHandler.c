// A0I_CollisionStateHandler - Entity state: collision check, anim frame, score events

/* WARNING: Control flow encountered bad instruction data */

void A0I_CollisionStateHandler(int param_1)

{
  u8 bVar1;
  int iVar2;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    iVar2 = Entity_StateDispatch2(param_1);
    if (iVar2 != 0) {
      func_0x0010b17c(param_1,param_1->sub_type);
    }
    if (DAT_800bf918 != -1) {
      Entity_CheckCollectible(100);
    }
    func_0x00026a68(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007add0(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      param_1->state = 1;
      func_0x0010b17c(param_1,0);
      func_0x0004d8d8(0xf,0);
      Audio_AllocVoice2(0);
      func_0x00075d24(0x1fff);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

