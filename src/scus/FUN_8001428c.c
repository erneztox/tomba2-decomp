
void FUN_8001428c(void)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  ushort *unaff_s1;
  int unaff_s2;
  undefined1 *puVar14;
  
  uVar12 = 0x8000000;
  if (1 < *(byte *)(unaff_s2 + 0x5516)) {
    (*DAT_80025510)(&DAT_8001030c);
  }
  (**(code **)(DAT_8002550c + 0x10))((unaff_s1[1] & 0x3ff) << 10 | *unaff_s1 & 0x3ff | 0x5000000);
  if ((((*(int *)(unaff_s2 + 0x5590) != *(int *)(unaff_s1 + 8)) ||
       (*(ushort *)(unaff_s2 + 0x5580) != *unaff_s1)) ||
      (*(ushort *)(unaff_s2 + 0x5582) != unaff_s1[1])) ||
     ((*(ushort *)(unaff_s2 + 0x5584) != unaff_s1[2] ||
      (*(ushort *)(unaff_s2 + 0x5586) != unaff_s1[3])))) {
    cVar3 = FUN_80018b50();
    *(char *)(unaff_s1 + 9) = cVar3;
    if (cVar3 == '\x01') {
      uVar12 = 0x8000008;
    }
    if (*(char *)((int)unaff_s1 + 0x11) != '\0') {
      uVar12 = uVar12 | 0x10;
    }
    if ((char)unaff_s1[8] != '\0') {
      uVar12 = uVar12 | 0x20;
    }
    if (DAT_80025517 != '\0') {
      uVar12 = uVar12 | 0x80;
    }
    uVar1 = unaff_s1[2];
    if (0x118 < (short)uVar1) {
      if ((((short)uVar1 < 0x161) || ((short)uVar1 < 0x191)) || ((short)uVar1 < 0x231)) {
        (**(code **)(DAT_8002550c + 8))(*(undefined4 *)(DAT_8002550c + 0xc));
        return;
      }
      uVar12 = uVar12 | 3;
    }
    bVar2 = (short)unaff_s1[3] < 0x121;
    if ((char)unaff_s1[9] == '\0') {
      bVar2 = (short)unaff_s1[3] < 0x101;
    }
    if (!bVar2) {
      uVar12 = uVar12 | 0x24;
    }
    (**(code **)(DAT_8002550c + 0x10))(uVar12);
    *(undefined1 *)(unaff_s1 + 9) = 8;
  }
  if ((((DAT_80025588 != unaff_s1[4]) || (DAT_8002558a != unaff_s1[5])) ||
      (DAT_8002558c != unaff_s1[6])) ||
     ((DAT_8002558e != unaff_s1[7] || ((char)unaff_s1[9] == '\b')))) {
    cVar3 = FUN_80018b50();
    *(char *)(unaff_s1 + 9) = cVar3;
    iVar13 = (short)unaff_s1[5] + 0x13;
    if (cVar3 == '\0') {
      iVar13 = (short)unaff_s1[5] + 0x10;
    }
    puVar14 = (undefined1 *)(iVar13 + (short)unaff_s1[7]);
    if ((short)unaff_s1[7] == 0) {
      puVar14 = (undefined1 *)(iVar13 + 0xf0);
    }
    uVar1 = unaff_s1[2];
    uVar12 = 0;
    if (((0x118 < (short)uVar1) && (uVar12 = 1, 0x160 < (short)uVar1)) &&
       ((uVar12 = 2, 400 < (short)uVar1 && (uVar12 = 4, (short)uVar1 < 0x231)))) {
      uVar12 = 3;
    }
    iVar4 = ((uint)(byte)unaff_s1[9] * 5 + uVar12) * 4;
    iVar5 = (uint)*(ushort *)(&DAT_800255ea + iVar4) - (uint)*(ushort *)(&DAT_800255e8 + iVar4);
    puVar9 = (uint *)((uint)*(ushort *)(&DAT_800255e8 + iVar4) +
                     (int)(short)unaff_s1[4] * (uint)(byte)(&DAT_80025610)[uVar12]);
    if ((short)unaff_s1[6] != 0) {
      iVar5 = iVar5 * (short)unaff_s1[6] >> 8;
    }
    puVar7 = (uint *)((int)puVar9 + iVar5);
    if ((char)unaff_s1[9] == '\0') {
      puVar10 = (uint *)0x1f4;
      if ((499 < (int)puVar9) && (puVar10 = (uint *)0xcb2, (int)puVar9 < 0xcb3)) {
        puVar10 = puVar9;
      }
      puVar9 = puVar10 + (byte)(&DAT_80025610)[uVar12];
      if (((int)(puVar10 + (byte)(&DAT_80025610)[uVar12]) <= (int)puVar7) &&
         (puVar9 = (uint *)0xcda, (int)puVar7 < 0xcdb)) {
        puVar9 = puVar7;
      }
      if (iVar13 < 0x10) {
        puVar7 = (uint *)0x10;
      }
      else {
        puVar7 = (uint *)0x101;
        if (iVar13 < 0x102) {
          FUN_80013ec0(puVar10,iVar13);
          return;
        }
      }
      puVar11 = (undefined1 *)((int)puVar7 + 2);
      if (((int)puVar7 + 2 <= (int)puVar14) && (puVar11 = (undefined1 *)0x102, (int)puVar14 < 0x103)
         ) {
        puVar11 = puVar14;
      }
    }
    else {
      puVar10 = (uint *)0x21c;
      if ((0x21b < (int)puVar9) && (puVar10 = (uint *)0xc94, (int)puVar9 < 0xc95)) {
        puVar10 = puVar9;
      }
      puVar9 = puVar10 + (byte)(&DAT_80025610)[uVar12];
      if (((int)(puVar10 + (byte)(&DAT_80025610)[uVar12]) <= (int)puVar7) &&
         (puVar9 = (uint *)0xcbc, (int)puVar7 < 0xcbd)) {
        puVar9 = puVar7;
      }
      if (iVar13 < 0x13) {
        puVar7 = (uint *)&DAT_00000013;
      }
      else {
        puVar7 = (uint *)&DAT_0000012f;
        if (iVar13 < 0x130) {
          FUN_80013e30(puVar10,iVar13);
          return;
        }
      }
      uVar6 = (uint)((int)puVar14 < 0x132);
      puVar11 = (undefined1 *)((int)puVar7 + 2);
      if ((int)puVar7 + 2 <= (int)puVar14) {
        for (; puVar8 = puVar10, *puVar7 = uVar6 & uVar12 | (uint)puVar9, unaff_s1 != (ushort *)0x0;
            unaff_s1 = (ushort *)((int)unaff_s1 + -1)) {
          *(undefined1 *)((int)puVar8 + 3) = 0;
          uVar6 = *puVar8;
          puVar9 = (uint *)((uint)(puVar8 + 1) & 0x131);
          puVar10 = puVar8 + 1;
          puVar7 = puVar8;
        }
        DAT_800255d4 = 0x40255c0;
        *puVar8 = 0x255d4;
        return;
      }
    }
    (**(code **)(DAT_8002550c + 0x10))
              (((uint)puVar9 & 0xfff) << 0xc | (uint)puVar10 & 0xfff | 0x6000000);
    (**(code **)(DAT_8002550c + 0x10))(((uint)puVar11 & 0x3ff) << 10 | (uint)puVar7 | 0x7000000);
  }
  FUN_8001e44c(&DAT_80025580);
  return;
}

