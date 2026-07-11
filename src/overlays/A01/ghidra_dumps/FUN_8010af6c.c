// FUN_8010af6c

void FUN_8010af6c(void)

{
  int iVar1;
  int in_v1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int unaff_s3;
  int unaff_s4;
  
  *(undefined1 *)(unaff_s3 + 9) = 2;
  *(undefined1 *)(unaff_s3 + 0xd) = 4;
  *(undefined1 *)(unaff_s3 + 0xb) = 0;
  *(undefined2 *)(unaff_s3 + 0x54) = 0;
  *(undefined2 *)(unaff_s3 + 0x56) = 0;
  *(undefined2 *)(unaff_s3 + 0x58) = 0;
  if (in_v1 == 1) {
    unaff_s4 = 0x1c;
  }
  puVar2 = *(undefined2 **)((*(byte *)(unaff_s3 + 3) - 1) * 4 + -0x7feca4a0);
  iVar4 = 0;
  iVar3 = unaff_s3;
  if (*(char *)(unaff_s3 + 8) != '\0') {
    do {
      iVar1 = func_0x8007aae8();
      *(int *)(iVar3 + 0xc0) = iVar1;
      *(undefined2 *)(iVar1 + 6) = *puVar2;
      **(undefined2 **)(iVar3 + 0xc0) = puVar2[1];
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 2) = puVar2[2];
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 4) = puVar2[3];
      iVar1 = unaff_s4 + iVar4;
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 8) = 0;
      iVar4 = iVar4 + 1;
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 10) = 0;
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 0xc) = 0;
      puVar2 = puVar2 + 4;
      func_0x80051b04(*(undefined4 *)(iVar3 + 0xc0),0xc,iVar1);
      iVar3 = iVar3 + 4;
    } while (iVar4 < (int)(uint)*(byte *)(unaff_s3 + 8));
  }
  *(undefined1 *)(*(int *)(unaff_s3 + 0xc4) + 0x3f) = 0xf0;
  return;
}

