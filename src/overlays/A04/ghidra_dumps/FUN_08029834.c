// FUN_08029834

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08029984) */

void FUN_08029834(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (DAT_800bf923 == '\0') {
          *(undefined1 *)(param_1 + 6) = 1;
        }
        else {
          *(undefined1 *)(param_1 + 6) = 2;
        }
      }
    }
    else if (bVar1 == 2) {
      iVar2 = func_0x0012259c(param_1);
      if (iVar2 == 0) {
        return;
      }
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        iVar2 = func_0x0002300c(&DAT_800e7e80,param_1,*(short *)(param_1 + 0x80) * 2 + 8);
        if ((iVar2 == 0) || (iVar2 = func_0x0005308c(), iVar2 == 0)) {
          return;
        }
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
        func_0x00042354(1,1);
      }
    }
    else if (bVar1 == 2) {
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) != -1) {
        return;
      }
      func_0x00042310();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 7) = 2;
  func_0x00040cdc(param_1,0,0x80141464);
  return;
}

