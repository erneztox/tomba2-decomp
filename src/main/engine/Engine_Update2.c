/**
 * @brief Engine update variant 2: checks DAT_800a3b0c, updates subsystems
 * @note Original: func_8003E030 at 0x8003E030
 */
// Engine_Update2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003e030(void)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  
  if (DAT_800a3b0c == '\x02') {
    DAT_800a3b10 = DAT_800a3b10 + 0x88;
    DAT_800a3b14 = DAT_800a3b14 + 0x20;
    iVar7 = _DAT_1f800094 * 0x180 >> 8;
    iVar4 = FUN_80083f50();
    iVar5 = FUN_80083e80(DAT_800a3b10);
    puVar2 = _DAT_800bf544;
    uVar8 = 0;
    FUN_80083db0(_DAT_800bf544,0);
    puVar3 = _DAT_800ed8c8;
    bVar1 = DAT_1f800135 == '\0';
    *puVar2 = *puVar2 & 0xff000000 | *_DAT_800ed8c8 & 0xffffff;
    _DAT_800bf544 = puVar2 + 3;
    *puVar3 = *puVar3 & 0xff000000 | (uint)puVar2 & 0xffffff;
    do {
      puVar2 = _DAT_800bf544;
      *(undefined1 *)((int)_DAT_800bf544 + 6) = 0x80;
      *(undefined1 *)((int)puVar2 + 5) = 0x80;
      *(undefined1 *)(puVar2 + 1) = 0x80;
      *(short *)((int)puVar2 + 10) = (short)(iVar5 * iVar7 >> 0x12);
      *(undefined1 *)((int)puVar2 + 0xd) = 0;
      *(undefined1 *)(puVar2 + 3) = 0;
      *(undefined2 *)((int)puVar2 + 0xe) = 0;
      *(short *)(puVar2 + 2) = (short)uVar8 + (short)(iVar4 * iVar7 * 3 >> 0x12);
      *(undefined2 *)(puVar2 + 4) = 0x40;
      *(undefined2 *)((int)puVar2 + 0x12) = 0x100;
      FUN_80083cc0(puVar2);
      FUN_80083c70(puVar2,1);
      puVar3 = _DAT_800ed8c8;
      *puVar2 = *puVar2 & 0xff000000 | *_DAT_800ed8c8 & 0xffffff;
      puVar6 = puVar2 + 5;
      _DAT_800bf544 = puVar6;
      *puVar3 = *puVar3 & 0xff000000 | (uint)puVar2 & 0xffffff;
      FUN_80083de0(puVar6,1,1,(uint)bVar1 << 4 | (uVar8 & 0x3ff) >> 6 | 0x100,0);
      FUN_80083c30(_DAT_800ed8c8,puVar6);
      _DAT_800bf544 = puVar2 + 8;
      uVar8 = uVar8 + 0x40;
    } while ((uVar8 & 0xffff) < 0x140);
  }
  return;
}
