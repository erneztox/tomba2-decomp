// FUN_0801f210

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0801f210(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xbe) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = (int)((*(ushort *)(param_1 + 0x60) + 0x800) * 0x10000) >> 0x10;
  iVar1 = func_0x00045cac(param_1,0x3c,0xffffffe2,iVar2);
  if ((iVar1 == 0) && (iVar1 = func_0x00045cac(param_1,0x3c,0x82,iVar2), iVar1 == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 0x5f) = 1;
  return 1;
}

