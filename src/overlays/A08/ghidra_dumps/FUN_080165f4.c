// FUN_080165f4

/* WARNING: Control flow encountered bad instruction data */

void FUN_080165f4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x00022f04();
  if (iVar1 != 0) {
    uVar2 = func_0x0001e860(param_1,param_2,0,0x400);
    if ((uVar2 & 0x10) != 0) {
      DAT_1f800182 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((uVar2 & 0x80) == 0) {
      DAT_1f800182 = 0;
    }
    *(byte *)(param_2 + 0x2b) = (*(byte *)(param_1 + 0x46) & 1) + 2;
  }
  return;
}

