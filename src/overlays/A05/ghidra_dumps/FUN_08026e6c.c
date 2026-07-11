// FUN_08026e6c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08026e6c(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar3 = func_0x0007778c();
  if (iVar3 != 0) {
    func_0x0004190c(param_1);
  }
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 6) = 2;
    func_0x00040cdc(param_1,0x80140f7c,0x8013e40c);
    uVar2 = 0x1d;
    if ((((((int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f) & 1U) == 0) &&
         (uVar2 = 0x1c, DAT_800bfb1f == '\0')) && (uVar2 = 0x1b, (DAT_800bf881 & 2) == 0)) &&
       (uVar2 = 0x1b, (DAT_800bf881 & 1) == 0)) {
      uVar2 = 0x1a;
    }
    *(undefined1 *)(param_1 + 0x7a) = uVar2;
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0x2b) != '\x03') {
        return;
      }
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x00042354(1,1);
    }
  }
  else if (bVar1 == 2) {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      *(undefined1 *)(param_1 + 6) = 0;
      func_0x00042310();
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

