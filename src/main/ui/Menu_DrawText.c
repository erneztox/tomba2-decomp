/**
 * @brief Menu text drawer: renders string via sprite primitives + GTE projection
 * @note Original: func_8007F73C at 0x8007F73C
 */
// Menu_DrawText



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007f73c(void)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  undefined *local_38 [4];
  ushort local_28 [4];
  undefined1 auStack_20 [8];
  
  FUN_80079374(0x30,0x30,0,PTR_s_Screen_adjust_800a2890,0);
  iVar4 = 0;
  iVar1 = FUN_80079528(PTR_s_Screen_adjust_800a2890);
  FUN_8007fcc8(0x28,0x2c,(iVar1 * 8 + 0x10) * 0x10000 >> 0x10,0x18,0);
  local_28[0] = 0x5c;
  local_28[1] = 0x84;
  local_38[0] = PTR_s_Vertical_800a28cc;
  local_38[1] = PTR_s_Horizontal_800a28d0;
  iVar1 = 0;
  do {
    iVar2 = FUN_80079528(*(undefined4 *)((int)local_38 + iVar1));
    puVar3 = local_28 + iVar4;
    iVar4 = iVar4 + 1;
    FUN_80079374((iVar2 * -8 + 0x98) * 0x10000 >> 0x10,(int)(short)*puVar3,0,
                 *(undefined4 *)((int)local_38 + iVar1),0);
    FUN_8007fcc8((iVar2 * -8 + 0x90) * 0x10000 >> 0x10,(int)((*puVar3 - 4) * 0x10000) >> 0x10,
                 (iVar2 * 8 + 0x30) * 0x10000 >> 0x10,0x18,0);
    iVar1 = iVar4 * 4;
  } while (iVar4 < 2);
  FUN_8009b0c0(auStack_20,&DAT_800172f8,_DAT_800e7e72 + -8);
  FUN_80079374(0xa8,0x5e,3,auStack_20,0);
  FUN_8009b0c0(auStack_20,&DAT_800172f8,(int)_DAT_800e7e70);
  FUN_80079374(0xa8,0x86,3,auStack_20,0);
  FUN_8007fcc8(100,0xc1,0xc0,0x15,1);
  return;
}
