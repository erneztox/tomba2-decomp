// FUN_8011dba4

void FUN_8011dba4(void)

{
  int iVar1;
  int iVar2;
  undefined2 *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  iVar2 = unaff_s3;
  do {
    iVar1 = func_0x8007aae8();
    *(int *)(iVar2 + 0xc0) = iVar1;
    *(undefined2 *)(iVar1 + 6) = *unaff_s1;
    **(undefined2 **)(iVar2 + 0xc0) = unaff_s1[1];
    *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 2) = unaff_s1[2];
    *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 4) = unaff_s1[3];
    *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 8) = 0;
    *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 10) = 0;
    *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 0xc) = 0;
    func_0x80051b04(*(undefined4 *)(iVar2 + 0xc0),0xc,(int)(short)unaff_s1[4]);
    if (unaff_s2 == 2) {
      *(undefined1 *)(*(int *)(unaff_s3 + 200) + 0x3f) = 0x40;
      FUN_80126be4();
      return;
    }
    *(undefined1 *)(*(int *)(iVar2 + 0xc0) + 0x3f) = 0;
    unaff_s1 = unaff_s1 + 5;
    unaff_s2 = unaff_s2 + 1;
    iVar2 = iVar2 + 4;
  } while (unaff_s2 < (int)(uint)*(byte *)(unaff_s3 + 8));
  *(undefined2 *)(unaff_s3 + 0x60) = 0;
  return;
}

