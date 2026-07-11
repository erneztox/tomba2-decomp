// FUN_08036d3c

int FUN_08036d3c(int param_1,undefined1 param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = func_0x00072ddc(param_1,1,2,0x5c);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x8012eec8;
    uVar1 = *(undefined1 *)(param_1 + 3);
    *(undefined1 *)(iVar2 + 0x5e) = param_2;
    *(undefined1 *)(iVar2 + 3) = uVar1;
  }
  return iVar2;
}

