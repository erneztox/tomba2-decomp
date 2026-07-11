// FUN_0802cea4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0802cea4(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
  sVar1 = *(short *)(param_1 + 0x44);
  iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar2 * sVar1 >> 4);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (iVar3 * *(short *)(param_1 + 0x44) >> 4);
  if (param_2 != 0) {
    iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
    sVar1 = *(short *)(param_1 + 0x80);
    iVar3 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
    _DAT_1f8000c0 = (undefined2)(iVar3 * *(short *)(param_1 + 0x80) >> 0xc);
    _DAT_1f8000c4 = (undefined2)(-iVar2 * (int)sVar1 >> 0xc);
    _DAT_1f8000c2 = *(short *)(param_1 + 0x86) - *(short *)(param_1 + 0x84);
    func_0x0012ee08(param_1 + 0x2c,&DAT_1f8000c0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

