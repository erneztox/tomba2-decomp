// FUN_0803930c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0803930c(int param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
  iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
  _DAT_1f8001be = *(short *)(param_1 + 0x32) + param_3;
  _DAT_1f8001c0 = *(short *)(param_1 + 0x36) + (short)(-iVar1 * (int)param_2 >> 0xc);
  _DAT_1f8001bc = *(short *)(param_1 + 0x2e) + (short)(iVar2 * param_2 >> 0xc);
  iVar1 = func_0x000498c8(param_1);
  if ((iVar1 != 0) && (iVar1 = func_0x00045724(), iVar1 != 0)) {
    if ((_DAT_1f8001a6 & 0xf00) != 0x700) {
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + _DAT_1f8001c4;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

