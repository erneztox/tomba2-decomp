
void FUN_80081504(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 3);
  (**(code **)(PTR_PTR_800a5998 + 0x3c))(0);
  (**(code **)(PTR_PTR_800a5998 + 0x14))(param_1 + 4,uVar1);
  return;
}

