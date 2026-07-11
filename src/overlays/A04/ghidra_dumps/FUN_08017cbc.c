// FUN_08017cbc

/* WARNING: Control flow encountered bad instruction data */

void FUN_08017cbc(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x00022f04();
  if (iVar1 != 0) {
    if (*(char *)(param_2 + 0x5e) != '\0') {
      func_0x0001e860(param_1,param_2,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0001dc9c(param_1,param_2,0,5);
    DAT_1f800182 = 0;
  }
  return;
}

