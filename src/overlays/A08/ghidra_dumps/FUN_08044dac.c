// FUN_08044dac

int FUN_08044dac(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,0,2,0x47);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8013dc04;
    *(undefined1 *)(iVar1 + 3) = param_2;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 2);
    *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(param_1 + 6);
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 10);
  }
  return iVar1;
}

