// A0H_GameStateDispatch - Game state: dispatches entity kinds 0xC/0x1F

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0H_GameStateDispatch(void)

{
  u8 bVar1;
  u8 *pbVar2;
  s32 *puVar3;
  u8 *pbVar4;
  s32 *puVar5;
  
  DAT_1f800183 = DAT_1f800144;
  puVar5 = _DAT_1f80013c;
  if (_DAT_1f800150 != 0) {
    while (DAT_1f800183 != '\0') {
      pbVar4 = (u8 *)*puVar5;
      DAT_1f800183 = DAT_1f800183 + -1;
      bVar1 = *pbVar4;
      puVar5 = puVar5 + 1;
      if ((bVar1 != 2) && ((bVar1 & 8) == 0)) {
        puVar3 = _DAT_1f800148;
        DAT_1f800182 = DAT_1f800150;
        while (DAT_1f800182 != '\0') {
          pbVar2 = (u8 *)*puVar3;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar3 = puVar3 + 1;
          if (((*pbVar2 & 1) != 0) && ((bVar1 = pbVar2->kind, bVar1 == 0xc || (bVar1 == 0x1f)))) {
            Entity_CallHandler1(pbVar4);
          }
        }
      }
    }
  }
  return;
}

