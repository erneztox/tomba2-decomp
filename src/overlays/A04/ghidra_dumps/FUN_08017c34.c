// FUN_08017c34

/* WARNING: Control flow encountered bad instruction data */

void FUN_08017c34(undefined4 param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x00022f04();
  if (iVar1 != 0) {
    if ((*param_2 & 4) != 0) {
      func_0x0001e860(param_1,param_2,0,0);
      param_2[0x2b] = 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = func_0x0001dc9c(param_1,param_2,0,0);
    if ((uVar2 & 0x80) == 0) {
      DAT_1f800182 = 0;
    }
  }
  return;
}

