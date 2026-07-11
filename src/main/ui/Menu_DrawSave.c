/**
 * @brief Menu save drawer: renders save menu with GTE projection
 * @note Original: func_8007F8F8 at 0x8007F8F8
 */
// Menu_DrawSave



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007f8f8(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *local_28 [4];
  ushort local_18 [4];
  
  uVar3 = 0;
  FUN_80079374(0x30,0x20,0,PTR_s_Controls_800a2894,0);
  local_18[0] = 0x40;
  local_18[1] = 0x58;
  local_28[0] = PTR_s_Vibration_800a28d4;
  local_28[1] = PTR_s_Configuration_800a28e0;
  iVar1 = 0;
  do {
    FUN_80079374(0x40,(int)*(short *)((int)local_18 + iVar1),(uint)(DAT_800bf808 == uVar3) << 3,
                 local_28[uVar3],0);
    uVar3 = uVar3 + 1;
    iVar1 = uVar3 * 2;
  } while ((int)uVar3 < 2);
  iVar1 = 0xc40000;
  FUN_8007e998(0x2c,(int)((local_18[DAT_800bf808] + 4) * 0x10000) >> 0x10);
  FUN_80079374(0xe0,(int)((local_18[0] + 3) * 0x10000) >> 0x10,0,&DAT_800172f0,0);
  local_28[0] = PTR_DAT_800a28d8;
  local_28[1] = PTR_DAT_800a28dc;
  uVar3 = 0;
  do {
    uVar2 = 0;
    if (uVar3 == DAT_800fb167) {
      uVar2 = 3;
    }
    uVar4 = uVar3 + 1;
    FUN_80079374(iVar1 >> 0x10,(int)((local_18[0] + 3) * 0x10000) >> 0x10,uVar2,local_28[uVar3],0);
    iVar1 = iVar1 + 0x300000;
    uVar3 = uVar4;
  } while ((int)uVar4 < 2);
  iVar1 = 0xcc0000;
  FUN_80079374(0xe0,(int)((local_18[1] + 3) * 0x10000) >> 0x10,0,&DAT_800172f0,0);
  local_28[0] = &DAT_800172fc;
  local_28[1] = &LAB_80017300;
  uVar3 = 0;
  do {
    uVar2 = 0;
    if (uVar3 == DAT_800fb166) {
      uVar2 = 3;
    }
    uVar4 = uVar3 + 1;
    FUN_80079374(iVar1 >> 0x10,(int)((local_18[1] + 3) * 0x10000) >> 0x10,uVar2,local_28[uVar3],0);
    iVar1 = iVar1 + 0x280000;
    uVar3 = uVar4;
  } while ((int)uVar4 < 2);
  if (DAT_800fb166 == 0) {
    local_28[0] = PTR_DAT_800a28e4;
    local_28[1] = PTR_s_Attack_800a28e8;
    local_28[2] = PTR_DAT_800a28ec;
    local_28[3] = PTR_s_Special_800a28f0;
  }
  else {
    local_28[3] = PTR_DAT_800a28e4;
    local_28[2] = PTR_s_Attack_800a28e8;
    local_28[1] = PTR_DAT_800a28ec;
    local_28[0] = PTR_s_Special_800a28f0;
  }
  FUN_80079324(0xb6,0x6e,0,local_28[0],0);
  FUN_80079324(200,0x86,0,local_28[1],0);
  FUN_80079324(0xc0,0xa4,0,local_28[2],0);
  iVar1 = FUN_80079528(local_28[3]);
  FUN_80079324((iVar1 * -8 + 0x78) * 0x10000 >> 0x10,0x88,0,local_28[3],0);
  FUN_8007e938(_DAT_800ecf58,0xa0,0x92,0,0xe1);
  FUN_8007fc24();
  return;
}
