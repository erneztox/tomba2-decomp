// FUN_080181f0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080181f0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_2;
  if (0 < (int)(*(byte *)(param_2 + 8) - 1)) {
    do {
      iVar1 = func_0x00022e04(param_1,param_2,*(undefined4 *)(iVar2 + 0xc0));
      iVar3 = iVar3 + 1;
      if (iVar1 != 0) {
        func_0x0001e860(param_1,param_2,*(undefined4 *)(iVar2 + 0xc0),0);
        DAT_1f800182 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar2 = iVar2 + 4;
    } while (iVar3 < (int)(*(byte *)(param_2 + 8) - 1));
  }
  return;
}

