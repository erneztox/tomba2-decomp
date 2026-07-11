// FUN_8013c7cc

void FUN_8013c7cc(undefined1 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_s3;
  
  *(undefined1 *)(unaff_s3 + 5) = param_1;
  *(undefined4 *)(unaff_s3 + 0x48) = 0;
  *(undefined4 *)(unaff_s3 + 0xc) = 0;
  *(undefined4 *)(unaff_s3 + 0x10) = 0;
  *(undefined4 *)(unaff_s3 + 0x14) = 0;
  *(undefined4 *)(unaff_s3 + 0x18) = 0;
  *(undefined4 *)(unaff_s3 + 0x1c) = 0;
  *(undefined2 *)(unaff_s3 + 8) = 0;
  *(undefined1 *)(unaff_s3 + 5) = 2;
  if (DAT_800e7eaa < 0xc) {
    *(char *)(unaff_s3 + 5) = *(char *)(unaff_s3 + 5) + '\x01';
    iVar2 = 0;
    if (0xb < DAT_800e7eaa) {
      *(undefined1 *)(unaff_s3 + 5) = 1;
      FUN_801458c0();
      return;
    }
    iVar3 = -0x7feb40a0;
    iVar4 = unaff_s3;
    do {
      if (((*(uint *)(iVar4 + 0xc) & 3) == 0) && (DAT_800e7eaa < 0xc)) {
        uVar1 = *(undefined1 *)(iVar3 + 8);
        iVar2 = func_0x80072ddc(0,3,2,3);
        if (iVar2 == 0) {
          return;
        }
        *(undefined4 *)(iVar2 + 0x1c) = 0x80145230;
        *(undefined1 *)(iVar2 + 3) = uVar1;
        *(undefined4 *)(iVar2 + 0x10) = 0;
        *(int *)(iVar2 + 0x14) = unaff_s3;
        if (iVar2 == 0) {
          return;
        }
        *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(iVar3 + 2);
        *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(iVar3 + 4);
        *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(iVar3 + 6);
        *(undefined2 *)(iVar2 + 0x56) = *(undefined2 *)(iVar3 + 10);
        *(ushort *)(iVar2 + 0x62) = *(ushort *)(iVar2 + 0x62) | 2;
        *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0xc) | 1;
        FUN_801458c0();
        return;
      }
      iVar4 = iVar4 + 4;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < 5);
  }
  return;
}

