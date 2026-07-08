
void FUN_80051f14(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  param_1 = param_1 * 0x70;
  *(undefined4 *)(&DAT_801fe00c + param_1) = param_2;
  uVar1 = FUN_80080930();
  *(undefined4 *)(&DAT_801fe010 + param_1) = uVar1;
  *(undefined2 *)(&DAT_801fe000 + param_1) = 2;
  (&DAT_801fe06f)[param_1] = 0;
  FUN_80080890();
  uVar1 = FUN_80080860(*(undefined4 *)(&DAT_801fe00c + param_1),
                       *(undefined4 *)(&DAT_801fe008 + param_1),
                       *(undefined4 *)(&DAT_801fe010 + param_1));
  *(undefined4 *)(&DAT_801fe004 + param_1) = uVar1;
  FUN_800808a0();
  return;
}

