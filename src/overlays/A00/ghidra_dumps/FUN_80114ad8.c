// FUN_80114ad8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_80114ad8(void)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint in_v1;
  int extraout_v1;
  int extraout_v1_00;
  int extraout_v1_01;
  undefined1 *unaff_s0;
  undefined1 uVar7;
  int in_lo;
  
  puVar3 = unaff_s0;
  if ((in_v1 & 1) == 0) {
    FUN_8011dfc0();
    iVar5 = extraout_v1_00;
  }
  else {
    FUN_8011e340();
    iVar5 = extraout_v1;
  }
  *(int *)(unaff_s0 + 0x34) = iVar5 + in_lo;
  if (*(short *)(unaff_s0 + 100) == 0) {
    *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 10;
    *(int *)(unaff_s0 + 0x30) =
         *(int *)(unaff_s0 + 0x30) + (int)puVar3 * (int)*(short *)(unaff_s0 + 0x4a);
    puVar3 = (undefined1 *)FUN_80126b7c();
    return puVar3;
  }
  if ((*(ushort *)(unaff_s0 + 100) & 3) != 0) {
    *(short *)(unaff_s0 + 0x32) =
         *(short *)(unaff_s0 + 0x32) + (short)(char)((ushort)*(undefined2 *)(unaff_s0 + 0x4a) >> 8);
  }
  func_0x8004766c();
  if (*(short *)(unaff_s0 + 100) == 1) {
    return (undefined1 *)0x0;
  }
  uVar4 = func_0x80049250();
  if ((uVar4 & 1) == 0) {
    if ((uVar4 & 2) != 0) {
      func_0x80049760();
      *(undefined2 *)(unaff_s0 + 100) = 4;
    }
    puVar3 = (undefined1 *)FUN_80126bec();
    return puVar3;
  }
  puVar3 = unaff_s0;
  func_0x80049674();
  *(undefined2 *)(unaff_s0 + 100) = 0;
  uVar7 = (undefined1)uVar4;
  if (extraout_v1_01 < 0) {
    if (1 < extraout_v1_01) {
      if (extraout_v1_01 == 2) {
        puVar6 = (undefined1 *)0x0;
        if (((unaff_s0[0x29] != '\0') && (puVar6 = (undefined1 *)0x0, puVar3[0x29] != '\0')) &&
           (puVar6 = (undefined1 *)0x3, puVar3[0x17b] == '\0')) {
          unaff_s0[6] = 3;
          DAT_1f800137 = 2;
          puVar3 = (undefined1 *)func_0x80074590(0x17,0,0xf);
          return puVar3;
        }
      }
      else {
        if (extraout_v1_01 != 3) goto LAB_80138c58;
        iVar5 = func_0x80072e60();
        puVar6 = (undefined1 *)0x0;
        if (iVar5 != 0) {
          unaff_s0[6] = unaff_s0[6] + '\x01';
          puVar6 = &DAT_800bf808;
          DAT_800bf80f = 2;
          _DAT_800bf83a = 0x813;
          DAT_1f800236 = uVar7;
          DAT_800bf839 = uVar7;
        }
      }
      return puVar6;
    }
    if (extraout_v1_01 != 0) goto LAB_80138c58;
    if (DAT_800bf871 != '\n') {
      unaff_s0[6] = 2;
      goto LAB_80138c58;
    }
    *unaff_s0 = 2;
    puVar3 = unaff_s0;
  }
  else {
    uVar1 = *(ushort *)(uVar4 + 0x78);
    if ((uVar1 & 1) == 0) {
      *(undefined2 *)(uVar4 + 0x48) = 0;
      *(undefined2 *)(uVar4 + 0x4e) = 0;
      *(undefined2 *)(uVar4 + 0x78) = 0;
      *(undefined1 *)(uVar4 + 5) = 0;
      *(undefined1 *)(uVar4 + 6) = 0;
      *(undefined1 *)(uVar4 + 0x5e) = 0;
      *(undefined2 *)(uVar4 + 0x76) = 0;
      return (undefined1 *)(uVar1 & 0x8000);
    }
    uVar2 = 0xf;
    if ((uVar1 & 0x8000) == 0) {
      uVar2 = 0x1e;
    }
    *(undefined2 *)(uVar4 + 0x40) = uVar2;
    *(char *)(uVar4 + 6) = *(char *)(uVar4 + 6) + '\x01';
  }
  puVar3[6] = uVar7;
  *(undefined2 *)(puVar3 + 0x50) = 0x400;
  func_0x80072efc();
LAB_80138c58:
  puVar3 = (undefined1 *)FUN_80141c00();
  return puVar3;
}

