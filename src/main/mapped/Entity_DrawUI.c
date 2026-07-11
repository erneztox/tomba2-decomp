/**
 * @brief Entity UI draw: renders UI primitive array at entity pos via FUN_80033afc
 * @note Original: func_800737F8 at 0x800737F8
 */
// Entity_DrawUI



void FUN_800737f8(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  
  uVar1 = FUN_80078798(DAT_800bf870,param_1);
  iVar2 = FUN_80073750(uVar1);
  if (iVar2 < 0) {
    local_12 = 0x20;
    iVar2 = -iVar2;
  }
  else {
    local_12 = 0x10;
  }
  iVar3 = iVar2 * -4 + 0xa0;
  FUN_80079374(iVar3 * 0x10000 >> 0x10,0x50,0,uVar1,0);
  local_16 = 0x50;
  local_18 = (undefined2)iVar3;
  local_14 = (undefined2)(iVar2 << 3);
  FUN_8005019c(&local_18,7,1,0);
  return;
}
