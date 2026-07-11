// FUN_80101d6c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80101d6c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 extraout_v1;
  undefined1 uVar4;
  int iVar5;
  undefined2 *puVar6;
  int unaff_s3;
  
  func_0x80054198(&DAT_800e7e80);
  DAT_800e7e85 = 0x24;
  DAT_800e7e86 = 0;
  DAT_800bf816 = 1;
  if (DAT_800bf817 == 2) {
    iVar2 = func_0x800782f0(DAT_800bf870,3);
    uVar1 = 0x16;
    uVar4 = extraout_v1;
  }
  else {
    if (2 < DAT_800bf817) {
      if (DAT_800bf817 != 5) {
        DAT_800e806c = 0x80;
        uVar1 = FUN_8010adf4();
        return uVar1;
      }
      DAT_800e7e86 = DAT_800bf817;
      DAT_800e806c = 0x80;
      DAT_1f80019c = 3;
      func_0x80044bd4(0x8010baa4,0x18,0);
      DAT_1f80019c = 0;
      _DAT_1f800184 = 0;
      DAT_800e7feb = 8;
      _DAT_1f800210 = _DAT_800e7fc0;
      uVar1 = func_0x80074f24(DAT_800bf870);
      return uVar1;
    }
    if (DAT_800bf817 != 0) {
      DAT_800e806c = 0x80;
      uVar1 = FUN_8010adf4();
      return uVar1;
    }
    uVar1 = 0x1a;
    iVar2 = 0;
    uVar4 = 0;
  }
  if (iVar2 != 0) {
    *(undefined1 *)(unaff_s3 + 4) = 3;
    uVar1 = FUN_80113e98(0x8010baa4,uVar1);
    return uVar1;
  }
  *(undefined1 *)(unaff_s3 + 9) = uVar4;
  *(undefined1 *)(unaff_s3 + 0xd) = uVar4;
  *(undefined1 *)(unaff_s3 + 0xb) = 0;
  *(undefined2 *)(unaff_s3 + 0x54) = 0;
  *(undefined2 *)(unaff_s3 + 0x56) = 0;
  *(undefined2 *)(unaff_s3 + 0x58) = 0;
  *(undefined2 *)(unaff_s3 + 0xb8) = 0x1500;
  *(undefined2 *)(unaff_s3 + 0xba) = 0x1500;
  *(undefined2 *)(unaff_s3 + 0xbc) = 0x1500;
  func_0x8004b354();
  iVar2 = 0;
  if (*(char *)(unaff_s3 + 8) != '\0') {
    puVar6 = (undefined2 *)&DAT_80135b30;
    iVar5 = unaff_s3;
    do {
      iVar3 = func_0x8007aae8();
      *(int *)(iVar5 + 0xc0) = iVar3;
      *(undefined2 *)(iVar3 + 6) = *puVar6;
      **(undefined2 **)(iVar5 + 0xc0) = puVar6[1];
      *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 2) = puVar6[2];
      *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 4) = puVar6[3];
      *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 8) = 0;
      *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 10) = 0;
      *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0xc) = 0;
      *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x38) = 0x1000;
      iVar3 = iVar2 + 0x16;
      *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x3a) = 0x1000;
      iVar2 = iVar2 + 1;
      *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x3c) = 0x1000;
      puVar6 = puVar6 + 4;
      func_0x80051b04(*(undefined4 *)(iVar5 + 0xc0),0xc,iVar3);
      iVar5 = iVar5 + 4;
    } while (iVar2 < (int)(uint)*(byte *)(unaff_s3 + 8));
  }
  return 1;
}

