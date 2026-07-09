// FUN_8012982c

/* WARNING: Removing unreachable block (ram,0x80129864) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012982c(void)

{
  int in_v0;
  int iVar1;
  uint in_v1;
  undefined1 *unaff_s0;
  
  if ((in_v0 >> (in_v1 & 0x1f) & 1U) != 0) {
    unaff_s0[4] = 3;
    FUN_80132944();
    return;
  }
  if ((int)in_v1 < 5) {
    if (in_v1 != 0) {
      iVar1 = func_0x80051b70();
      if (iVar1 != 0) {
        return;
      }
      *(undefined2 *)(unaff_s0 + 0x62) = 0;
      *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x38) = 0xc00;
      *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) = 0x999;
      *(undefined2 *)(unaff_s0 + 100) = 0xc00;
      *(undefined2 *)(unaff_s0 + 0x66) = 0x999;
      *(undefined2 *)(unaff_s0 + 0x6a) = 1;
LAB_80129900:
      *unaff_s0 = 1;
      *(undefined2 *)(unaff_s0 + 0xbc) = 0x1000;
      *(undefined2 *)(unaff_s0 + 0xba) = 0x1000;
      *(undefined2 *)(unaff_s0 + 0xb8) = 0x1000;
      *(undefined2 *)(unaff_s0 + 0x40) = 0x14;
      *(undefined2 *)(unaff_s0 + 0x68) = 0;
      *(undefined2 *)(unaff_s0 + 0x6c) = 0;
      *(undefined2 *)(unaff_s0 + 0x76) = 0;
      *(undefined2 *)(unaff_s0 + 0x78) = 0;
      *(undefined2 *)(unaff_s0 + 0x7a) = 0;
      unaff_s0[0x29] = 0;
      unaff_s0[0x2b] = 0;
      unaff_s0[0x5e] = 0;
      unaff_s0[0x5f] = 0;
      unaff_s0[4] = unaff_s0[4] + '\x01';
      *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x3c) =
           *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x38);
      FUN_80133774();
      iVar1 = func_0x80048750();
      if ((iVar1 != 0) &&
         (*(undefined2 *)(unaff_s0 + 0x56) = _DAT_1f8001a0, 1 < (byte)unaff_s0[3] - 3)) {
        *(ushort *)(unaff_s0 + 0x58) = _DAT_1f8001a2 & 0xfff;
      }
      func_0x800518fc();
      return;
    }
  }
  else if (in_v1 != 5) goto LAB_80129900;
  iVar1 = func_0x80051b70();
  if (iVar1 != 0) {
    return;
  }
  *(undefined2 *)(unaff_s0 + 0x62) = 1;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x38) = 0x1000;
  iVar1 = *(int *)(unaff_s0 + 0xc0);
  *(undefined2 *)(iVar1 + 0x3a) = 0x1000;
  *(undefined2 *)(unaff_s0 + 100) = 0x1000;
  *(undefined2 *)(unaff_s0 + 0x66) = 0x1000;
  *(undefined2 *)(unaff_s0 + 0x6a) = 0;
  unaff_s0[4] = 0;
  unaff_s0[5] = 0;
  unaff_s0[0x5e] = 0;
                    /* WARNING: Subroutine does not return */
  *(undefined2 *)(iVar1 + 2) = 0x1000;
  FUN_801402b8();
}

