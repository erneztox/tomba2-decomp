// FUN_8011d754

void FUN_8011d754(void)

{
  undefined1 uVar1;
  int in_v0;
  int iVar2;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  undefined1 unaff_s4;
  undefined4 unaff_s5;
  undefined1 unaff_s6;
  
  if (in_v0 != 0) {
    *(undefined4 *)(in_v0 + 0x1c) = unaff_s5;
    *(undefined1 *)(in_v0 + 2) = unaff_s4;
    uVar1 = *(undefined1 *)(unaff_s1 + 3);
    *(undefined1 *)(in_v0 + 0x47) = unaff_s6;
    *(undefined1 *)(in_v0 + 3) = uVar1;
    *(undefined1 *)(in_v0 + 0x2a) = *(undefined1 *)(unaff_s1 + 0x2a);
    if ((*(char *)(unaff_s1 + 3) == '\0') || (*(char *)(unaff_s1 + 3) == '\x04')) {
      FUN_8012674c(1,4,0);
      return;
    }
    iVar2 = func_0x8007a980(1,3,1);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x1c) = 0x8012a454;
      *(undefined1 *)(iVar2 + 2) = 0x17;
      uVar1 = *(undefined1 *)(unaff_s1 + 3);
      *(undefined1 *)(iVar2 + 0x47) = 2;
      *(undefined1 *)(iVar2 + 3) = uVar1;
      *(undefined1 *)(iVar2 + 0x2a) = *(undefined1 *)(unaff_s1 + 0x2a);
      *(int *)(unaff_s1 + 0x10) = unaff_s3;
      *(int *)(unaff_s3 + 0x10) = unaff_s1;
      *(int *)(unaff_s1 + 0x14) = unaff_s2;
      *(int *)(unaff_s3 + 0x14) = in_v0;
      *(int *)(unaff_s2 + 0x10) = unaff_s1;
      *(int *)(in_v0 + 0x10) = unaff_s3;
      *(int *)(iVar2 + 0x10) = in_v0;
      *(int *)(iVar2 + 0x14) = unaff_s2;
      *(int *)(iVar2 + 0x3c) = unaff_s3;
      *(int *)(unaff_s2 + 0x14) = in_v0;
      *(int *)(unaff_s2 + 0x3c) = iVar2;
      *(int *)(in_v0 + 0x14) = unaff_s2;
      *(int *)(in_v0 + 0x3c) = iVar2;
    }
  }
  return;
}

