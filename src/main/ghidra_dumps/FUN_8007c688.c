
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007c688(undefined4 param_1,short *param_2,undefined1 param_3,short param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_4 == 0) {
    uVar3 = 2;
    uVar1 = _DAT_800bfa24;
  }
  else {
    uVar3 = 0;
    uVar1 = _DAT_800bfa26;
  }
  uVar2 = uVar1 / 100;
  if (uVar2 == 0) {
    uVar2 = 0x80;
    *param_2 = *param_2 + 0x10;
  }
  else {
    param_1 = FUN_8007c2a4(param_1,param_2,param_3,uVar2 & 0xff | 0x80,uVar3);
    uVar2 = 0;
  }
  FUN_8007c2a4(param_1,param_2,param_3,(uint)uVar1 % 100 | uVar2,uVar3);
  return;
}

