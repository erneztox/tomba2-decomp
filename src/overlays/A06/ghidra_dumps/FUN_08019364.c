// FUN_08019364

void FUN_08019364(int param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x00022f04();
  if (iVar1 != 0) {
    uVar2 = func_0x0001dc9c(param_1,param_2,0,0x80);
    if ((uVar2 & 0x80) != 0) {
      *(undefined1 *)(param_1 + 0x2b) = 2;
      *param_2 = 2;
      param_2[4] = 2;
      param_2[5] = 6;
      param_2[6] = 0;
    }
    param_2[0x2b] = 1;
    DAT_1f800182 = 0;
  }
  return;
}

