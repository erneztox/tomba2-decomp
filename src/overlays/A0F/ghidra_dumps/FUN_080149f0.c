// FUN_080149f0

/* WARNING: Control flow encountered bad instruction data */

bool FUN_080149f0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = func_0x0004766c();
  if (iVar2 < 0) {
    func_0x00049760(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00049760(param_1);
  bVar1 = false;
  if ((param_3 == 0) && ((param_2 != 0 || (bVar1 = false, *(char *)(param_1 + 0x2b) == '\0')))) {
    iVar2 = func_0x000495dc(param_1,0,0);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}

