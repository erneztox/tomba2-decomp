
void FUN_800139b0(int param_1)

{
  undefined4 uVar1;
  
  if (1 < DAT_80025516) {
    (*DAT_80025510)(&DAT_8001020c,param_1);
  }
  if (param_1 == 0) {
    FUN_80015dd4(&DAT_80025580,0xffffffff,0x14);
  }
  uVar1 = 0x3000001;
  if (param_1 != 0) {
    uVar1 = 0x3000000;
  }
  (**(code **)(DAT_8002550c + 0x10))(uVar1);
  return;
}

