
uint * FUN_80015274(void)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  int in_a3;
  uint *unaff_s0;
  uint *unaff_s1;
  undefined1 *puVar15;
  uint *unaff_s2;
  int unaff_s5;
  uint in_stack_00000010;
  uint in_stack_00000014;
  
  iVar13 = (int)*(short *)((int)unaff_s1 + 6);
  uVar4 = *(ushort *)((int)unaff_s1 + 6);
  *(undefined2 *)(unaff_s1 + 1) = 0;
  if (iVar13 < 0) {
    uVar4 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = (uint)uVar4 << 0x10;
    if (DAT_8002551a < iVar13) {
      unaff_s1[1] = uVar8;
      uVar8 = FUN_800145b4((int)(((uint)(ushort)unaff_s0[1] + (uint)(ushort)*unaff_s0 + -1) *
                                0x10000) >> 0x10,
                           (int)(((uint)*(ushort *)((int)unaff_s0 + 2) +
                                  (uint)*(ushort *)((int)unaff_s0 + 6) + -1) * 0x10000) >> 0x10);
      unaff_s1[2] = uVar8;
      uVar8 = FUN_8001464c((int)(short)(ushort)unaff_s0[2],
                           (int)(short)*(ushort *)((int)unaff_s0 + 10));
      unaff_s1[3] = uVar8;
      uVar8 = FUN_800144fc(*(undefined1 *)((int)unaff_s0 + 0x17),
                           *(undefined1 *)((int)unaff_s0 + 0x16),(ushort)unaff_s0[5]);
      unaff_s1[4] = uVar8;
      uVar8 = FUN_80014668(unaff_s0 + 3);
      unaff_s1[5] = uVar8;
      unaff_s1[6] = 0xe6000000;
      iVar13 = 7;
      if ((char)unaff_s0[6] == '\0') {
LAB_80014ce0:
        *(char *)((int)unaff_s1 + 3) = (char)(uint *)(iVar13 + -1);
        return (uint *)(iVar13 + -1);
      }
      in_stack_00000010 = *unaff_s0;
      uVar4 = (ushort)unaff_s0[1];
      uVar1 = *(ushort *)((int)unaff_s0 + 6);
      uVar2 = 0;
      if ((-1 < (short)uVar4) && (uVar2 = DAT_80025518 - 1, (int)(short)uVar4 <= DAT_80025518 + -1))
      {
        uVar2 = uVar4;
      }
      if ((short)uVar1 < 0) {
        sVar3 = 0;
      }
      else {
        sVar3 = DAT_8002551a + -1;
        if ((int)(short)uVar1 <= DAT_8002551a + -1) {
          puVar7 = (uint *)FUN_800143e8(uVar1);
          return puVar7;
        }
      }
      uVar8 = (uint)(ushort)*unaff_s0;
      in_stack_00000014 = CONCAT22(sVar3,uVar2);
      iVar14 = 0x1c;
      if ((((ushort)*unaff_s0 & 0x3f) == 0) && ((uVar2 & 0x3f) == 0)) {
        iVar13 = 10;
        unaff_s1[7] = (uint)*(byte *)((int)unaff_s0 + 0x1b) << 0x10 |
                      (uint)*(byte *)((int)unaff_s0 + 0x1a) << 8 | 0x2000000 |
                      (uint)*(byte *)((int)unaff_s0 + 0x19);
        unaff_s1[8] = in_stack_00000010;
        unaff_s1[9] = in_stack_00000014;
        goto LAB_80014ce0;
      }
      in_a3 = 0x20;
      iVar13 = 0x24;
      uVar4 = (ushort)unaff_s0[2];
      goto LAB_800144e0;
    }
  }
  iVar14 = (int)(short)unaff_s1[1] * ((int)uVar8 >> 0x10);
  *(ushort *)((int)unaff_s1 + 6) = uVar4;
  iVar5 = iVar14 + 1;
  uVar8 = iVar5 - (iVar5 >> 0x1f);
  unaff_s0 = (uint *)((int)uVar8 >> 5);
  if (0 < iVar5 / 2) {
    iVar13 = iVar5 / 2 + (int)unaff_s0 * -0x10;
    uVar8 = *DAT_8002561c;
    while( true ) {
      if ((uVar8 & 0x4000000) != 0) {
        uVar8 = 0xa0000000;
        *DAT_8002561c = 0x4000000;
        *DAT_80025618 = 0x1000000;
        if (unaff_s5 != 0) {
          uVar8 = 0xb0000000;
        }
        *DAT_80025618 = uVar8;
        *DAT_80025618 = *unaff_s1;
        *DAT_80025618 = unaff_s1[1];
        while (iVar13 = iVar13 + -1, iVar13 != -1) {
          uVar8 = *unaff_s2;
          unaff_s2 = unaff_s2 + 1;
          *DAT_80025618 = uVar8;
        }
        if (unaff_s0 != (uint *)0x0) {
          *DAT_8002561c = 0x4000002;
          *DAT_80025620 = (int)unaff_s2;
          *DAT_80025624 = (int)unaff_s0 << 0x10 | 0x10;
          *DAT_80025628 = 0x1000201;
        }
        return (uint *)0x0;
      }
      iVar14 = FUN_800157b0();
      if (iVar14 != 0) break;
      uVar8 = *DAT_8002561c;
    }
    return (uint *)0xffffffff;
  }
  uVar4 = 0xffff;
