// FUN_08029268

/* WARNING: Control flow encountered bad instruction data */

void FUN_08029268(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    func_0x001210cc(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((DAT_800bf871 == '\x02') && (DAT_800bfa2b != '\0')) {
        *(undefined1 *)(param_1 + 5) = 2;
      }
      else {
        *(undefined1 *)(param_1 + 5) = 1;
      }
    }
  }
  else if (bVar1 == 2) {
    iVar2 = func_0x001214c0(param_1);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 5) = 1;
      DAT_800bfa2b = '\0';
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

