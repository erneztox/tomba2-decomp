// FUN_08032a3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08032a3c(uint param_1,uint param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar5 = _DAT_800bf544;
  *(undefined1 *)((int)_DAT_800bf544 + 3) = 5;
  puVar5[2] = param_1;
  puVar5[1] = 0xffffff;
  *(undefined1 *)((int)puVar5 + 7) = 0x48;
  puVar5[4] = param_2;
  puVar5[3] = (int)(param_1 + param_2) / 2;
  iVar2 = _DAT_800ed8c8;
  puVar5[5] = 0x55555555;
  puVar1 = _DAT_800bf544;
  puVar3 = (uint *)(param_3 * 4 + iVar2);
  puVar4 = _DAT_800bf544 + 6;
  _DAT_800bf544 = puVar4;
  *puVar5 = *puVar5 & 0xff000000 | *puVar3 & 0xffffff;
  *puVar3 = *puVar3 & 0xff000000 | (uint)puVar5 & 0xffffff;
  func_0x00083de0(puVar4,0,0,0x120,0);
  puVar5 = (uint *)(param_3 * 4 + _DAT_800ed8c8);
  puVar1[6] = puVar1[6] & 0xff000000 | *puVar5 & 0xffffff;
  *puVar5 = *puVar5 & 0xff000000 | (uint)puVar4 & 0xffffff;
  _DAT_800bf544 = _DAT_800bf544 + 3;
  return;
}

