// FUN_0802b828

bool FUN_0802b828(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = func_0x00072ddc(param_1,1,4,0x58);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x801246f0;
    *(undefined1 *)(iVar2 + 3) = *(undefined1 *)(param_1 + 3);
    *(undefined1 *)(iVar2 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
    *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x7c);
    *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(param_1 + 0x7e);
    uVar1 = *(undefined2 *)(param_1 + 0x60);
    *(undefined2 *)(iVar2 + 0x54) = 0;
    *(undefined2 *)(iVar2 + 0x58) = 0;
    *(undefined2 *)(iVar2 + 0x56) = uVar1;
  }
  return iVar2 != 0;
}

