
void FUN_8001451c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_v1;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  int unaff_s0;
  int unaff_s1;
  undefined1 *unaff_s2;
  
  uVar9 = 1;
  if (((0x160 < in_v1) && (uVar9 = 2, 400 < in_v1)) && (uVar9 = 4, in_v1 < 0x231)) {
    uVar9 = 3;
  }
  iVar1 = ((uint)*(byte *)(unaff_s1 + 0x12) * 5 + uVar9) * 4;
  iVar2 = (uint)*(ushort *)(&DAT_800255ea + iVar1) - (uint)*(ushort *)(&DAT_800255e8 + iVar1);
  puVar6 = (uint *)((uint)*(ushort *)(&DAT_800255e8 + iVar1) +
                   (int)*(short *)(unaff_s1 + 8) * (uint)(byte)(&DAT_80025610)[uVar9]);
  if (*(short *)(unaff_s1 + 0xc) != 0) {
    iVar2 = iVar2 * *(short *)(unaff_s1 + 0xc) >> 8;
  }
  puVar4 = (uint *)((int)puVar6 + iVar2);
  if (*(char *)(unaff_s1 + 0x12) == '\0') {
    puVar7 = (uint *)0x1f4;
    if ((499 < (int)puVar6) && (puVar7 = (uint *)0xcb2, (int)puVar6 < 0xcb3)) {
      puVar7 = puVar6;
    }
    puVar6 = puVar7 + (byte)(&DAT_80025610)[uVar9];
    if (((int)(puVar7 + (byte)(&DAT_80025610)[uVar9]) <= (int)puVar4) &&
       (puVar6 = (uint *)0xcda, (int)puVar4 < 0xcdb)) {
      puVar6 = puVar4;
    }
    if (unaff_s0 < 0x10) {
      puVar4 = (uint *)0x10;
    }
    else {
      puVar4 = (uint *)0x101;
      if (unaff_s0 < 0x102) {
        FUN_80013ec0();
        return;
      }
    }
    puVar8 = (undefined1 *)((int)puVar4 + 2);
    if (((int)puVar4 + 2 <= (int)unaff_s2) && (puVar8 = (undefined1 *)0x102, (int)unaff_s2 < 0x103))
    {
      puVar8 = unaff_s2;
    }
  }
  else {
    puVar7 = (uint *)0x21c;
    if ((0x21b < (int)puVar6) && (puVar7 = (uint *)0xc94, (int)puVar6 < 0xc95)) {
      puVar7 = puVar6;
    }
    puVar6 = puVar7 + (byte)(&DAT_80025610)[uVar9];
    if (((int)(puVar7 + (byte)(&DAT_80025610)[uVar9]) <= (int)puVar4) &&
       (puVar6 = (uint *)0xcbc, (int)puVar4 < 0xcbd)) {
      puVar6 = puVar4;
    }
    if (unaff_s0 < 0x13) {
      puVar4 = (uint *)&DAT_00000013;
    }
    else {
      puVar4 = (uint *)&DAT_0000012f;
      if (unaff_s0 < 0x130) {
        FUN_80013e30();
        return;
      }
    }
    uVar3 = (uint)((int)unaff_s2 < 0x132);
    puVar8 = (undefined1 *)((int)puVar4 + 2);
    if ((int)puVar4 + 2 <= (int)unaff_s2) {
      for (; puVar5 = puVar7, *puVar4 = uVar3 & uVar9 | (uint)puVar6, unaff_s1 != 0;
          unaff_s1 = unaff_s1 + -1) {
        *(undefined1 *)((int)puVar5 + 3) = 0;
        uVar3 = *puVar5;
        puVar6 = (uint *)((uint)(puVar5 + 1) & 0x131);
        puVar7 = puVar5 + 1;
        puVar4 = puVar5;
      }
      DAT_800255d4 = 0x40255c0;
      *puVar5 = 0x255d4;
      return;
    }
  }
  (**(code **)(DAT_8002550c + 0x10))
            (((uint)puVar6 & 0xfff) << 0xc | (uint)puVar7 & 0xfff | 0x6000000);
  (**(code **)(DAT_8002550c + 0x10))(((uint)puVar8 & 0x3ff) << 10 | (uint)puVar4 | 0x7000000);
  FUN_8001e44c(&DAT_80025580);
  return;
}

