// A03_EventBitChecker - Counts bits in entity bitfield, triggers UI sound, updates DAT_800bf9f8

void A03_EventBitChecker(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  uVar1 = (uint)param_1->move_mode;
  do {
    if ((uVar1 & 1) != 0) {
      iVar3 = iVar3 + 1;
    }
    uVar2 = uVar2 + 1;
    uVar1 = (int)(uint)param_1->move_mode >> (uVar2 & 0x1f);
  } while ((int)uVar2 < 7);
  if (iVar3 != 0) {
    Menu_UpdateItemCount(0x36);
    DAT_800bf9f8 = DAT_800bf9f8 | param_1->move_mode;
  }
  return;
}

