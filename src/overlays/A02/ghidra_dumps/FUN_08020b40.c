// FUN_08020b40

/* WARNING: Control flow encountered bad instruction data */

void FUN_08020b40(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    sVar2 = func_0x00119f78(param_1);
    if (sVar2 != 0) {
      if (*(short *)(param_1 + 0x40) == 0) {
        *(undefined1 *)(param_1 + 5) = 0;
        DAT_800bf9fe = 0;
      }
      else {
        *(undefined1 *)(param_1 + 5) = 2;
        *(undefined1 *)(param_1 + 6) = 0;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_08020bfc:
    *(undefined1 *)(param_1 + 0x2b) = 0;
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x0011a10c(param_1);
      *(undefined1 *)(param_1 + 0x2b) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x2b) = 0;
    }
  }
  else if (bVar1 == 2) {
    func_0x00118b50(param_1);
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
  else {
    if (bVar1 == 3) {
      func_0x00118c54(param_1);
      goto LAB_08020bfc;
    }
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

