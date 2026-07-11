// FUN_08021088

/* WARNING: Control flow encountered bad instruction data */

void FUN_08021088(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    func_0x00117aac(param_1);
  }
  else if ((bVar1 < 2) && (bVar1 == 0)) {
    func_0x001178a4();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0007778c(param_1);
  func_0x000517f8(param_1);
  return;
}

