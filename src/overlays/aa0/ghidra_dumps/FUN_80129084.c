// FUN_80129084

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80129444) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80129084(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *unaff_s1;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x29) == '\0') {
      *(undefined1 *)(param_1 + 6) = 2;
      *(undefined1 *)(param_1 + 0x5e) = 0;
      if (DAT_800e7fe8 == 1) {
        FUN_801321d0();
        return;
      }
      if (DAT_800e7fe8 < 2) {
        if (DAT_800e7fe8 == 0) {
          FUN_801321d0();
          return;
        }
        *(undefined2 *)(param_1 + 0x44) = 0x100;
      }
      else {
        if (DAT_800e7fe8 == 2) {
          *(undefined2 *)(param_1 + 0x44) = 0x80;
          if (DAT_800e7fc7 != '\0') {
            return;
          }
          *(short *)(param_1 + 0x44) = -*(short *)(param_1 + 0x44);
          FUN_801323f0();
          return;
        }
        *(undefined2 *)(param_1 + 0x44) = 0x100;
      }
      _DAT_0000002f = 0x100;
      _DAT_00000033 = *(short *)(param_1 + 0x32) + -0x78;
      _DAT_00000037 = *(undefined2 *)(param_1 + 0x36);
      DAT_00000004 = 0xc;
      *(undefined4 *)(param_1 + 0x10) = 1;
      iVar6 = func_0x80083e80((int)*(short *)(param_1 + 0x50));
      *(short *)(param_1 + 0xba) = *(short *)(param_1 + 0xba) + (short)((iVar6 << 8) >> 0xc);
      FUN_8013b2d0();
      return;
    }
    if (DAT_800e7fc7 == '\0') {
      *(short *)(*(int *)(param_1 + 0xc0) + 0xc) = _DAT_800e7ed8;
      FUN_80132228();
      return;
    }
    *(short *)(*(int *)(param_1 + 0xc0) + 0xc) = -_DAT_800e7ed8;
    if (2 < DAT_800e7fe8) {
      if (DAT_800e7fc7 == '\0') {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
        *(undefined1 *)(param_1 + 0x5e) = 2;
        FUN_801322a8((int)*(short *)(param_1 + 0x32));
        return;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * -0x100;
      *(undefined1 *)(param_1 + 0x5e) = 1;
      if (*(short *)(param_1 + 0x60) <= *(short *)(param_1 + 0x32)) {
        return;
      }
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x60);
      FUN_801323f0();
      return;
    }
    *(undefined1 *)(param_1 + 0x5e) = 0;
    FUN_801323f0();
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_801323f0();
      return;
    }
    if (*(char *)(param_1 + 0x29) == '\0') {
      if (*(char *)(param_1 + 0x2b) != '\0') {
        uVar3 = func_0x80077768((uint)*(byte *)(param_1 + 0x5f) << 4,0x1a,0);
        *(undefined1 *)(param_1 + 0x46) = uVar3;
        *(undefined1 *)(param_1 + 6) = 3;
        *(undefined1 *)(param_1 + 7) = 0;
        FUN_801323f0();
        return;
      }
      bVar1 = *(byte *)(param_1 + 7);
      if (bVar1 != 1) {
        if (1 < bVar1) {
          if (bVar1 != 2) {
            FUN_80132144();
            return;
          }
          *(ushort *)(param_1 + 0x4c) =
               *(short *)(param_1 + 0x4c) + *(short *)(param_1 + 0x52) * 8 & 0xfff;
          if (*(short *)(param_1 + 0x4c) != 0) {
            return;
          }
          func_0x8009a450(1,0x1a);
          return;
        }
        if (bVar1 != 0) {
          FUN_80132144();
          return;
        }
        *(undefined1 *)(param_1 + 7) = 1;
        *(undefined2 *)(param_1 + 0x52) = 0x40;
        *(undefined2 *)(param_1 + 0x4c) = 0;
      }
      uVar5 = func_0x80083f50((int)*(short *)(param_1 + 0x4c));
      *(short *)(*(int *)(param_1 + 0xc0) + 0xc) = (short)(uVar5 >> 6);
      FUN_80132138((int)*(short *)(param_1 + 0x52));
      return;
    }
LAB_80129334:
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined1 *)(param_1 + 7) = 0;
    FUN_801323f0();
    return;
  }
  if (bVar1 == 2) {
    if (*(char *)(param_1 + 0x29) == '\0') {
      iVar6 = FUN_80131f34(param_1);
      if (iVar6 == 0) {
        return;
      }
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      FUN_801323f0();
      return;
    }
    goto LAB_80129334;
  }
  if (bVar1 != 3) {
    FUN_801323f0();
    return;
  }
  puVar7 = (undefined1 *)(uint)*(byte *)(param_1 + 7);
  if (puVar7 == (undefined1 *)0x1) {
    if (*(char *)(param_1 + 0x46) == '\0') {
      FUN_80132378();
      return;
    }
    *(short *)(*(int *)(param_1 + 0xc0) + 0xc) = *(short *)(*(int *)(param_1 + 0xc0) + 0xc) + 0x100;
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 != 1) {
      return;
    }
    puVar7 = (undefined1 *)(*(byte *)(param_1 + 7) + 1);
    *(char *)(param_1 + 7) = (char)puVar7;
  }
  else if (puVar7 < (undefined1 *)0x2) {
    if (puVar7 != (undefined1 *)0x0) goto LAB_801323d8;
    puVar7 = (undefined1 *)0x4;
    *(undefined1 *)(param_1 + 7) = 1;
    *(undefined2 *)(param_1 + 0x40) = 4;
  }
  else {
    if (puVar7 != (undefined1 *)0x2) goto LAB_801323d8;
    if (*(char *)(param_1 + 0x46) != '\0') {
      *(undefined2 *)(param_1 + 0x44) = 0xffc0;
      goto LAB_801323d8;
    }
    *(undefined4 *)(unaff_s1 + 0x3c) = 0x40;
    puVar7 = &LAB_800c0000;
  }
  puVar7 = puVar7 + -0x790;
LAB_801323d8:
  uVar4 = 3;
  if (puVar7[3] == '\0') {
    if (((int)(uint)(byte)puVar7[0x1a3] >> ((byte)unaff_s1[3] & 0x1f) & 1U) != 0) {
      unaff_s1[0x5e] = 0;
      FUN_8013b3d8();
      return;
    }
    FUN_8013af18();
    func_0x80077c40();
    *unaff_s1 = 1;
    *(undefined2 *)(unaff_s1 + 0x80) = 400;
    *(undefined2 *)(unaff_s1 + 0x82) = 800;
    *(undefined2 *)(unaff_s1 + 0x84) = 0xb4;
    *(undefined2 *)(unaff_s1 + 0x86) = 0xb4;
    unaff_s1[0x29] = 0;
    unaff_s1[0x2b] = 0;
    unaff_s1[4] = unaff_s1[4] + '\x01';
    if (unaff_s1[0x5e] != '\0') {
      return;
    }
    uVar4 = 4;
    unaff_s1[5] = 4;
  }
  else {
    unaff_s1[4] = 3;
  }
  *(undefined2 *)(param_1 + 6) = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

