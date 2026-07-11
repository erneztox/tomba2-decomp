// FUN_080182c4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080182c4(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = func_0x00024bd8(param_1,param_2,*(undefined4 *)(param_2 + 0xc0));
  if (iVar2 == 0) {
    return;
  }
  *(undefined1 *)(param_2 + 0x29) = 1;
  *(short *)(param_1 + 0x152) = *(short *)(param_2 + 0x80) + *(short *)(param_1 + 0x80) + -0xc;
  cVar1 = *(char *)(param_2 + 3);
  if (cVar1 == 'c') {
    DAT_1f800137 = 2;
    *(undefined1 *)(param_1 + 4) = 4;
    *(undefined1 *)(param_1 + 0x164) = 1;
    _DAT_1f800166 = 0;
    _DAT_1f800190 = 0;
  }
  else {
    if ((cVar1 != '\0') && (cVar1 != 'b')) {
      *(undefined1 *)(param_1 + 0x164) = 9;
      *(undefined1 *)(param_1 + 0x15c) = 0;
      _DAT_1f800080 = param_2;
      DAT_1f800182 = 0;
      return;
    }
    *(undefined1 *)(param_1 + 0x164) = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

