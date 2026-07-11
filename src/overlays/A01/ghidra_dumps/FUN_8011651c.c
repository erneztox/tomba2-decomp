// FUN_8011651c

/* WARNING: Control flow encountered bad instruction data */

void FUN_8011651c(int param_1)

{
  byte bVar1;
  int iVar2;
  int unaff_s0;
  int unaff_s2;
  undefined1 *unaff_s3;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x70) != -1) goto LAB_801167f4;
    func_0x80040d68(param_1,0x80136da0);
    *(undefined1 *)(param_1 + 0x70) = 2;
    *(undefined1 *)(param_1 + 6) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_8011f790;
    if (DAT_800bf9fa != '\x19') goto LAB_801167f4;
    func_0x80040d68(param_1,0x80136ce0);
    *(undefined1 *)(param_1 + 0x70) = 2;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        FUN_8011f78c(param_1);
        return;
      }
      if (*(char *)(param_1 + 0x70) == -1) {
        *(undefined1 *)(param_1 + 4) = 3;
      }
LAB_801167f4:
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x80077e7c(param_1);
      if (*(char *)(param_1 + 1) != '\0') {
        func_0x80041098(param_1);
        func_0x8004190c(param_1);
      }
      return;
    }
    unaff_s0 = *(int *)(param_1 + 0x14);
    if (unaff_s0 == 0) goto LAB_801167f4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 6)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      iVar2 = func_0x80083e80((int)*(short *)(unaff_s0 + 0x58));
      *(short *)(unaff_s0 + 0x2e) = *(short *)(unaff_s0 + 0x48) + (short)(iVar2 * 0xc0 >> 0xc);
      iVar2 = func_0x80083f50((int)*(short *)(unaff_s0 + 0x58));
      *(short *)(unaff_s0 + 0x32) =
           *(short *)(unaff_s0 + 0x4a) - ((short)(iVar2 * 0xc0 >> 0xc) + -0xc0);
    }
  }
  func_0x80051d20();
LAB_8011f790:
  *(undefined2 *)(unaff_s3 + 0x2e) = *(undefined2 *)(param_1 + 0xc0);
  *(undefined2 *)(unaff_s3 + 0x32) = *(undefined2 *)(unaff_s0 + 2);
  *(undefined2 *)(unaff_s3 + 0x36) = *(undefined2 *)(unaff_s0 + 4);
  *(undefined2 *)(unaff_s3 + 0x56) = *(undefined2 *)(unaff_s2 + 0x56);
  func_0x800517f8();
  if (((*(short *)(unaff_s3 + 0xe) == 5) && ((DAT_800bfa06 & 1) == 0)) &&
     (iVar2 = func_0x80072ddc(), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x801236cc;
    *(undefined1 *)(iVar2 + 3) = 0;
    *unaff_s3 = 3;
  }
  return;
}

