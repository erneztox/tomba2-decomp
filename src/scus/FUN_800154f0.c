
undefined4 FUN_800154f0(undefined2 param_1)

{
  int in_v0;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int in_v1;
  int iVar4;
  int iVar5;
  undefined4 *unaff_s1;
  undefined4 *unaff_s2;
  
  *(undefined2 *)((int)unaff_s1 + 6) = param_1;
  iVar4 = in_v1 * (in_v0 >> 0x10) + 1;
  iVar5 = iVar4 - (iVar4 >> 0x1f) >> 5;
  if (iVar4 / 2 < 1) {
    uVar1 = FUN_80014eac();
    return uVar1;
  }
  iVar4 = iVar4 / 2 + iVar5 * -0x10;
  uVar2 = *DAT_8002561c;
  while ((uVar2 & 0x4000000) == 0) {
    iVar3 = FUN_800157b0();
    if (iVar3 != 0) {
      return 0xffffffff;
    }
    uVar2 = *DAT_8002561c;
  }
  *DAT_8002561c = 0x4000000;
  *DAT_80025618 = 0x1000000;
  *DAT_80025618 = 0xc0000000;
  *DAT_80025618 = *unaff_s1;
  *DAT_80025618 = unaff_s1[1];
  uVar2 = *DAT_8002561c;
  while( true ) {
    if ((uVar2 & 0x8000000) != 0) {
      while (iVar4 = iVar4 + -1, iVar4 != -1) {
        *unaff_s2 = *DAT_80025618;
        unaff_s2 = unaff_s2 + 1;
      }
      if (iVar5 != 0) {
        *DAT_8002561c = 0x4000003;
        *DAT_80025620 = (int)unaff_s2;
        *DAT_80025624 = iVar5 << 0x10 | 0x10;
        *DAT_80025628 = 0x1000200;
      }
      return 0;
    }
    iVar3 = FUN_800157b0();
    if (iVar3 != 0) break;
    uVar2 = *DAT_8002561c;
  }
  return 0xffffffff;
}

