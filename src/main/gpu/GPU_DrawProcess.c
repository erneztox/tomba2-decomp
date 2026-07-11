/**
 * @brief GPU draw processor: processes draw commands, calls handlers
 * @note Original: func_8003E894 at 0x8003E894
 */
// GPU_DrawProcess



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003e894(void)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  
  local_30 = CONCAT22(_DAT_800e7eb2,_DAT_800e7eae);
  local_2c = CONCAT22(local_2c._2_2_,_DAT_800e7eb6);
  FUN_800329e0(6);
  setCopReg(2,in_zero,local_30);
  setCopReg(2,extraout_at,local_2c);
  FUN_800317cc(0);
  iVar5 = 0;
  iVar3 = FUN_80083f50(DAT_800a3b18);
  _DAT_1f80008c = _DAT_1f80008c + (short)((iVar3 << 5) >> 0xc);
  iVar3 = FUN_80083e80(DAT_800a3b18);
  puVar1 = _DAT_800bf544;
  _DAT_1f80008e = _DAT_1f80008e + (short)((iVar3 << 5) >> 0xc);
  DAT_800a3b18 = DAT_800a3b18 + 0x249;
  FUN_80083db0(_DAT_800bf544,0);
  puVar2 = _DAT_800ed8c8;
  *puVar1 = *puVar1 & 0xff000000 | *_DAT_800ed8c8 & 0xffffff;
  _DAT_800bf544 = puVar1 + 3;
  *puVar2 = *puVar2 & 0xff000000 | (uint)puVar1 & 0xffffff;
  do {
    local_28 = (undefined2)iVar5;
    local_26 = 0;
    local_24 = 0x40;
    local_22 = 0xff;
    FUN_8003e448(&local_28,0xc);
    puVar1 = _DAT_800bf544;
    iVar5 = iVar5 + 0x40;
  } while (iVar5 < 0x140);
  FUN_80083de0(_DAT_800bf544,0,0,0,0);
  puVar4 = puVar1 + 3;
  FUN_80083c30(_DAT_800ed8c8,puVar1);
  _DAT_800bf544 = puVar4;
  FUN_80083db0(puVar4,1);
  puVar2 = _DAT_800ed8c8;
  *puVar4 = *puVar4 & 0xff000000 | _DAT_800ed8c8[0x7ff] & 0xffffff;
  _DAT_800bf544 = puVar1 + 6;
  puVar2[0x7ff] = puVar2[0x7ff] & 0xff000000 | (uint)puVar4 & 0xffffff;
  return;
}
