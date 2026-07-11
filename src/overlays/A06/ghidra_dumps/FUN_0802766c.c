// FUN_0802766c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802766c(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 5) = 2;
    *(undefined1 *)(param_1 + 0x29) = 1;
    DAT_800bf81f = ('\x01' - *(char *)(param_1 + 0x5f)) * '\x10';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if ((DAT_800e7eaa == *(char *)(param_1 + 0x2a)) && (DAT_800e7e85 == '\0')) {
        *(undefined1 *)(param_1 + 5) = 1;
        DAT_1f800137 = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_08027758;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      if (DAT_800e7eaa != *(char *)(param_1 + 0x2a)) {
        *(undefined1 *)(param_1 + 5) = 0;
      }
      goto LAB_08027758;
    }
  }
  iVar2 = func_0x00073328(param_1);
  if (iVar2 != 0) {
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_08027758:
  func_0x000735f4(param_1,0x5d);
  return;
}

