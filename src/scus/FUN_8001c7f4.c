
int FUN_8001c7f4(void)

{
  int in_v0;
  int iVar1;
  int in_v1;
  int unaff_s1;
  int *unaff_s2;
  int unaff_s3;
  
  if (in_v1 + 0x3c < in_v0) {
    FUN_8001ba64(1);
    iVar1 = FUN_8001c020();
    return iVar1;
  }
  iVar1 = *(int *)(unaff_s1 + -8);
  if ((unaff_s3 == 0) && (((*unaff_s2 != 0 && (iVar1 == 0)) || (0 < iVar1)))) {
                    /* WARNING: Subroutine does not return */
    FUN_80017e4c(0xffffffff);
  }
  FUN_80018ff0(1);
  if ((*unaff_s2 != 0) && (iVar1 == 0)) {
    iVar1 = 1;
  }
  return iVar1;
}

