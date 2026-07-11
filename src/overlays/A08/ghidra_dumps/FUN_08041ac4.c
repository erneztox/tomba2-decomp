// FUN_08041ac4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08041ac4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_s0;
  undefined1 *unaff_s1;
  undefined1 unaff_s2;
  
  iVar1 = func_0x000519e0(param_1,param_2,*(undefined4 *)(unaff_s0 + 0x78),0x80141524);
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_s1 + 0x3c) = *(undefined4 *)(unaff_s0 + 0x38);
    func_0x00077c40();
    *unaff_s1 = 9;
    *(undefined2 *)(unaff_s1 + 0x80) = 0x50;
    *(undefined2 *)(unaff_s1 + 0x82) = 0xa0;
    *(undefined2 *)(unaff_s1 + 0x84) = 0xc0;
    *(undefined2 *)(unaff_s1 + 0x86) = 0x156;
    *(undefined2 *)(unaff_s1 + 0x56) = 0x800;
    *(undefined2 *)(unaff_s1 + 0x54) = 0;
    *(undefined2 *)(unaff_s1 + 0x58) = 0;
    unaff_s1[0x2b] = 0;
    unaff_s1[0x29] = 0;
    unaff_s1[4] = unaff_s1[4] + '\x01';
    if (DAT_800bf922 == -1) {
      unaff_s1[5] = 3;
      *(undefined2 *)(unaff_s1 + 0x32) = 0xf0e2;
      *(undefined2 *)(unaff_s1 + 0x36) = 0x1602;
    }
    else if (DAT_800bf922 == '\0') {
      unaff_s1[5] = 0;
    }
    else if ((((_DAT_800bf89e & 0x200) == 0) && ((DAT_800bf881 & 4) == 0)) && (DAT_800bfb04 != '\0')
            ) {
      unaff_s1[5] = 2;
    }
    else {
      unaff_s1[5] = unaff_s2;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

