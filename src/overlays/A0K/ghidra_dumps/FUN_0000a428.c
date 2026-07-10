// FUN_0000a428

void FUN_0000a428(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  if ((param_2 == (param_2 / 10) * 10) && (iVar2 = func_0x00072ddc(0,0,3,0x2a), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x80113338;
    *(undefined2 *)(iVar2 + 0x5c) = 0x7c7e;
    uVar1 = func_0x00079634(param_2,iVar2 + 0x44);
    *(undefined2 *)(iVar2 + 0xe) = uVar1;
    *(undefined2 *)(iVar2 + 0x54) = *(undefined2 *)(param_1 + 2);
    *(undefined2 *)(iVar2 + 0x56) = *(undefined2 *)(param_1 + 6);
    *(undefined2 *)(iVar2 + 0x58) = *(undefined2 *)(param_1 + 10);
  }
  return;
}

