// FUN_8003e264

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003e264(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 in_zero;
  undefined4 extraout_at;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar5 = 0;
  bVar1 = DAT_1f800135 == '\0';
  do {
    puVar2 = _DAT_800bf544;
    *(undefined2 *)(_DAT_800bf544 + 4) = 0x40;
    *(undefined1 *)((int)puVar2 + 6) = 0x80;
    *(undefined1 *)((int)puVar2 + 5) = 0x80;
    *(undefined1 *)(puVar2 + 1) = 0x80;
    *(short *)(puVar2 + 2) = (short)uVar5;
    *(undefined2 *)((int)puVar2 + 10) = 0;
    *(undefined1 *)((int)puVar2 + 0xd) = 0;
    *(undefined1 *)(puVar2 + 3) = 0;
    *(undefined2 *)((int)puVar2 + 0xe) = 0;
    *(undefined2 *)((int)puVar2 + 0x12) = 0x100;
    FUN_80083cc0(puVar2);
    FUN_80083c70(puVar2,0);
    puVar4 = _DAT_800ed8c8;
    *puVar2 = *puVar2 & 0xff000000 | *_DAT_800ed8c8 & 0xffffff;
    puVar3 = puVar2 + 5;
    _DAT_800bf544 = puVar3;
    *puVar4 = *puVar4 & 0xff000000 | (uint)puVar2 & 0xffffff;
    FUN_80083de0(puVar3,1,1,(uint)bVar1 << 4 | (uVar5 & 0x3ff) >> 6 | 0x100,0);
    FUN_80083c30(_DAT_800ed8c8,puVar3);
    puVar4 = puVar2 + 8;
    uVar5 = uVar5 + 0x40;
    _DAT_800bf544 = puVar4;
  } while ((uVar5 & 0xffff) < 0x140);
  FUN_80083db0(puVar4,1);
  puVar3 = _DAT_800ed8c8;
  *puVar4 = *puVar4 & 0xff000000 | _DAT_800ed8c8[0x7ff] & 0xffffff;
  puVar3[0x7ff] = puVar3[0x7ff] & 0xff000000 | (uint)puVar4 & 0xffffff;
  _DAT_800bf544 = puVar2 + 0xb;
  local_30 = CONCAT22(_DAT_800e7eb2,_DAT_800e7eae);
  local_2c = CONCAT22(local_2c._2_2_,_DAT_800e7eb6);
  FUN_800329e0(6);
  setCopReg(2,in_zero,local_30);
  setCopReg(2,extraout_at,local_2c);
  FUN_800317cc(0);
  return;
}

