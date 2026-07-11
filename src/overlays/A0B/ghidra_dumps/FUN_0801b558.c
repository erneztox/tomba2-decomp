// FUN_0801b558

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801b558(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  
  iVar2 = func_0x0007aae8();
  iVar3 = param_1 + param_2 * 4;
  *(int *)(iVar3 + 0xc0) = iVar2;
  if (iVar2 != 0) {
    iVar1 = param_2 * 0xe;
    *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(iVar1 + -0x7fee3ee0);
    **(undefined2 **)(iVar3 + 0xc0) = *(undefined2 *)(iVar1 + -0x7fee3ede);
    *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 2) = *(undefined2 *)(iVar1 + -0x7fee3edc);
    *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 4) = *(undefined2 *)(iVar1 + -0x7fee3eda);
    *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 8) = 0;
    *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 10) = 0;
    *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 0xc) = 0;
    *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 0x38) = 0x1000;
    *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 0x3a) = 0;
    *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 0x3c) = 0x1000;
    func_0x00051b04(*(undefined4 *)(iVar3 + 0xc0),0x16,param_2 + 1);
    uVar4 = (undefined1)(param_2 + 1);
    *(undefined1 *)(param_1 + 9) = uVar4;
    *(undefined1 *)(param_1 + 8) = uVar4;
    func_0x00074590(0x91,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 4) = 3;
  return;
}