LAB_800144e0:
  in_stack_00000010 =
       CONCAT22(in_stack_00000010._2_2_ - *(ushort *)((int)unaff_s0 + 10),(short)uVar8 - uVar4);
  *(uint *)(iVar14 + (int)unaff_s1) =
       (uint)*(byte *)((int)unaff_s0 + 0x1b) << 0x10 |
       (uint)*(byte *)((int)unaff_s0 + 0x1a) << 8 | 0x60000000 |
       (uint)*(byte *)((int)unaff_s0 + 0x19);
  *(uint *)(in_a3 + (int)unaff_s1) = in_stack_00000010;
  *(uint *)(iVar13 + (int)unaff_s1) = in_stack_00000014;
  iVar13 = *(short *)((int)unaff_s1 + 10) + 0x13;
  if ((in_stack_00000014 & 0xff) == 0) {
    iVar13 = *(short *)((int)unaff_s1 + 10) + 0x10;
  }
  puVar15 = (undefined1 *)(iVar13 + *(short *)((int)unaff_s1 + 0xe));
  if (*(short *)((int)unaff_s1 + 0xe) == 0) {
    puVar15 = (undefined1 *)(iVar13 + 0xf0);
  }
  sVar3 = (short)unaff_s1[1];
  uVar8 = 0;
  if ((((0x118 < sVar3) && (uVar8 = 1, 0x160 < sVar3)) && (uVar8 = 2, 400 < sVar3)) &&
     (uVar8 = 4, sVar3 < 0x231)) {
    uVar8 = 3;
  }
  iVar14 = ((uint)*(byte *)((int)unaff_s1 + 0x12) * 5 + uVar8) * 4;
  iVar5 = (uint)*(ushort *)(&DAT_800255ea + iVar14) - (uint)*(ushort *)(&DAT_800255e8 + iVar14);
  puVar7 = (uint *)((uint)*(ushort *)(&DAT_800255e8 + iVar14) +
                   (int)(short)unaff_s1[2] * (uint)(byte)(&DAT_80025610)[uVar8]);
  if ((short)unaff_s1[3] != 0) {
    iVar5 = iVar5 * (short)unaff_s1[3] >> 8;
  }
  puVar9 = (uint *)((int)puVar7 + iVar5);
  if (*(char *)((int)unaff_s1 + 0x12) == '\0') {
    puVar11 = (uint *)0x1f4;
    if ((499 < (int)puVar7) && (puVar11 = (uint *)0xcb2, (int)puVar7 < 0xcb3)) {
      puVar11 = puVar7;
    }
    puVar7 = puVar11 + (byte)(&DAT_80025610)[uVar8];
    if (((int)(puVar11 + (byte)(&DAT_80025610)[uVar8]) <= (int)puVar9) &&
       (puVar7 = (uint *)0xcda, (int)puVar9 < 0xcdb)) {
      puVar7 = puVar9;
    }
    if (iVar13 < 0x10) {
      puVar9 = (uint *)0x10;
    }
    else {
      puVar9 = (uint *)0x101;
      if (iVar13 < 0x102) {
        puVar7 = (uint *)FUN_80013ec0(puVar11,iVar13);
        return puVar7;
      }
    }
    puVar12 = (undefined1 *)((int)puVar9 + 2);
    if (((int)puVar9 + 2 <= (int)puVar15) && (puVar12 = (undefined1 *)0x102, (int)puVar15 < 0x103))
    {
      puVar12 = puVar15;
    }
  }
  else {
    puVar11 = (uint *)0x21c;
    if ((0x21b < (int)puVar7) && (puVar11 = (uint *)0xc94, (int)puVar7 < 0xc95)) {
      puVar11 = puVar7;
    }
    puVar7 = puVar11 + (byte)(&DAT_80025610)[uVar8];
    if (((int)(puVar11 + (byte)(&DAT_80025610)[uVar8]) <= (int)puVar9) &&
       (puVar7 = (uint *)0xcbc, (int)puVar9 < 0xcbd)) {
      puVar7 = puVar9;
    }
    if (iVar13 < 0x13) {
      puVar9 = (uint *)&DAT_00000013;
    }
    else {
      puVar9 = (uint *)&DAT_0000012f;
      if (iVar13 < 0x130) {
        puVar7 = (uint *)FUN_80013e30(puVar11,iVar13);
        return puVar7;
      }
    }
    uVar6 = (uint)((int)puVar15 < 0x132);
    puVar12 = (undefined1 *)((int)puVar9 + 2);
    if ((int)puVar9 + 2 <= (int)puVar15) {
      for (; puVar10 = puVar11, *puVar9 = uVar6 & uVar8 | (uint)puVar7, unaff_s1 != (uint *)0x0;
          unaff_s1 = (uint *)((int)unaff_s1 + -1)) {
        *(undefined1 *)((int)puVar10 + 3) = 0;
        uVar6 = *puVar10;
        puVar7 = (uint *)((uint)(puVar10 + 1) & 0x131);
        puVar11 = puVar10 + 1;
        puVar9 = puVar10;
      }
      DAT_800255d4 = 0x40255c0;
      *puVar10 = 0x255d4;
      return puVar10;
    }
  }
  (**(code **)(DAT_8002550c + 0x10))
            (((uint)puVar7 & 0xfff) << 0xc | (uint)puVar11 & 0xfff | 0x6000000);
  (**(code **)(DAT_8002550c + 0x10))(((uint)puVar12 & 0x3ff) << 10 | (uint)puVar9 | 0x7000000);
  FUN_8001e44c(&DAT_80025580);
  return unaff_s1;
}

