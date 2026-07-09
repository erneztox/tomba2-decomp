// FUN_80113d78

/* WARNING: Removing unreachable block (ram,0x80125d64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80113d78(int param_1)

{
  int iVar1;
  int unaff_s1;
  
  if (*(char *)(param_1 + 7) == '\0') {
    if ((*(char *)(param_1 + 1) != '\0') &&
       (iVar1 = func_0x800519e0(param_1,0xf,_DAT_800ecf94,0x8014bfb4), iVar1 == 0)) {
      FUN_8011cda4();
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 7) != '\x01') {
      *(undefined1 *)(unaff_s1 + 0x5f) = 1;
      *(undefined2 *)(unaff_s1 + 0x78) = 0x8002;
      if (*(short *)(unaff_s1 + 0x48) < 1) {
        if (*(short *)(unaff_s1 + 0x48) < 0) {
          *(undefined2 *)(unaff_s1 + 0x4e) = 0x80;
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
      FUN_8012ed28();
      return;
    }
    if (*(char *)(param_1 + 1) == '\0') {
      func_0x8007addc(param_1);
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + -1;
    }
  }
  return;
}

