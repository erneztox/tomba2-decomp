// FUN_8010adf4

undefined4 FUN_8010adf4(void)

{
  int iVar1;
  undefined1 in_v1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int unaff_s3;
  
  *(undefined1 *)(unaff_s3 + 9) = in_v1;
  *(undefined1 *)(unaff_s3 + 0xd) = in_v1;
  *(undefined1 *)(unaff_s3 + 0xb) = 0;
  *(undefined2 *)(unaff_s3 + 0x54) = 0;
  *(undefined2 *)(unaff_s3 + 0x56) = 0;
  *(undefined2 *)(unaff_s3 + 0x58) = 0;
  *(undefined2 *)(unaff_s3 + 0xb8) = 0x1500;
  *(undefined2 *)(unaff_s3 + 0xba) = 0x1500;
  *(undefined2 *)(unaff_s3 + 0xbc) = 0x1500;
  func_0x8004b354();
  iVar4 = 0;
  if (*(char *)(unaff_s3 + 8) != '\0') {
    puVar3 = (undefined2 *)&DAT_80135b30;
    iVar2 = unaff_s3;
    do {
      iVar1 = func_0x8007aae8();
      *(int *)(iVar2 + 0xc0) = iVar1;
      *(undefined2 *)(iVar1 + 6) = *puVar3;
      **(undefined2 **)(iVar2 + 0xc0) = puVar3[1];
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 2) = puVar3[2];
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 4) = puVar3[3];
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 8) = 0;
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 10) = 0;
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 0xc) = 0;
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 0x38) = 0x1000;
      iVar1 = iVar4 + 0x16;
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 0x3a) = 0x1000;
      iVar4 = iVar4 + 1;
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 0x3c) = 0x1000;
      puVar3 = puVar3 + 4;
      func_0x80051b04(*(undefined4 *)(iVar2 + 0xc0),0xc,iVar1);
      iVar2 = iVar2 + 4;
    } while (iVar4 < (int)(uint)*(byte *)(unaff_s3 + 8));
  }
  return 1;
}

