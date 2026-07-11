// FUN_08019128

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019128(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  func_0x00055284();
  func_0x00056b48(param_1,1);
  func_0x0010ff9c(param_1);
  iVar2 = (int)*(short *)(param_1 + 0x182);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar2;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar2;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * iVar2;
  if ((*(char *)(param_1 + 0x16b) == '\0') && (*(char *)(param_1 + 0x61) == '\0')) {
    func_0x00054650(param_1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) & 0xfb;
  func_0x0010fb44(param_1,param_2);
  func_0x00055d5c(param_1);
  *(undefined2 *)(param_1 + 0x16c) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  iVar2 = func_0x0012de84(param_1,(int)*(short *)(param_1 + 0x32));
  uVar1 = _DAT_1f8001a8;
  if ((iVar2 != 0) && (_DAT_1f8001a4 + -500 <= (int)_DAT_1f80019e)) {
    _DAT_1f80019e = _DAT_1f8001a4;
    *(undefined2 *)(param_1 + 0x6a) = _DAT_1f8001a6;
    *(undefined2 *)(param_1 + 0x16c) = uVar1;
    func_0x00049674(param_1);
    *(undefined2 *)(param_1 + 0x142) = _DAT_1f8001a2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00056d44(param_1,0);
  return;
}

