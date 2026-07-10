// FUN_00003a94

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003a94(void)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  
  _DAT_80115898 = _DAT_80115898 + 0x88;
  _DAT_8011589c = _DAT_8011589c + 0x20;
  if (_DAT_8011a6cc < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar8 = _DAT_8011a6cc * 0x180 >> 8;
  iVar4 = func_0x00083f50(_DAT_80115898);
  iVar5 = func_0x00083e80(_DAT_80115898);
  puVar2 = _DAT_800bf544;
  uVar9 = 0;
  func_0x00083db0(_DAT_800bf544,0);
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
    *(short *)((int)puVar2 + 10) = (short)(iVar5 * iVar8 >> 0x12);
    *(undefined1 *)((int)puVar2 + 0xd) = 0;
    *(undefined1 *)(puVar2 + 3) = 0;
    *(undefined2 *)((int)puVar2 + 0xe) = 0;
    *(short *)(puVar2 + 2) = (short)uVar9 + (short)(iVar4 * iVar8 * 3 >> 0x12);
    *(undefined2 *)(puVar2 + 4) = 0x40;
    *(undefined2 *)((int)puVar2 + 0x12) = 0x100;
    func_0x00083cc0(puVar2);
    func_0x00083c70(puVar2,1);
    puVar3 = _DAT_800ed8c8;
    uVar6 = uVar9 & 0x3ff;
    uVar9 = uVar9 + 0x40;
    *puVar2 = *puVar2 & 0xff000000 | *_DAT_800ed8c8 & 0xffffff;
    puVar7 = puVar2 + 5;
    _DAT_800bf544 = puVar7;
    *puVar3 = *puVar3 & 0xff000000 | (uint)puVar2 & 0xffffff;
    func_0x00083de0(puVar7,1,1,(uint)bVar1 << 4 | uVar6 >> 6 | 0x100,0);
    func_0x00083c30(_DAT_800ed8c8,puVar7);
    _DAT_800bf544 = puVar2 + 8;
  } while ((uVar9 & 0xffff) < 0x140);
  return;
}

