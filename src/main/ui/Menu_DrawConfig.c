/**
 * @brief Menu config draw: renders strings + sprites for configuration menu
 * @note Original: func_8007F104 at 0x8007F104
 */
// Menu_DrawConfig



void FUN_8007f104(void)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined local_48->state;
  short local_38->counter1;
  ushort local_28->counter1;
  
  FUN_80078988(0x26,200,0,&DAT_800172ac,0);
  uVar2 = 0;
  iVar3 = 0x4c;
  FUN_80079324(0x32,200,6,PTR_s__Select_800a28f4,0);
  FUN_80079374(0x20,0x20,0,PTR_s_Select_Options_800a2884,0);
  local_48->type = PTR_s_Messages_800a2888;
  local_48->flags = PTR_s_Sound_800a288c;
  local_48->kind = PTR_s_Screen_adjust_800a2890;
  local_48->sub_type = PTR_s_Controls_800a2894;
  sVar1 = FUN_800793c4(local_48,4,local_38);
  do {
    *(int *)(local_28 + uVar2 * 2) = iVar3;
    iVar3 = iVar3 + 0x18;
    FUN_80079374((int)local_38[uVar2 * 2],(int)(short)local_28[uVar2 * 2],
                 (uint)(DAT_800bf808 == uVar2) << 3,local_48[uVar2],0);
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  FUN_8007e998((int)sVar1,(int)((local_28[(uint)DAT_800bf808 * 2] + 4) * 0x10000) >> 0x10,0);
  FUN_8007fc24();
  return;
}
