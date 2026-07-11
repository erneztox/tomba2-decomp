/**
 * @brief Adds item to inventory: increments count (max 99), tracks in item tables at 0x800BFAB4
 * @note Original: func_8004D338 at 0x8004D338
 */
// Inventory_AddItem



void FUN_8004d338(int param_1,s8 param_2)

{
  s8 cVar1;
  char *pcVar2;
  int iVar3;
  
  if (param_1 - 0x17U < 6) {
    *(s8*)(DAT_800bf883 + 0x800bf884) = (char)param_1;
    DAT_800bf883 = DAT_800bf883 + 1;
  }
  if ((&DAT_800bfab4)[param_1] == '\0') {
    pcVar2 = &DAT_800a2be8;
    iVar3 = 0;
    if ((&DAT_800a2be8)[param_1 * 0xc] == '\0') {
      do {
        if (((&DAT_800bfab4)[iVar3] != '\0') && (*pcVar2 == '\0')) {
          (&DAT_800bfbb4)[iVar3] = (&DAT_800bfbb4)[iVar3] + '\x01';
        }
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 0xc;
      } while (iVar3 < 0x100);
      (&DAT_800bfbb4)[param_1] = 0;
      DAT_800bf8a2 = DAT_800bf8a2 + '\x01';
    }
    else {
      do {
        if (((&DAT_800bfab4)[iVar3] != '\0') && (*pcVar2 != '\0')) {
          (&DAT_800bfbb4)[iVar3] = (&DAT_800bfbb4)[iVar3] + '\x01';
        }
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 0xc;
      } while (iVar3 < 0x100);
      (&DAT_800bfbb4)[param_1] = 0;
      DAT_800bf8a1 = DAT_800bf8a1 + '\x01';
    }
  }
  cVar1 = (&DAT_800bfab4)[param_1];
  (&DAT_800bfab4)[param_1] = cVar1 + param_2;
  if (99 < (u8)(cVar1 + param_2)) {
    (&DAT_800bfab4)[param_1] = 99;
  }
  return;
}
