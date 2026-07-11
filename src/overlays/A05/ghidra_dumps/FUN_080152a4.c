// FUN_080152a4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080152a4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00024338();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x147) == '\0') {
      if ((*(byte *)(param_2 + 0x5f) != 0) && ((*(byte *)(param_2 + 0x5f) & 1) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if ((*(byte *)(param_2 + 0x5f) != 0) && ((*(byte *)(param_2 + 0x5f) & 1) == 0)) {
      return 0;
    }
    iVar1 = 0x28;
    if (*(short *)(param_1 + 0x17e) < 0) {
      iVar1 = 0x14;
    }
    if (((int)*(short *)(param_1 + 0x156) <= iVar1 - *(short *)(param_2 + 0x84)) &&
       ((*(byte *)(param_2 + 0x29) & 1) == 0)) {
      *(undefined1 *)(param_1 + 0x15c) = 2;
      *(short *)(param_1 + 0x156) = (short)iVar1 - *(short *)(param_2 + 0x84);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x15c) = 1;
    *(undefined1 *)(param_1 + 0x164) = 10;
    _DAT_1f800080 = param_2;
    if (*(char *)(param_1 + 0x147) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_2 + 0x58);
    DAT_1f800182 = 0;
    uVar2 = 1;
  }
  return uVar2;
}

