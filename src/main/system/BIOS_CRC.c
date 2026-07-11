/**
 * @brief BIOS CRC/checksum: computes 0x20-u8 blocks, compares
 * @note Original: func_8009C3F4 at 0x8009C3F4
 */
// BIOS_CRC



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 FUN_8009c3f4(s32 param_1)

{
  int iVar1;
  s32 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    FUN_8009a340(&DAT_80106198,0x80);
    iVar1 = iVar3 * 0x20;
    FUN_8009a340((s32 *)(iVar1 + -0x7fefa098),0x20);
    *(s32 *)(iVar1 + -0x7fefa098) = 0xa0;
    *(s32 *)(iVar1 + -0x7fefa094) = 0;
    *(s16 *)(iVar1 + -0x7fefa090) = 0xffff;
    _DAT_80106198 = *(s32 *)(iVar1 + -0x7fefa098);
    _DAT_8010619c = *(s32 *)(iVar1 + -0x7fefa094);
    _DAT_801061a0 = *(s32 *)(iVar1 + -0x7fefa090);
    _DAT_801061a4 = *(s32 *)(iVar1 + -0x7fefa08c);
    _DAT_801061a8 = *(s32 *)(iVar1 + -0x7fefa088);
    _DAT_801061ac = *(s32 *)(iVar1 + -0x7fefa084);
    _DAT_801061b0 = *(s32 *)(iVar1 + -0x7fefa080);
    _DAT_801061b4 = *(s32 *)(iVar1 + -0x7fefa07c);
    iVar3 = iVar3 + 1;
    iVar1 = FUN_8009c2b0(param_1,iVar3,&DAT_80106198);
    if (iVar1 != 1) {
      return false;
    }
  } while (iVar3 < 0xf);
  iVar3 = 0;
  puVar2 = (s32 *)&DAT_80106148;
  do {
    *puVar2 = 0xffffffff;
    FUN_8009a340(&DAT_80106198,0x80);
    _DAT_80106198 = *puVar2;
    iVar1 = FUN_8009c2b0(param_1,iVar3 + 0x10,&DAT_80106198);
    iVar3 = iVar3 + 1;
    if (iVar1 != 1) {
      return false;
    }
    puVar2 = puVar2 + 1;
  } while (iVar3 < 0x14);
  FUN_8009a340(&DAT_80106198,0x80);
  _DAT_80106198 = CONCAT22(DAT_80106198_2,0x434d);
  iVar3 = FUN_8009c2b0(param_1,0);
  return iVar3 == 1;
}
