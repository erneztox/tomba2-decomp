// FUN_08014a80

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08014a80(undefined1 *param_1)

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
  if (param_1[0x2b] == '\0') {
    iVar2 = func_0x000495dc(param_1,0,0);
    bVar1 = 0 < iVar2;
  }
  if (!bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = 2;
  param_1[0x2b] = 2;
  func_0x00074590(0xe,0,0);
  func_0x00031470(2,param_1 + 0x2c,0,param_1 + 0x68);
  return 1;
}

