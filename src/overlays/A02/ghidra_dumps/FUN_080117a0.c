// FUN_080117a0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080117a0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
  sVar1 = *(short *)(param_1 + 0x44);
  iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar2 * sVar1 >> 4);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (iVar3 * *(short *)(param_1 + 0x44) >> 4);
  if (param_2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0010a7d8(param_1);
  return;
}

