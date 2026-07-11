/**
 * @brief GPU sprite OT submit: sets GTE vals, creates sprite primitive in ordering table
 * @note Original: func_8007E9C8 at 0x8007E9C8
 */
// GPU_SpriteOT



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007e9c8(undefined3 param_1,char param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  _DAT_1f800004 = CONCAT13(0x62,param_1);
  _DAT_1f800008 = 0;
  _DAT_1f80000c = 0xf00140;
  puVar1 = (uint *)(_DAT_800ed8c8 + param_3 * 4);
  *_DAT_800bf544 = *puVar1 | 0x3000000;
  *puVar1 = (uint)_DAT_800bf544;
  _DAT_800bf544->flags = _DAT_1f800004;
  _DAT_800bf544->kind = _DAT_1f800008;
  _DAT_800bf544->sub_type = _DAT_1f80000c;
  puVar1 = _DAT_800bf544 + 4;
  if (param_2 == '\0') {
    uVar3 = 0x40;
  }
  else {
    uVar3 = 0x20;
  }
  _DAT_800bf544 = puVar1;
  FUN_80083de0(puVar1,0,0,uVar3,0);
  puVar2 = (uint *)(_DAT_800ed8c8 + param_3 * 4);
  *puVar1 = *puVar2 | 0x2000000;
  *puVar2 = (uint)puVar1;
  _DAT_800bf544 = _DAT_800bf544 + 3;
  return;
}
