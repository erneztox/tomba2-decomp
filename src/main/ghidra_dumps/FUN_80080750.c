
undefined4 FUN_80080750(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_80072ddc(param_1,0,5,7);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    *(code **)(iVar1 + 0x1c) = FUN_80080424;
    if (param_2 == 0) {
      *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(param_1 + 0x32);
      *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
    }
    else {
      *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_2 + 0x2c);
      *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(param_2 + 0x30);
      *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_2 + 0x34);
    }
    *(undefined1 *)(iVar1 + 3) = param_3;
    *(undefined1 *)(iVar1 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
    FUN_8003116c(0x2e,iVar1 + 0x2c,0xfffffff6);
    uVar2 = 1;
  }
  return uVar2;
}

