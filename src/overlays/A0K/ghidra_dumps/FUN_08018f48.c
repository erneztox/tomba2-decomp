// FUN_08018f48

/* WARNING: Control flow encountered bad instruction data */

void FUN_08018f48(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (DAT_800bf80f != '\0') {
      *(undefined1 *)(param_1 + 5) = 2;
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 3;
    }
  }
  else if ((bVar1 < 2) && (bVar1 == 0)) {
    iVar2 = func_0x0007e038(0x33,3);
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar2 != 0) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      DAT_800bf841 = 0;
      func_0x00074bf8(0xc);
      func_0x0004fb20();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  func_0x000517f8(param_1);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

