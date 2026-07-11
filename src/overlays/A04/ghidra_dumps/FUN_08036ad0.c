// FUN_08036ad0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08036bac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08036ad0(void)

{
  byte bVar1;
  int iVar2;
  int unaff_s0;
  
  bVar1 = *(byte *)(unaff_s0 + 4);
  if (bVar1 == 1) {
    func_0x0012f788();
    if (*(char *)(unaff_s0 + 1) != '\0') {
      func_0x000518fc();
    }
    *(undefined1 *)(unaff_s0 + 0x2b) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar2 = func_0x000519e0();
    if (iVar2 == 0) {
      *(undefined4 *)(unaff_s0 + 0x3c) = _DAT_800ecf90;
      func_0x00040cdc();
      return;
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624();
  }
  return;
}

