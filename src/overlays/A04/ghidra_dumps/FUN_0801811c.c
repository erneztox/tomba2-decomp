// FUN_0801811c

void FUN_0801811c(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x00022f04();
  if (iVar1 != 0) {
    uVar2 = func_0x0001dc9c(param_1,param_2,0,0);
    if ((uVar2 & 0x80) != 0) {
      *(undefined1 *)(param_1 + 0x2b) = 2;
    }
    DAT_1f800182 = 0;
  }
  return;
}

