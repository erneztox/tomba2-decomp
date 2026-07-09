// FUN_80110584

/* WARNING: Removing unreachable block (ram,0x8011999c) */
/* WARNING: Removing unreachable block (ram,0x801198e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80110584(undefined4 param_1,uint param_2)

{
  byte bVar1;
  short sVar2;
  undefined1 uVar3;
  int in_v0;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *unaff_s0;
  int unaff_s2;
  
  iVar6 = in_v0 + 0x7e80;
  bVar1 = unaff_s0[0x78];
  if (bVar1 == 1) {
    sVar2 = *(short *)(unaff_s0 + 0x40);
    *(short *)(unaff_s0 + 0x40) = sVar2 + -1;
    if (sVar2 != 1) {
      return 0;
    }
    param_2 = 0xcf;
    unaff_s0[0x78] = unaff_s0[0x78] + '\x01';
    func_0x80054d14(iVar6,0xcf,2);
    iVar6 = 0x1e;
    *(undefined2 *)(unaff_s0 + 0x40) = 0x1e;
LAB_80119648:
    iVar6 = iVar6 + 0x7e80;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar6 = FUN_8012df08();
      if (iVar6 == 0) {
        return 0;
      }
      *(int *)(unaff_s0 + 0x14) = iVar6;
      *(undefined2 *)(unaff_s0 + 0x40) = 0x14;
      iVar6 = (byte)unaff_s0[0x78] + 1;
      unaff_s0[0x78] = (char)iVar6;
      goto LAB_80119648;
    }
  }
  else {
    if (bVar1 == 2) {
      sVar2 = *(short *)(unaff_s0 + 0x40);
      *(short *)(unaff_s0 + 0x40) = sVar2 + -1;
      if (sVar2 != 1) {
        return 0;
      }
      iVar5 = *(int *)(unaff_s0 + 0x14);
      *(undefined1 *)(iVar5 + 4) = 2;
      *(undefined1 *)(iVar5 + 5) = 0;
      unaff_s0[0x78] = unaff_s0[0x78] + '\x01';
      func_0x80054d14(iVar6,2,8);
      param_2 = 0;
      func_0x80041768();
      iVar6 = 0x3c;
      *(undefined2 *)(unaff_s0 + 0x40) = 0x3c;
      goto LAB_80119648;
    }
    if (bVar1 == 3) {
      sVar2 = *(short *)(unaff_s0 + 0x40);
      *(short *)(unaff_s0 + 0x40) = sVar2 + -1;
      if (sVar2 != 1) {
        return 0;
      }
      return 1;
    }
  }
  if (1 < param_2) {
    unaff_s0[3] = 1;
    unaff_s0[5] = 0;
    unaff_s0[6] = 0;
    unaff_s0[7] = 0;
    uVar4 = FUN_8012295c();
    return uVar4;
  }
  bVar1 = unaff_s0[5];
  if (bVar1 == 1) {
    if (param_2 == 0) {
      if (((*(byte *)(iVar6 + 0x2a) - 0x10 < 2) && (0x1108 < *(short *)(iVar6 + 0x36))) &&
         (*(undefined2 *)(iVar6 + 0x36) = 0x1108, *(char *)(iVar6 + 0x29) != '\0')) {
        func_0x80054198();
        unaff_s0[5] = 2;
        uVar4 = FUN_80122794();
        return uVar4;
      }
      goto LAB_801199a0;
    }
    if ((*(byte *)(iVar6 + 0x2a) - 0x10 < 2) && (iVar5 = 0x111c, 0x111c < *(short *)(iVar6 + 0x36)))
    {
      *(undefined2 *)(iVar6 + 0x36) = 0x111c;
    }
    else {
      if ((unaff_s0[0x2b] != '\x03') || (*(char *)(iVar6 + 0x29) == '\0')) goto LAB_801199a0;
      func_0x80054198();
      unaff_s0[5] = 3;
      iVar5 = func_0x80042354(1,1);
    }
  }
  else {
    if (1 < bVar1) {
      iVar5 = 3;
      if (bVar1 == 2) {
        bVar1 = unaff_s0[6];
        if (bVar1 != 1) {
          if (bVar1 < 2) {
            if (bVar1 == 0) {
              unaff_s0[6] = 1;
              func_0x80040cdc();
              unaff_s0[0x70] = 1;
              *(undefined1 *)(unaff_s2 + 0x17b) = 0;
              uVar4 = FUN_80122874();
              return uVar4;
            }
          }
          else if (bVar1 == 2) {
            if (_DAT_800bf830 != -1) goto LAB_801199a0;
            unaff_s0[6] = 3;
            *(undefined1 *)(unaff_s2 + 0x16d) = 1;
            func_0x80042310();
          }
          else if (bVar1 == 3) {
            unaff_s0[6] = 0;
          }
          bVar1 = *(byte *)((*(ushort *)(*(int *)(unaff_s2 + 0xc0) + 0x16) >> 6 & 7) + 0x8014a258);
          *(byte *)(unaff_s2 + 0x5f) = bVar1;
          return (uint)bVar1;
        }
        func_0x80041098();
        if (unaff_s0[0x70] == -1) {
          unaff_s0[6] = unaff_s0[6] + '\x01';
          uVar4 = FUN_80122874();
          return uVar4;
        }
      }
      else {
        if (bVar1 != 3) goto LAB_8012293c;
        bVar1 = unaff_s0[6];
        if (bVar1 != 1) {
          if (1 < bVar1) {
            if (bVar1 != 2) {
              uVar4 = FUN_80122930();
              return uVar4;
            }
            unaff_s0[6] = 0;
            uVar4 = FUN_80122930();
            return uVar4;
          }
          if (bVar1 != 0) {
            uVar4 = FUN_80122930();
            return uVar4;
          }
          unaff_s0[6] = 1;
          func_0x80040cdc();
          unaff_s0[0x70] = 1;
          uVar4 = FUN_8012292c();
          return uVar4;
        }
        func_0x80041098();
        if (unaff_s0[0x70] == -1) {
          unaff_s0[6] = unaff_s0[6] + '\x01';
          func_0x80042310();
          uVar4 = FUN_80122930();
          return uVar4;
        }
      }
LAB_801199a0:
      iVar6 = func_0x8007778c();
      uVar4 = 0;
      if (iVar6 != 0) {
        func_0x8004190c();
        uVar4 = func_0x800518fc();
      }
      return uVar4;
    }
    iVar5 = 0x3c;
    if (bVar1 == 0) {
      *(undefined2 *)(unaff_s0 + 0x80) = 0x3c;
      *(undefined2 *)(unaff_s0 + 0x82) = 0x78;
      *(undefined2 *)(unaff_s0 + 0x84) = 0x80;
      unaff_s0[5] = 1;
      *(undefined2 *)(unaff_s0 + 0x86) = 0xe0;
      uVar3 = 9;
      if (*(char *)(unaff_s2 + 0x16d) == '\0') {
        uVar3 = 2;
      }
      *unaff_s0 = uVar3;
      *(undefined2 *)(unaff_s0 + 0x2e) = 0x3958;
      *(undefined2 *)(unaff_s0 + 0x32) = 0xf7de;
      *(undefined2 *)(unaff_s0 + 0x36) = 0x10cc;
      *(undefined2 *)(unaff_s0 + 0x56) = 0xc00;
      unaff_s0[0x2a] = 0x10;
      unaff_s0[0x2b] = 0;
      func_0x80077cfc();
      iVar5 = 1;
      unaff_s0[0xb] = 1;
      unaff_s0[0x47] = 0;
    }
  }
LAB_8012293c:
  if (iVar5 == 0) {
    uVar4 = func_0x80074590(6,4,0x1e);
    return uVar4;
  }
  *(char *)(unaff_s2 + 0x5f) = (char)iVar5 + -1;
  iVar6 = *(int *)(unaff_s2 + 0xc0);
  *(short *)(iVar6 + 10) = *(short *)(iVar6 + 10) + *(short *)(iVar6 + 0x16);
  iVar6 = *(int *)(unaff_s2 + 0xc0);
  *(short *)(iVar6 + 0x16) = *(short *)(iVar6 + 0x16) + *(short *)(iVar6 + 0x12);
  if (0x180 < *(short *)(*(int *)(unaff_s2 + 0xc0) + 0x16)) {
    DAT_800bf9de = 0xf;
    *(undefined2 *)(*(int *)(unaff_s2 + 0xc0) + 0x16) = 0x180;
    *(undefined2 *)(unaff_s2 + 0x40) = 0x8c;
    *(char *)(unaff_s2 + 5) = *(char *)(unaff_s2 + 5) + '\x01';
  }
  uVar4 = FUN_8012babc(&DAT_800e7eac,1,2);
  return uVar4;
}

