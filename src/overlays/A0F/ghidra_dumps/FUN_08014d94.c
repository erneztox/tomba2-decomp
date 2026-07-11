// FUN_08014d94

void FUN_08014d94(int param_1,undefined1 param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  
  iVar3 = func_0x0007a980(3,2,0);
  if (iVar3 != 0) {
    *(undefined2 *)(iVar3 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar3 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    uVar2 = *(undefined2 *)(param_1 + 0x36);
    *(undefined1 *)(iVar3 + 0x46) = param_2;
    *(undefined2 *)(iVar3 + 0x54) = 0;
    *(undefined2 *)(iVar3 + 0x58) = 0;
    *(undefined2 *)(iVar3 + 0x36) = uVar2;
    *(undefined2 *)(iVar3 + 0x56) = *(undefined2 *)(param_1 + 0x56);
    *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(param_3 * 4 + -0x7fee5608);
    uVar1 = *(undefined1 *)(param_1 + 0x2a);
    *(undefined1 *)(iVar3 + 2) = 0xd3;
    *(char *)(iVar3 + 3) = (char)param_3;
    *(undefined1 *)(iVar3 + 0x2a) = uVar1;
  }
  return;
}

