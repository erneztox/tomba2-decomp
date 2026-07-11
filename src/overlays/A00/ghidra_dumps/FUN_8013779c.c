// FUN_8013779c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_8013779c(void)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined2 *unaff_s0;
  int unaff_s1;
  ushort unaff_s2;
  
  *(undefined2 *)(unaff_s1 + 0x36) = 0x58c;
  iVar2 = func_0x8004954c();
  if (iVar2 == 1) {
    unaff_s2 = unaff_s2 | 2;
    if ((unaff_s0[1] & 1) != 0) {
      iVar2 = FUN_8014077c();
      return iVar2;
    }
    *(undefined1 *)(unaff_s1 + 0x5f) = 3;
  }
  if (*(char *)(unaff_s1 + 0x29) == '\0') {
    uVar3 = func_0x80049250();
    uVar1 = _DAT_1f8001a4;
    if ((uVar3 & 1) == 0) {
      if (uVar3 == 0) goto LAB_80137898;
      unaff_s0[4] = _DAT_1f8001a6;
      unaff_s0[5] = uVar1;
    }
    else {
      unaff_s0[4] = _DAT_1f8001a6;
      unaff_s0[5] = uVar1;
      *(undefined1 *)(unaff_s1 + 0x29) = 1;
      func_0x80049674();
      *unaff_s0 = _DAT_1f8001a0;
      if ((unaff_s0[1] & 1) == 0) {
        *(short *)(unaff_s1 + 0x58) = _DAT_1f8001a2;
      }
      else {
        *(ushort *)(unaff_s1 + 0x58) = 0x1000U - _DAT_1f8001a2 & 0xfff;
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_80137898:
  func_0x80049760();
  *unaff_s0 = _DAT_1f8001a0;
  if ((unaff_s0[1] & 4) == 0) {
    if ((unaff_s0[1] & 1) != 0) {
      iVar2 = FUN_80140884();
      return iVar2;
    }
    *(undefined2 *)(unaff_s1 + 0x56) = _DAT_1f8001a0;
  }
  return (int)(short)unaff_s2;
}

