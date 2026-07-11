/**
 * @brief GPU sprite processor: reads sprite data, builds primitives
 * @note Original: func_8007CC00 at 0x8007CC00
 */
// GPU_SpriteProcess



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007cc00(int param_1)

{
  int iVar1;
  ushort uVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  int iVar5;
  undefined2 *puVar6;
  ushort uVar7;
  uint *puVar8;
  
  if (*(char *)(param_1 + 0x47) == '\x01') {
    uVar7 = 0xff;
    if (*(char *)(param_1 + 3) == '\x01') {
      uVar7 = 0x12;
      _DAT_1f80000e = 0x7cbe;
    }
  }
  else {
    uVar7 = 0xff;
  }
  puVar6 = (undefined2 *)&DAT_800ecb88;
  iVar5 = 0;
  DAT_1f800007 = 0x65;
  _DAT_1f800010 = 8;
  _DAT_1f800012 = 0x10;
  puVar8 = _DAT_800bf544;
  if (0 < _DAT_1f80017e) {
    pbVar4 = &DAT_800ecb8b;
    puVar3 = (undefined2 *)((int)_DAT_800bf544 + 0x12);
    do {
      uVar2 = *pbVar4 & 0x7f;
      if ((uVar2 != uVar7) && (uVar7 != 0x12)) {
        _DAT_1f80000e = (uVar2 + 0x1f0) * 0x40 | 0x3f;
        uVar7 = uVar2;
      }
      *(undefined1 *)((int)puVar3 + -0xb) = DAT_1f800007;
      puVar3[-2] = _DAT_1f80000e;
      puVar3[-5] = *puVar6;
      puVar3[-4] = (ushort)pbVar4[-1];
      *(byte *)(puVar3 + -3) = pbVar4[1];
      *(byte *)((int)puVar3 + -5) = pbVar4[3];
      if ((*pbVar4 & 0x80) == 0) {
        puVar3[-1] = _DAT_1f800010;
      }
      else {
        puVar3[-1] = _DAT_1f800010 << 1;
      }
      *puVar3 = _DAT_1f800012;
      iVar1 = _DAT_800ed8c8;
      *puVar8 = *(uint *)(_DAT_800ed8c8 + 8) | 0x4000000;
      *(uint **)(iVar1 + 8) = puVar8;
      puVar3 = puVar3 + 10;
      puVar8 = puVar8 + 5;
      iVar5 = iVar5 + 1;
      pbVar4 = pbVar4 + 8;
      puVar6 = puVar6 + 4;
    } while (iVar5 < _DAT_1f80017e);
  }
  _DAT_800bf544 = puVar8 + 3;
  FUN_80083de0(puVar8,0,0,0x1f,0);
  iVar5 = _DAT_800ed8c8;
  *puVar8 = *(uint *)(_DAT_800ed8c8 + 8) | 0x2000000;
  *(uint **)(iVar5 + 8) = puVar8;
  return;
}
