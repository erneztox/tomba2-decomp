// FUN_08046470

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08046470(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  int local_10;
  undefined4 local_c;
  
  if (**(char **)(param_1 + 0x10) != '\0') {
    func_0x00079374(100,8,0,*(undefined4 *)(param_1 + 0x10),4);
    func_0x0005019c(0x8010a4c4,0x40,0,4);
  }
  pcVar3 = *(char **)(param_1 + 0xc);
  iVar2 = 0;
  if (*pcVar3 != '\0') {
    local_c = 1;
    local_10 = 0;
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
      if (cVar1 == '\n') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    if (0 < iVar2) {
      local_10 = iVar2;
    }
    local_16 = 0x52;
    iVar2 = local_10 * -4 + 0xa0;
    local_18 = (undefined2)iVar2;
    local_14 = (undefined2)(local_10 << 3);
    local_12 = 0x10;
    func_0x00079374(iVar2 * 0x10000 >> 0x10,0x52,0,_DAT_800bf4a4,4);
    func_0x0005019c(&local_18,0x40,0,4);
  }
  return;
}

