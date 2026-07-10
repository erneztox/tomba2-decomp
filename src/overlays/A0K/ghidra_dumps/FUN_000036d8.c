// FUN_000036d8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000036d8(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar3 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
    sVar1 = *(short *)(param_1 + 0x44);
    iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar3 * sVar1 >> 4);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (iVar4 * *(short *)(param_1 + 0x44) >> 4);
    _DAT_1f8000c0 = 0;
    _DAT_1f8000c2 = *(undefined2 *)(param_1 + 0x62);
    _DAT_1f8000c4 = 0;
    func_0x0011778c(param_1 + 0x2c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = func_0x00083f50((int)*(short *)(param_1 + 0x140));
  sVar1 = *(short *)(param_1 + 0x44);
  iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x140));
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar3 * sVar1 >> 4);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (iVar4 * *(short *)(param_1 + 0x44) >> 4);
  if (5999 < *(short *)(param_1 + 0x2e)) {
    if (26000 < *(short *)(param_1 + 0x2e)) {
      *(undefined2 *)(param_1 + 0x2e) = 26000;
    }
    uVar2 = 6000;
    if (5999 < *(short *)(param_1 + 0x36)) {
      if (*(short *)(param_1 + 0x36) < 0x6591) {
        return;
      }
      uVar2 = 26000;
    }
    *(undefined2 *)(param_1 + 0x36) = uVar2;
    return;
  }
  *(undefined2 *)(param_1 + 0x2e) = 6000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

