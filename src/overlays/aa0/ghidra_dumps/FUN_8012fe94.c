// FUN_8012fe94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8012fe94(void)

{
  byte bVar1;
  undefined2 uVar2;
  int in_v0;
  uint uVar3;
  uint extraout_v1;
  int iVar4;
  int iVar5;
  int unaff_s0;
  uint uVar6;
  undefined8 uVar7;
  
  uVar3 = 1;
  if (in_v0 != 0) {
    *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
    DAT_1f800236 = 1;
    DAT_800bf839 = 1;
    DAT_800bf80f = 2;
    uVar3 = 0x1400;
    _DAT_800bf83a = 0x1400;
  }
  bVar1 = *(byte *)(unaff_s0 + 5);
  uVar6 = (uint)bVar1;
  iVar4 = 1;
  iVar5 = unaff_s0;
  if (uVar6 == 1) {
    iVar4 = func_0x8005308c();
    if (iVar4 == 0) {
LAB_80130010:
      uVar3 = func_0x800735f4();
      return uVar3;
    }
    if ((DAT_800e7ff4 & 4) != 0) {
      *(undefined1 *)(unaff_s0 + 5) = 0;
      uVar2 = func_0x80040b48(0x45);
      uVar3 = extraout_v1;
      goto LAB_80138fac;
    }
    *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
    *(undefined2 *)(unaff_s0 + 0xb8) = *(undefined2 *)(unaff_s0 + 0x60);
    *(undefined2 *)(unaff_s0 + 0xba) = *(undefined2 *)(unaff_s0 + 0x62);
    *(undefined2 *)(unaff_s0 + 0xbc) = *(undefined2 *)(unaff_s0 + 100);
    func_0x80042354(1,1);
    iVar4 = unaff_s0;
    uVar7 = func_0x80040cdc();
    *(byte *)(unaff_s0 + 0x70) = bVar1;
  }
  else {
    uVar2 = 2;
    if (1 < uVar6) {
      if (uVar6 == 2) {
        func_0x80041098();
        if (*(char *)(unaff_s0 + 0x70) == -1) {
          func_0x80042310();
          *(undefined1 *)(unaff_s0 + 5) = 0;
          *(undefined1 *)(unaff_s0 + 0x46) = 0;
          *(undefined2 *)(unaff_s0 + 0x60) = *(undefined2 *)(unaff_s0 + 0xb8);
          *(undefined2 *)(unaff_s0 + 0x62) = *(undefined2 *)(unaff_s0 + 0xba);
          *(undefined2 *)(unaff_s0 + 100) = *(undefined2 *)(unaff_s0 + 0xbc);
        }
        goto LAB_80130010;
      }
      goto LAB_80138fac;
    }
    uVar2 = 0;
    if (uVar6 != 0) goto LAB_80138fac;
    if ((((DAT_800e7ff4 & 4) != 0) || (DAT_800bf8f9 != '\0')) ||
       (uVar3 = *(uint *)(unaff_s0 + 0x28) & 0xff00ff00, uVar7 = CONCAT44(0xff00ff00,uVar3),
       uVar3 == 0)) goto LAB_80130010;
    *(undefined1 *)(unaff_s0 + 5) = 1;
  }
  uVar2 = (undefined2)uVar7;
  uVar3 = (uint)((ulonglong)uVar7 >> 0x20) & 0xfff;
  iVar5 = iVar4;
LAB_80138fac:
  iVar4 = uVar3 - 0xc00;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  *(undefined2 *)(unaff_s0 + 0x4e) = uVar2;
  iVar5 = iVar5 + (0x400 - iVar4 >> 6) * -0x100;
  *(short *)(unaff_s0 + 0x4e) = (short)iVar5;
  if (0 < iVar5 * 0x10000) {
    return uVar6;
  }
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  uVar3 = FUN_80142120();
  return uVar3;
}

