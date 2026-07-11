// FUN_0801f84c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0801f84c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84);
  *(undefined1 *)(param_1 + 0x5f) = 0;
  if (*(char *)(param_1 + 0x46) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = (int)((*(ushort *)(param_1 + 0x60) + 0x800) * 0x10000) >> 0x10;
  iVar1 = func_0x00045cac(param_1,0x3c,iVar3 * 0x10000 >> 0x10,iVar2);
  if ((iVar1 == 0) &&
     (iVar3 = func_0x00045cac(param_1,0x3c,(int)(short)-((short)iVar3 + 0x28),iVar2), iVar3 == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 0x5f) = 1;
  return 1;
}

