// FUN_08030b5c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08030b5c(uint param_1,uint param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar4 = _DAT_800bf544;
  _DAT_800bf544[3] = 0xa000;
  *(undefined1 *)((int)puVar4 + 3) = 7;
  puVar4[2] = param_1;
  puVar4[1] = param_3;
  *(undefined1 *)((int)puVar4 + 7) = 0x58;
  puVar4[6] = param_2;
  puVar4[7] = 0x55555555;
  puVar4[5] = 0;
  *(undefined1 *)((int)puVar4 + 0x17) = 0;
  puVar4[4] = (int)(param_1 + param_2) / 2;
  *(byte *)((int)puVar4 + 7) = *(byte *)((int)puVar4 + 7) | 2;
  puVar1 = _DAT_800bf544;
  puVar2 = (uint *)(param_4 * 4 + _DAT_800ed8c8);
  puVar3 = _DAT_800bf544 + 8;
  _DAT_800bf544 = puVar3;
  *puVar4 = *puVar4 & 0xff000000 | *puVar2 & 0xffffff;
  *puVar2 = *puVar2 & 0xff000000 | (uint)puVar4 & 0xffffff;
  func_0x00083de0(puVar3,0,0,0x120,0);
  puVar4 = (uint *)(param_4 * 4 + _DAT_800ed8c8);
  puVar1[8] = puVar1[8] & 0xff000000 | *puVar4 & 0xffffff;
  *puVar4 = *puVar4 & 0xff000000 | (uint)puVar3 & 0xffffff;
  _DAT_800bf544 = _DAT_800bf544 + 3;
  return;
}

