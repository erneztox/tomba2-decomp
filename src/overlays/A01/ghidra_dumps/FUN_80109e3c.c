// FUN_80109e3c

undefined4 FUN_80109e3c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = func_0x80072ddc(param_1,0,5,3);
  if (iVar2 != 0) {
    bVar1 = *(byte *)(param_1 + 3);
    *(undefined4 *)(iVar2 + 0x1c) = 0x80112100;
    *(byte *)(iVar2 + 3) = (bVar1 & 1) + 6;
    *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(param_1 + 0x36);
    uVar3 = FUN_80112e48();
    return uVar3;
  }
  return 0;
}

