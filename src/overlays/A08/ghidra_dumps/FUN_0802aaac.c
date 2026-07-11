// FUN_0802aaac

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802aaac(int param_1)

{
  byte bVar1;
  
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x00077ebc();
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    _DAT_1f8000c0 = 0;
    _DAT_1f8000c2 = 0;
    _DAT_1f8000c4 = 0;
    func_0x0004bd64(param_1,1,_DAT_800e7f5c,0,&DAT_1f8000c0);
  }
  else if ((bVar1 < 2) && (bVar1 == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

