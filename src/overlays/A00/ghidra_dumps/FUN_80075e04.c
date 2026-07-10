// FUN_80075e04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80075e04(uint param_1,uint param_2,byte param_3,byte param_4,byte param_5,byte param_6,
                 byte param_7,byte param_8)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  byte bVar6;
  uint local_8;
  
  bVar6 = 0xfe;
  puVar1 = (uint *)(&DAT_800be238 + _DAT_800bed78 * 0xc);
  puVar4 = (uint *)0x0;
  if ((int)_DAT_800bed78 < 0x18) {
    pbVar2 = &DAT_800be239 + _DAT_800bed78 * 0xc;
    uVar3 = _DAT_800bed78;
    uVar5 = param_2;
    do {
      if ((param_1 == pbVar2[7]) &&
         (((int)(uint)*pbVar2 < (int)uVar5 || ((*pbVar2 == uVar5 && ((byte)*puVar1 <= bVar6)))))) {
        uVar5 = (uint)*pbVar2;
        bVar6 = (byte)*puVar1;
        puVar4 = puVar1;
        local_8 = uVar3;
      }
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 0xc;
      puVar1 = puVar1 + 3;
    } while ((int)uVar3 < 0x18);
  }
  if (puVar4 == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    *(byte *)((int)puVar4 + 2) = param_3;
    *(byte *)((int)puVar4 + 3) = param_4;
    *(byte *)(puVar4 + 1) = param_5;
    *(byte *)((int)puVar4 + 5) = param_6;
    *(byte *)((int)puVar4 + 6) = param_7;
    *(byte *)((int)puVar4 + 1) = (byte)param_2;
    *(byte *)((int)puVar4 + 7) = param_8;
    *(byte *)puVar4 = 0xff;
    uVar3 = *puVar4 & 0xffffff00 | local_8;
  }
  return uVar3;
}

