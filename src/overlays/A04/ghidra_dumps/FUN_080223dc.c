// FUN_080223dc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080223dc(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00051b70(param_1,0xc,0x19);
  if (iVar1 == 0) {
    if (_DAT_800ed098 < 1) {
      *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 8) = 2;
    *(undefined1 *)(param_1 + 9) = 2;
    iVar1 = func_0x0007aae8();
    *(int *)(param_1 + 0xc4) = iVar1;
    *(undefined2 *)(iVar1 + 6) = 0xffff;
    **(undefined2 **)(param_1 + 0xc4) = 0x32;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 4) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x38) = 6000;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3a) = 0x1000;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3c) = 6000;
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0x12,0);
    *(undefined2 *)(param_1 + 0x56) = 0xff06;
  }
  return;
}

