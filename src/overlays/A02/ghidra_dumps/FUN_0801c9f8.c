// FUN_0801c9f8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801c9f8(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  if (*(char *)(param_1 + 100) != '\x01') {
    iVar1 = func_0x00083e80((int)*(short *)(param_1 + 10));
    param_2 = param_2 + ((uint)(iVar1 * ((int)_DAT_1f8000ee + *(int *)(param_1 + 0x58))) >> 0xc);
    uVar2 = (undefined2)param_2;
    *(undefined2 *)(param_1 + 0xe) = uVar2;
    param_2 = (_DAT_1f8000d4 >> 0x10) - param_2;
    if (0x14 < (param_2 + 10U & 0xffff)) {
      _DAT_1f8000d4 = _DAT_1f8000d4 - (param_2 * 0x10000 >> 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_1f8000d4 = CONCAT22(uVar2,_DAT_1f8000d4);
    *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 2;
    return;
  }
  if ((DAT_800bf816 != '\0') && (DAT_800bf817 != '\a')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00083e80((int)*(short *)(param_1 + 10));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

