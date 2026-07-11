// FUN_0801907c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0801907c(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x00022f04();
  if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = func_0x0001dc9c(param_1,param_2,0,2);
  if ((uVar2 & 0x80) != 0) {
    *(undefined1 *)(param_1 + 0x2b) = 2;
  }
  DAT_1f800182 = 0;
  return 1;
}

