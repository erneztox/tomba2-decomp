/**
 * @brief Entity UI init: calls draw functions with 0x4000/0x2000 flags, sets up UI elem
 * @note Original: func_800738B0 at 0x800738B0
 */
// Entity_InitUI



void FUN_800738b0(void)

{
  int iVar1;
  int iVar2;
  short local_10 [4];
  
  FUN_80033afc(0x4000,0xbc,0x58,0);
  FUN_80033afc(0x2000,0xbc,0x6c,0);
  iVar1 = FUN_80073750(PTR_s_Save__800a2860);
  iVar2 = iVar1 * -4 + 0xa0;
  local_10[0] = (short)iVar2;
  local_10[1] = 0x3c;
  local_10[2] = (short)(iVar1 << 3);
  local_10[3] = 0x3c;
  FUN_80079374(iVar2 * 0x10000 >> 0x10,0x3c,0,PTR_s_Save__800a2860,0);
  FUN_80079374(0x80,0x50,0,PTR_DAT_800a2864,0);
  FUN_80079374(0x80,100,0,PTR_DAT_800a2868,0);
  if (0x78 < local_10[0]) {
    local_10[0] = 0x78;
    local_10[2] = 0x50;
  }
  FUN_8005019c(local_10,7,1,1);
  return;
}
