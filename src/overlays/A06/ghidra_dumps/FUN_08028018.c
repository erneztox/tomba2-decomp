// FUN_08028018

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08028018(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (DAT_800bf816 == '\0') {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    else {
      if (*(byte *)(param_1 + 3) < 2) {
        sVar2 = *(short *)(*(int *)(param_1 + 0x10) + 0x32);
        *(short *)(param_1 + 0x32) = sVar2;
        *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) = sVar2 + 0x23c0;
        *(short *)(param_1 + 0x32) =
             *(short *)(param_1 + 0x32) - *(short *)(*(int *)(param_1 + 0xc0) + 0x3a);
        *(short *)(param_1 + 0x56) = -_DAT_1f8000f2;
      }
      func_0x000517f8(param_1);
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077ebc(param_1);
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      func_0x00120e0c(param_1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

