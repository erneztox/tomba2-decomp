// FUN_8011cb5c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8011cb5c(undefined4 param_1,uint param_2)

{
  undefined1 in_v0;
  undefined2 uVar1;
  int iVar2;
  int unaff_s0;
  int unaff_s1;
  short sStack00000016;
  short sStack0000001a;
  
  *(undefined1 *)(unaff_s0 + 4) = in_v0;
  iVar2 = FUN_80130ac4();
  if (iVar2 != 0) {
    *(char *)(unaff_s1 + 1) = (char)unaff_s0;
    func_0x80077ebc();
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(unaff_s1 + 5)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_80131134();
  iVar2 = unaff_s1;
  FUN_801316cc();
  if (DAT_800bf9d2 == '\0') {
    if ((*(ushort *)(unaff_s1 + 0x78) & 1) == 0) {
      *(undefined2 *)(unaff_s1 + 0x78) = 5;
      sStack00000016 = *(short *)(*(int *)(unaff_s0 + 0xd4) + 0x30) + -0x32;
      sStack0000001a =
           *(short *)(*(int *)(unaff_s0 + (*(byte *)(unaff_s0 + 9) - 1) * 4 + 0xc0) + 0x34) + -0x32;
      func_0x8003116c();
      FUN_80140e1c();
      return;
    }
  }
  else if (DAT_800bf9d2 == -1) {
    if ((*(ushort *)(unaff_s1 + 0x78) & 1) == 0) {
      *(undefined2 *)(unaff_s1 + 0x78) = 0x8005;
      *(undefined1 *)(unaff_s1 + 5) = 4;
      *(undefined1 *)(unaff_s1 + 6) = 0;
      if (iVar2 != 0xff) {
        if (((*(short *)(unaff_s0 + 0x42) == iVar2) && (*(char *)(unaff_s0 + 1) != '\0')) &&
           ((param_2 & 0xffff) == 0)) {
          func_0x8004ed94(0x23,0x41);
        }
        if (*(char *)(unaff_s0 + 3) != '\x03') {
          func_0x8009a450();
          return;
        }
      }
      *(undefined2 *)(*(int *)(unaff_s0 + (*(byte *)(unaff_s0 + 9) - 1) * 4 + 0xc0) + 0x14) = 0xffe8
      ;
      *(undefined1 *)(unaff_s0 + 0x46) = 0xff;
      if ((*(char *)(unaff_s0 + 1) != '\0') && (iVar2 = func_0x80072ddc(), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x1c) = 0x801234a4;
        *(undefined2 *)(iVar2 + 0x48) =
             *(undefined2 *)(*(int *)(unaff_s0 + (*(byte *)(unaff_s0 + 9) - 1) * 4 + 0xc0) + 0x2c);
        *(short *)(iVar2 + 0x4a) =
             *(short *)(*(int *)(unaff_s0 + (*(byte *)(unaff_s0 + 9) - 1) * 4 + 0xc0) + 0x30) +
             -0x8c;
        *(undefined2 *)(iVar2 + 0x4c) =
             *(undefined2 *)(*(int *)(unaff_s0 + (*(byte *)(unaff_s0 + 9) - 1) * 4 + 0xc0) + 0x34);
      }
      return;
    }
  }
  else if ((*(ushort *)(unaff_s1 + 0x78) & 1) != 0) {
    uVar1 = 0x8002;
    if ((*(ushort *)(unaff_s1 + 0x78) & 0x8000) == 0) {
      uVar1 = 2;
    }
    *(undefined2 *)(unaff_s1 + 0x78) = uVar1;
    if (0 < *(short *)(unaff_s1 + 0x48)) {
      FUN_8012ed28();
      return;
    }
    if (*(short *)(unaff_s1 + 0x48) < 0) {
      *(undefined2 *)(unaff_s1 + 0x4e) = 0x80;
    }
  }
  if (*(char *)(unaff_s1 + 3) == '\0') {
    func_0x80146348();
  }
  if (*(char *)(unaff_s1 + 1) != '\0') {
    FUN_8012e8a8();
  }
  *(undefined1 *)(unaff_s1 + 0x2b) = 0;
  FUN_8012ed70();
  return;
}

