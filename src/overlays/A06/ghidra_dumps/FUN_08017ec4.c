// FUN_08017ec4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08017ec4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_2;
  if (0 < (int)(*(byte *)(param_2 + 8) - 1)) {
    do {
      iVar1 = func_0x00024bd8(param_1,param_2,*(undefined4 *)(iVar3 + 0xc0));
      iVar2 = iVar2 + 1;
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x164) = 5;
        *(undefined1 *)(param_1 + 0x15c) = 1;
        _DAT_1f800080 = param_2;
        DAT_1f800182 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar3 = iVar3 + 4;
    } while (iVar2 < (int)(*(byte *)(param_2 + 8) - 1));
  }
  return 0;
}

