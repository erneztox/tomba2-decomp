// FUN_80126b7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80126b7c(void)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *unaff_s0;
  int unaff_s1;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  iVar4 = unaff_s3 + ((int)((uint)*(ushort *)(unaff_s1 + 0x48) << 0x10) >> 0x18);
  iVar5 = iVar4 * 0x10000 >> 0x10;
  if ((short)unaff_s3 * iVar5 < 1) {
    *(undefined1 *)(unaff_s1 + 6) = 1;
  }
  puVar6 = (undefined1 *)(uint)*(ushort *)(unaff_s1 + 100);
  if ((*(short *)(unaff_s1 + 100) <= iVar5) && (iVar5 <= *(short *)(unaff_s1 + 0x66))) {
    uVar1 = (ushort)iVar4;
    *(ushort *)(*(int *)(unaff_s1 + 0xc4) + 8) = uVar1 & 0xfff;
    FUN_801314b4();
    if (unaff_s5 != 0) {
      iVar4 = func_0x80083e80((int)(short)uVar1);
      iVar4 = (iVar4 * -(int)*(short *)(*(int *)(unaff_s1 + 200) + 4) >> 0xc) - unaff_s4;
      if (iVar4 * 0x10000 < 0) {
        FUN_8012fd38();
        return;
      }
      _DAT_800e7eb2 = _DAT_800e7eb2 + (short)iVar4;
    }
    if (*(short *)(unaff_s1 + 0x78) == 0) {
      FUN_80131578();
      return;
    }
    uVar2 = FUN_801308e0();
    unaff_s0[6] = uVar2;
    func_0x80072efc();
    *(undefined2 *)(unaff_s0 + 0x40) = 0xf;
    FUN_80138e70();
    return;
  }
  uVar2 = (undefined1)unaff_s1;
  if (iVar5 < 0) {
    if (1 < iVar5) {
      if (iVar5 == 2) {
        if (((unaff_s0[0x29] != '\0') && (puVar6[0x29] != '\0')) && (puVar6[0x17b] == '\0')) {
          unaff_s0[6] = 3;
          DAT_1f800137 = 2;
          func_0x80074590(0x17,0,0xf);
          return;
        }
      }
      else {
        if (iVar5 != 3) goto LAB_80138c58;
        iVar4 = func_0x80072e60();
        if (iVar4 != 0) {
          unaff_s0[6] = unaff_s0[6] + '\x01';
          DAT_800bf80f = 2;
          _DAT_800bf83a = 0x813;
          DAT_1f800236 = uVar2;
          DAT_800bf839 = uVar2;
        }
      }
      return;
    }
    if (iVar5 != 0) goto LAB_80138c58;
    if (DAT_800bf871 != '\n') {
      unaff_s0[6] = 2;
      goto LAB_80138c58;
    }
    *unaff_s0 = 2;
    puVar6 = unaff_s0;
  }
  else {
    if ((*(ushort *)(unaff_s1 + 0x78) & 1) == 0) {
      *(undefined2 *)(unaff_s1 + 0x48) = 0;
      *(undefined2 *)(unaff_s1 + 0x4e) = 0;
      *(undefined2 *)(unaff_s1 + 0x78) = 0;
      *(undefined1 *)(unaff_s1 + 5) = 0;
      *(undefined1 *)(unaff_s1 + 6) = 0;
      *(undefined1 *)(unaff_s1 + 0x5e) = 0;
      *(undefined2 *)(unaff_s1 + 0x76) = 0;
      return;
    }
    uVar3 = 0xf;
    if ((*(ushort *)(unaff_s1 + 0x78) & 0x8000) == 0) {
      uVar3 = 0x1e;
    }
    *(undefined2 *)(unaff_s1 + 0x40) = uVar3;
    *(char *)(unaff_s1 + 6) = *(char *)(unaff_s1 + 6) + '\x01';
  }
  puVar6[6] = uVar2;
  *(undefined2 *)(puVar6 + 0x50) = 0x400;
  func_0x80072efc();
LAB_80138c58:
  FUN_80141c00();
  return;
}

