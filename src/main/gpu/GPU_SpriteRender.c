/**
 * @brief GPU sprite renderer: builds sprite prim from params, submits
 * @note Original: func_8007E6DC at 0x8007E6DC
 */
// GPU_SpriteRender



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007e6dc(undefined4 *param_1,short *param_2,int param_3,byte *param_4)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  short *psVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  int iVar8;
  
  bVar1 = *param_4;
  uVar2 = *(ushort *)(param_4 + 2);
  *param_4 = bVar1 & 0xf;
  psVar4 = (short *)(param_3 + *param_2 * 4);
  iVar8 = (int)*psVar4;
  puVar6 = (uint *)(param_3 + psVar4[1]);
  puVar7 = (undefined1 *)((int)puVar6 + 0xb);
  sVar3 = *(short *)((int)puVar6 + 6);
  do {
    _DAT_1f800008 = (short)*param_1;
    _DAT_1f80000a = (short)((uint)*param_1 >> 0x10);
    _DAT_1f800008 = CONCAT22(_DAT_1f80000a + (char)puVar7[4],_DAT_1f800008 + (char)puVar7[3]);
    _DAT_1f80000c = *puVar6;
    _DAT_1f800004 = CONCAT13(100,_DAT_1f800004);
    _DAT_1f800010 = (uint)CONCAT12(*puVar7,(ushort)(byte)puVar7[-1]);
    if ((uVar2 & 0x8000) != 0) {
      _DAT_1f800004 = CONCAT13(0x66,_DAT_1f800004);
    }
    if ((bVar1 & 0xf0) == 0) {
      _DAT_1f800004 = _DAT_1f800004 | 0x1000000;
    }
    else {
      _DAT_1f800004 = CONCAT31(CONCAT21(CONCAT11(DAT_1f800007,bVar1),bVar1),bVar1) & 0xfff0f0f0;
    }
    if ((uVar2 & 0x7fff) != 0) {
      _DAT_1f80000c = CONCAT22(*(undefined2 *)(param_4 + 2),(undefined2)_DAT_1f80000c);
    }
    puVar5 = (uint *)(_DAT_800ed8c8 + (uint)param_4[1] * 4);
    *_DAT_800bf544 = *puVar5 | 0x4000000;
    *puVar5 = (uint)_DAT_800bf544;
    puVar7 = puVar7 + 0x10;
    puVar6 = puVar6 + 4;
    iVar8 = iVar8 + -1;
    _DAT_800bf544[1] = _DAT_1f800004;
    _DAT_800bf544[2] = _DAT_1f800008;
    _DAT_800bf544[3] = _DAT_1f80000c;
    _DAT_800bf544[4] = _DAT_1f800010;
    puVar5 = _DAT_800bf544 + 5;
    _DAT_800bf544 = puVar5;
  } while (iVar8 != 0);
  FUN_80083de0(puVar5,0,0,(int)sVar3,0);
  puVar6 = (uint *)(_DAT_800ed8c8 + (uint)param_4[1] * 4);
  *puVar5 = *puVar6 | 0x2000000;
  *puVar6 = (uint)puVar5;
  _DAT_800bf544 = _DAT_800bf544 + 3;
  return;
}
