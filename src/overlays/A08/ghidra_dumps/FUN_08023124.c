// FUN_08023124

void FUN_08023124(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  iVar1 = func_0x00031220(0x914,param_2,0xffffffe2);
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 0x54) = 0x7ff;
    *(undefined2 *)(iVar1 + 0x56) = 3;
    *(undefined2 *)(iVar1 + 0x58) = 6;
    *(undefined2 *)(iVar1 + 0x5e) = 0x1f;
    *(undefined2 *)(iVar1 + 0x62) = 0x100;
    *(undefined2 *)(iVar1 + 0x52) = param_4;
    *(undefined2 *)(iVar1 + 0x5c) = 0x3f;
    *(undefined2 *)(iVar1 + 0x60) = 0x3f;
    *(undefined2 *)(iVar1 + 0x50) = 2;
    *(undefined2 *)(iVar1 + 0x5a) = param_3;
  }
  return;
}

