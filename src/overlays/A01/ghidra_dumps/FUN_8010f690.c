// FUN_8010f690

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8010f690(undefined1 param_1)

{
  short sVar1;
  int in_v0;
  int iVar2;
  int unaff_s0;
  int unaff_s1;
  
  *(char *)(unaff_s1 + 5) = (char)in_v0;
  if (*(short *)(in_v0 + 0x162) < *(short *)(unaff_s1 + 0x32)) {
    *(undefined1 *)(unaff_s1 + 5) = param_1;
  }
  else {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(unaff_s1 + 6)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_s0 = unaff_s1 + 0x60;
    FUN_80116620();
    func_0x8004766c();
    func_0x80049760();
    *(undefined2 *)(unaff_s1 + 100) = _DAT_1f8001a0;
    iVar2 = func_0x800493e8();
    if ((iVar2 != 0) || (iVar2 = func_0x80049250(), iVar2 != 0)) {
      *(undefined1 *)(unaff_s1 + 5) = 0;
      *(undefined1 *)(unaff_s1 + 6) = 0;
    }
    *(undefined1 *)(unaff_s1 + 0x29) = 0;
    sVar1 = FUN_80117188();
    if (sVar1 == 0) {
      return;
    }
    *(char *)(unaff_s1 + 5) = (char)sVar1;
  }
  FUN_801208b4();
  if ((*(char *)(unaff_s1 + 3) == '\0') && (unaff_s0 != 0)) {
    *(undefined1 *)(unaff_s1 + 5) = 0;
    *(undefined1 *)(unaff_s1 + 6) = 0;
    *(undefined1 *)(unaff_s1 + 7) = 0;
  }
  return;
}

