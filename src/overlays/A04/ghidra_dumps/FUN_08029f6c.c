// FUN_08029f6c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08029f6c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 7) = 2;
    uVar3 = func_0x00040cdc(param_1,0,0x80141464);
    return uVar3;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar2 = func_0x0002300c(&DAT_800e7e80,param_1,*(short *)(param_1 + 0x80) * 2 + 8);
      if ((iVar2 == 0) || (iVar2 = func_0x0005308c(), iVar2 == 0)) {
        return 0;
      }
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      func_0x00042354(1,1);
    }
  }
  else if (bVar1 == 2) {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
      return 0;
    }
    func_0x00042310();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

