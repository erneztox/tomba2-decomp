
void FUN_800144fc(void)

{
  short sVar1;
  int in_v0;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  int unaff_s0;
  int unaff_s1;
  undefined1 *puVar11;
  
  puVar11 = (undefined1 *)(unaff_s0 + in_v0);
  if (in_v0 == 0) {
    puVar11 = (undefined1 *)(unaff_s0 + 0xf0);
  }
  sVar1 = *(short *)(unaff_s1 + 4);
  uVar10 = 0;
  if ((((0x118 < sVar1) && (uVar10 = 1, 0x160 < sVar1)) && (uVar10 = 2, 400 < sVar1)) &&
     (uVar10 = 4, sVar1 < 0x231)) {
    uVar10 = 3;
  }
  iVar2 = ((uint)*(byte *)(unaff_s1 + 0x12) * 5 + uVar10) * 4;
  iVar3 = (uint)*(ushort *)(&DAT_800255ea + iVar2) - (uint)*(ushort *)(&DAT_800255e8 + iVar2);
  puVar7 = (uint *)((uint)*(ushort *)(&DAT_800255e8 + iVar2) +
                   (int)*(short *)(unaff_s1 + 8) * (uint)(byte)(&DAT_80025610)[uVar10]);
  if (*(short *)(unaff_s1 + 0xc) != 0) {
    iVar3 = iVar3 * *(short *)(unaff_s1 + 0xc) >> 8;
  }
  puVar5 = (uint *)((int)puVar7 + iVar3);
  if (*(char *)(unaff_s1 + 0x12) == '\0') {
    puVar8 = (uint *)0x1f4;
    if ((499 < (int)puVar7) && (puVar8 = (uint *)0xcb2, (int)puVar7 < 0xcb3)) {
      puVar8 = puVar7;
    }
    puVar7 = puVar8 + (byte)(&DAT_80025610)[uVar10];
    if (((int)(puVar8 + (byte)(&DAT_80025610)[uVar10]) <= (int)puVar5) &&
       (puVar7 = (uint *)0xcda, (int)puVar5 < 0xcdb)) {
      puVar7 = puVar5;
    }
    if (unaff_s0 < 0x10) {
      puVar5 = (uint *)0x10;
    }
    else {
      puVar5 = (uint *)0x101;
      if (unaff_s0 < 0x102) {
        FUN_80013ec0();
        return;
      }
    }
    puVar9 = (undefined1 *)((int)puVar5 + 2);
    if (((int)puVar5 + 2 <= (int)puVar11) && (puVar9 = (undefined1 *)0x102, (int)puVar11 < 0x103)) {
      puVar9 = puVar11;
    }
  }
  else {
    puVar8 = (uint *)0x21c;
    if ((0x21b < (int)puVar7) && (puVar8 = (uint *)0xc94, (int)puVar7 < 0xc95)) {
      puVar8 = puVar7;
    }
    puVar7 = puVar8 + (byte)(&DAT_80025610)[uVar10];
    if (((int)(puVar8 + (byte)(&DAT_80025610)[uVar10]) <= (int)puVar5) &&
       (puVar7 = (uint *)0xcbc, (int)puVar5 < 0xcbd)) {
      puVar7 = puVar5;
    }
    if (unaff_s0 < 0x13) {
      puVar5 = (uint *)&DAT_00000013;
    }
    else {
      puVar5 = (uint *)&DAT_0000012f;
      if (unaff_s0 < 0x130) {
        FUN_80013e30();
        return;
      }
    }
    uVar4 = (uint)((int)puVar11 < 0x132);
    puVar9 = (undefined1 *)((int)puVar5 + 2);
    if ((int)puVar5 + 2 <= (int)puVar11) {
      for (; puVar6 = puVar8, *puVar5 = uVar4 & uVar10 | (uint)puVar7, unaff_s1 != 0;
          unaff_s1 = unaff_s1 + -1) {
        *(undefined1 *)((int)puVar6 + 3) = 0;
        uVar4 = *puVar6;
        puVar7 = (uint *)((uint)(puVar6 + 1) & 0x131);
        puVar8 = puVar6 + 1;
        puVar5 = puVar6;
      }
      DAT_800255d4 = 0x40255c0;
      *puVar6 = 0x255d4;
      return;
    }
  }
  (**(code **)(DAT_8002550c + 0x10))
            (((uint)puVar7 & 0xfff) << 0xc | (uint)puVar8 & 0xfff | 0x6000000);
  (**(code **)(DAT_8002550c + 0x10))(((uint)puVar9 & 0x3ff) << 10 | (uint)puVar5 | 0x7000000);
  FUN_8001e44c(&DAT_80025580);
  return;
}

