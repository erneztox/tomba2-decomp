// FUN_080391b8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080391b8(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (DAT_800bf9c0 != -1) {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 99;
    iVar2 = func_0x0003116c(0x614,param_1 + 0x2c,0xffffffe0);
    *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
    *(int *)(param_1 + 0x10) = iVar2;
    func_0x00074590(0x2e,0xffffffe2,0x32);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((DAT_800bf926 == '\0') || (DAT_800bf9c0 != -1)) {
        *(undefined1 *)(param_1 + 5) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 5) = 99;
        iVar2 = func_0x0003116c(0x614,param_1 + 0x2c,0xffffffe0);
        *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
        *(int *)(param_1 + 0x10) = iVar2;
      }
    }
  }
  else if (bVar1 == 99) {
    if (*(char *)(param_1 + 6) == '\0') {
      if (0x8f < _DAT_800e7eb6 - 0x2810) {
        return;
      }
      if ((_DAT_800bf880 & 0x3000) != 0) {
        return;
      }
      func_0x00058304(&DAT_800e7e80,3);
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    else if (*(char *)(param_1 + 6) == '\x01') {
      if ((_DAT_800bf880 & 0x3000) == 0) {
        *(undefined1 *)(param_1 + 6) = 0;
      }
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

