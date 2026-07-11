/**
 * @brief CD close/finalize: if param==2 calls FUN_8008b28c, else syncs with retry
 * @note Original: func_80089A3C at 0x80089A3C
 */
// CD_Close



undefined4 FUN_80089a3c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 2) {
    FUN_8008b28c();
    uVar1 = 1;
  }
  else {
    iVar2 = FUN_8008b2d8();
    uVar1 = 0;
    if ((iVar2 == 0) && (uVar1 = 1, param_1 == 1)) {
      iVar2 = FUN_8008b19c();
      uVar1 = 0;
      if (iVar2 == 0) {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}
