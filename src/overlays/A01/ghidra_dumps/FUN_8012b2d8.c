// FUN_8012b2d8

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_8012b2d8(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  copFunction(2,0x180001);
  iVar2 = getCopControlWord(2,0xf800);
  *param_3 = iVar2;
  if (-1 < *param_3) {
    uVar1 = getCopReg(2,0xe);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    copFunction(2,0x168002e);
    getCopReg(2,7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0xffffffff;
}

