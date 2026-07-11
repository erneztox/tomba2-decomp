// FUN_08031b48

undefined4 FUN_08031b48(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(short *)(param_1 + 0x60) != -1) {
    func_0x0004d4f4((int)*(short *)(param_1 + 0x60),1);
    *(undefined2 *)(param_1 + 0x60) = 0xffff;
    uVar1 = 3;
  }
  return uVar1;
}

