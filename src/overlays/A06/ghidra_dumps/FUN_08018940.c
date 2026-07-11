// FUN_08018940

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018940(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*param_1 != '\x06') && ((*(ushort *)(param_1 + 0x17e) & 0x200) == 0)) {
    if (*(char *)(param_2 + 0x5e) == '\0') {
      iVar2 = func_0x00022f04();
      iVar1 = _DAT_1f80009c;
      if (((iVar2 != 0) && (param_1[4] == '\x01')) && (param_1[5] != '\x13')) {
        param_1[5] = '\x13';
        param_1[6] = '\0';
        param_1[7] = '\0';
        param_1[0x2b] = (char)(iVar1 >> 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      func_0x00020364(param_1,param_2,2);
    }
  }
  return;
}

