// FUN_08016708

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08016708(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = func_0x0001f40c(param_1,param_2,1);
  if (-1 < iVar2) {
    if (*(char *)(param_2 + 0x5e) == '\0') {
      cVar1 = func_0x00077768((int)(((_DAT_1f80009c & 0xffff) + 0x800) * 0x10000) >> 0x10,
                              (int)*(short *)(param_2 + 0x60),1);
      *(char *)(param_2 + 0x5f) = cVar1 + '\x02';
      func_0x0001ff7c(param_1,param_2,iVar2,1);
    }
    else if ((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) {
      cVar1 = func_0x00077768((int)(((_DAT_1f80009c & 0xffff) + 0x800) * 0x10000) >> 0x10,
                              (int)*(short *)(param_2 + 0x60),1);
      *(char *)(param_2 + 0x5f) = cVar1 + '\x02';
      *(char *)(param_1 + 0x2b) = (char)((int)_DAT_1f80009c >> 4);
      func_0x00022d08(param_1,param_2,1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

