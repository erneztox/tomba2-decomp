// FUN_0804279c

/* WARNING: Control flow encountered bad instruction data */

int FUN_0804279c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_3 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = (int)(((uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >>
          0x10;
  iVar2 = (int)(((uint)*(ushort *)(param_2 + 10) - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >>
          0x10;
  iVar1 = func_0x00084080(iVar1 * iVar1 + iVar2 * iVar2);
  iVar2 = iVar1 >> 8;
  if (0x7ff < iVar1) {
    iVar2 = 8;
  }
  return iVar2;
}

