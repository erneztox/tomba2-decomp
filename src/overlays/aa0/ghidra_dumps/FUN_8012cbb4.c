// FUN_8012cbb4

/* WARNING: Control flow encountered bad instruction data */

void FUN_8012cbb4(void)

{
  short sVar1;
  int iVar2;
  ushort uVar4;
  undefined2 uVar5;
  int in_v1;
  uint uVar6;
  int iVar7;
  int unaff_s1;
  uint uVar3;
  
  if (-1 < in_v1) {
    if (*(short *)(unaff_s1 + 0x4a) < 1) {
LAB_8012cbfc:
      *(undefined2 *)(unaff_s1 + 0x4a) = 0;
    }
    else {
      uVar4 = *(short *)(unaff_s1 + 0x4a) - 1;
      *(ushort *)(unaff_s1 + 0x4a) = uVar4;
      *(short *)(unaff_s1 + 0x48) = *(short *)(unaff_s1 + 0x48) + 0x88;
      if ((int)((uint)uVar4 << 0x10) < 1) {
        *(undefined2 *)(*(int *)(unaff_s1 + 0x10) + 0x40) = 0;
        goto LAB_8012cbfc;
      }
    }
    iVar7 = *(int *)(unaff_s1 + 0x10);
    iVar2 = func_0x80083e80((int)*(short *)(unaff_s1 + 0x48));
    *(short *)(unaff_s1 + 0x32) =
         *(short *)(unaff_s1 + 0x60) + (short)(iVar2 * *(short *)(unaff_s1 + 0x4a) >> 0xc);
    *(undefined2 *)(iVar7 + 0x4e) = *(undefined2 *)(unaff_s1 + 0x2e);
    *(short *)(iVar7 + 0x50) = *(short *)(unaff_s1 + 0x32) + 0x3c;
    *(undefined2 *)(iVar7 + 0x52) = *(undefined2 *)(unaff_s1 + 0x36);
  }
  if (*(char *)(unaff_s1 + 0x29) != '\0') {
    *(undefined1 *)(unaff_s1 + 6) = 2;
    FUN_8013ecf8();
    return;
  }
  iVar2 = (int)*(short *)(unaff_s1 + 0x44);
  uVar6 = *(ushort *)(*(int *)(unaff_s1 + 0xc0) + 0xc) & 0xfff;
  if (iVar2 < 1) {
    iVar2 = iVar2 + 10;
    if (0 < iVar2 * 0x10000) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = iVar2 + -10;
    if (iVar2 * 0x10000 < 0) {
      FUN_80135c54(0);
      return;
    }
  }
  uVar3 = uVar6 + iVar2;
  sVar1 = (short)iVar2;
  if ((ushort)uVar6 < 0x801) {
    if (0 < (int)(uVar3 * 0x10000)) {
      if (-0x96 < sVar1) {
        iVar2 = iVar2 + -0x1e;
      }
      goto LAB_8012cd50;
    }
  }
  else if ((int)(uVar3 * 0x10000) >> 0x10 < 0x1000) {
    if (sVar1 < 0x96) {
      FUN_80135cec(iVar2 + 0x1e);
      return;
    }
    goto LAB_8012cd50;
  }
  iVar7 = (int)sVar1;
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  if (iVar7 < 0x8c) {
    *(undefined1 *)(unaff_s1 + 6) = 0;
    if ((uVar3 & 0xffff) == 0) {
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_8012cd50:
  *(short *)(unaff_s1 + 0x44) = (short)iVar2;
  if (*(byte *)(unaff_s1 + 3) < 2) {
    *(short *)(*(int *)(unaff_s1 + 0xc0) + 0xc) = (short)uVar3;
    *(short *)(*(int *)(unaff_s1 + 0xc4) + 0xc) = (short)uVar3;
    uVar5 = (undefined2)(((int)(uVar3 * 0x10000) >> 0x10) * -3 >> 1);
    *(undefined2 *)(*(int *)(unaff_s1 + 200) + 0xc) = uVar5;
    *(undefined2 *)(*(int *)(unaff_s1 + 0xcc) + 0xc) = uVar5;
  }
  return;
}

