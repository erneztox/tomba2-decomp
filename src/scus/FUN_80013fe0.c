
void FUN_80013fe0(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 3);
  (**(code **)(DAT_8002550c + 0x3c))(0);
  (**(code **)(DAT_8002550c + 0x14))(param_1 + 4,uVar1);
  return;
}

