// FUN_0801904c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801904c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (DAT_800bf80f != '\0') {
      *(undefined1 *)(param_1 + 5) = 2;
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 3;
    }
  }
  else if ((bVar1 < 2) && (bVar1 == 0)) {
    uVar3 = 0x34;
    if (_DAT_800bf854 != 0) {
      uVar3 = 0x35;
    }
    iVar2 = func_0x0007e038(uVar3,3);
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar2 != 0) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      DAT_800bf841 = 0;
      func_0x00074590(0x84,0,0);
      func_0x0004fb20();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  func_0x000517f8(param_1);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

