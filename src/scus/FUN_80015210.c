
/* WARNING: Removing unreachable block (ram,0x8001537c) */

ulonglong FUN_80015210(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  ushort *puVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  undefined4 extraout_v1;
  undefined2 uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  undefined1 *puVar16;
  int iVar17;
  ushort *unaff_s0;
  ushort *puVar18;
  uint unaff_s1;
  undefined1 *puVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  
  FUN_8001577c();
  uVar12 = *(undefined2 *)(param_1 + 1);
  if (*(short *)(param_1 + 1) < 0) {
    uVar12 = 0;
  }
  else {
    uVar9 = (uint)(DAT_80025518 < *(short *)(param_1 + 1));
    if (uVar9 != 0) {
      return (ulonglong)CONCAT24(DAT_80025518,uVar9);
    }
  }
  iVar17 = (int)*(short *)((int)param_1 + 6);
  uVar5 = *(ushort *)((int)param_1 + 6);
  *(undefined2 *)(param_1 + 1) = uVar12;
  if (iVar17 < 0) {
    uVar5 = 0;
    iVar10 = 0;
  }
  else {
    iVar10 = (uint)uVar5 << 0x10;
    if (DAT_8002551a < iVar17) {
      param_1[1] = iVar10;
      uVar8 = FUN_800145b4((int)(((uint)unaff_s0[2] + (uint)*unaff_s0 + -1) * 0x10000) >> 0x10,
                           (int)(((uint)unaff_s0[1] + (uint)unaff_s0[3] + -1) * 0x10000) >> 0x10);
      param_1[2] = uVar8;
      uVar8 = FUN_8001464c((int)(short)unaff_s0[4],(int)(short)unaff_s0[5]);
      param_1[3] = uVar8;
      uVar8 = FUN_800144fc(*(undefined1 *)((int)unaff_s0 + 0x17),(char)unaff_s0[0xb],unaff_s0[10]);
      param_1[4] = uVar8;
      uVar20 = FUN_80014668(unaff_s0 + 6);
      uVar9 = (uint)((ulonglong)uVar20 >> 0x20);
      param_1[5] = (int)uVar20;
      param_1[6] = 0xe6000000;
      iVar17 = 7;
      if ((char)unaff_s0[0xc] == '\0') {
LAB_80014ce0:
        *(char *)((int)param_1 + 3) = (char)(iVar17 + -1);
        return CONCAT44(uVar9,iVar17 + -1);
      }
      puVar2 = *(ushort **)unaff_s0;
      uVar5 = unaff_s0[2];
      uVar1 = unaff_s0[3];
      uVar3 = 0;
      if ((-1 < (short)uVar5) && (uVar3 = DAT_80025518 - 1, (int)(short)uVar5 <= DAT_80025518 + -1))
      {
        uVar3 = uVar5;
      }
      if ((short)uVar1 < 0) {
        sVar4 = 0;
      }
      else {
        sVar4 = DAT_8002551a + -1;
        if ((int)(short)uVar1 <= DAT_8002551a + -1) {
          uVar21 = FUN_800143e8(uVar1);
          return uVar21;
        }
      }
      uVar9 = (uint)*unaff_s0;
      unaff_s1 = CONCAT22(sVar4,uVar3);
      iVar10 = 0x1c;
      if (((*unaff_s0 & 0x3f) == 0) && ((uVar3 & 0x3f) == 0)) {
        iVar17 = 10;
        uVar9 = (uint)(byte)unaff_s0[0xd] << 8 | 0x2000000;
        param_1[7] = (uint)*(byte *)((int)unaff_s0 + 0x1b) << 0x10 | uVar9 |
                     (uint)*(byte *)((int)unaff_s0 + 0x19);
        param_1[8] = puVar2;
        param_1[9] = unaff_s1;
        goto LAB_80014ce0;
      }
      param_4 = 0x20;
      iVar17 = 0x24;
      uVar5 = unaff_s0[4];
      puVar18 = unaff_s0;
      unaff_s0 = puVar2;
      goto LAB_800144e0;
    }
  }
  iVar10 = (int)*(short *)(param_1 + 1) * (iVar10 >> 0x10);
  *(ushort *)((int)param_1 + 6) = uVar5;
  iVar6 = iVar10 + 1;
  uVar9 = iVar6 - (iVar6 >> 0x1f);
  puVar18 = (ushort *)((int)uVar9 >> 5);
  if (0 < iVar6 / 2) {
    iVar17 = iVar6 / 2 + (int)puVar18 * -0x10;
    uVar9 = *DAT_8002561c;
    while ((uVar9 & 0x4000000) == 0) {
      uVar20 = FUN_800157b0();
      puVar14 = (uint *)((ulonglong)uVar20 >> 0x20);
      uVar8 = 0xffffffff;
      if ((int)uVar20 != 0) goto LAB_80015428;
      uVar9 = *DAT_8002561c;
    }
    *DAT_8002561c = 0x4000000;
    *DAT_80025618 = 0x1000000;
    *DAT_80025618 = 0xa0000000;
    *DAT_80025618 = *param_1;
    *DAT_80025618 = param_1[1];
    while (iVar17 = iVar17 + -1, iVar17 != -1) {
      uVar8 = *param_2;
      param_2 = param_2 + 1;
      *DAT_80025618 = uVar8;
    }
    puVar14 = (uint *)0x4000000;
    if (puVar18 != (ushort *)0x0) {
      *DAT_8002561c = 0x4000002;
      *DAT_80025620 = (int)param_2;
      puVar14 = DAT_80025624;
      *DAT_80025624 = (int)puVar18 << 0x10 | 0x10;
      *DAT_80025628 = 0x1000201;
    }
    uVar8 = 0;
LAB_80015428:
    return CONCAT44(puVar14,uVar8);
  }
  uVar5 = 0xffff;
LAB_800144e0:
  uVar1 = puVar18[5];
  *(uint *)(iVar10 + (int)param_1) =
       (uint)*(byte *)((int)puVar18 + 0x1b) << 0x10 | (uint)(byte)puVar18[0xd] << 8 | 0x60000000 |
       (uint)*(byte *)((int)puVar18 + 0x19);
  *(uint *)(param_4 + (int)param_1) =
       CONCAT22((short)((uint)unaff_s0 >> 0x10) - uVar1,(short)uVar9 - uVar5);
  *(uint *)(iVar17 + (int)param_1) = unaff_s1;
  iVar17 = *(short *)((int)param_1 + 10) + 0x13;
  if ((unaff_s1 & 0xff) == 0) {
    iVar17 = *(short *)((int)param_1 + 10) + 0x10;
  }
  puVar19 = (undefined1 *)(iVar17 + *(short *)((int)param_1 + 0xe));
  if (*(short *)((int)param_1 + 0xe) == 0) {
    puVar19 = (undefined1 *)(iVar17 + 0xf0);
  }
  sVar4 = *(short *)(param_1 + 1);
  uVar9 = 0;
  if ((((0x118 < sVar4) && (uVar9 = 1, 0x160 < sVar4)) && (uVar9 = 2, 400 < sVar4)) &&
     (uVar9 = 4, sVar4 < 0x231)) {
    uVar9 = 3;
  }
  iVar10 = ((uint)*(byte *)((int)param_1 + 0x12) * 5 + uVar9) * 4;
  iVar6 = (uint)*(ushort *)(&DAT_800255ea + iVar10) - (uint)*(ushort *)(&DAT_800255e8 + iVar10);
  puVar14 = (uint *)((uint)*(ushort *)(&DAT_800255e8 + iVar10) +
                    (int)*(short *)(param_1 + 2) * (uint)(byte)(&DAT_80025610)[uVar9]);
  if (*(short *)(param_1 + 3) != 0) {
    iVar6 = iVar6 * *(short *)(param_1 + 3) >> 8;
  }
  puVar11 = (uint *)((int)puVar14 + iVar6);
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    puVar15 = (uint *)0x1f4;
    if ((499 < (int)puVar14) && (puVar15 = (uint *)0xcb2, (int)puVar14 < 0xcb3)) {
      puVar15 = puVar14;
    }
    puVar14 = puVar15 + (byte)(&DAT_80025610)[uVar9];
    if (((int)(puVar15 + (byte)(&DAT_80025610)[uVar9]) <= (int)puVar11) &&
       (puVar14 = (uint *)0xcda, (int)puVar11 < 0xcdb)) {
      puVar14 = puVar11;
    }
    if (iVar17 < 0x10) {
      puVar11 = (uint *)0x10;
    }
    else {
      puVar11 = (uint *)0x101;
      if (iVar17 < 0x102) {
        uVar21 = FUN_80013ec0(puVar15,iVar17);
        return uVar21;
      }
    }
    puVar16 = (undefined1 *)((int)puVar11 + 2);
    if (((int)puVar11 + 2 <= (int)puVar19) && (puVar16 = (undefined1 *)0x102, (int)puVar19 < 0x103))
    {
      puVar16 = puVar19;
    }
  }
  else {
    puVar15 = (uint *)0x21c;
    if ((0x21b < (int)puVar14) && (puVar15 = (uint *)0xc94, (int)puVar14 < 0xc95)) {
      puVar15 = puVar14;
    }
    puVar14 = puVar15 + (byte)(&DAT_80025610)[uVar9];
    if (((int)(puVar15 + (byte)(&DAT_80025610)[uVar9]) <= (int)puVar11) &&
       (puVar14 = (uint *)0xcbc, (int)puVar11 < 0xcbd)) {
      puVar14 = puVar11;
    }
    if (iVar17 < 0x13) {
      puVar11 = (uint *)&DAT_00000013;
    }
    else {
      puVar11 = (uint *)&DAT_0000012f;
      if (iVar17 < 0x130) {
        uVar21 = FUN_80013e30(puVar15,iVar17);
        return uVar21;
      }
    }
    uVar7 = (uint)((int)puVar19 < 0x132);
    puVar16 = (undefined1 *)((int)puVar11 + 2);
    if ((int)puVar11 + 2 <= (int)puVar19) {
      for (; puVar13 = puVar15, *puVar11 = uVar7 & uVar9 | (uint)puVar14,
          param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)((int)param_1 + -1)) {
        *(undefined1 *)((int)puVar13 + 3) = 0;
        uVar7 = *puVar13;
        puVar14 = (uint *)((uint)(puVar13 + 1) & 0x131);
        puVar15 = puVar13 + 1;
        puVar11 = puVar13;
      }
      DAT_800255d4 = 0x40255c0;
      *puVar13 = 0x255d4;
      return CONCAT44(0x255c0,puVar13) | 0x400000000000000;
    }
  }
  (**(code **)(DAT_8002550c + 0x10))
            (((uint)puVar14 & 0xfff) << 0xc | (uint)puVar15 & 0xfff | 0x6000000);
  (**(code **)(DAT_8002550c + 0x10))(((uint)puVar16 & 0x3ff) << 10 | (uint)puVar11 | 0x7000000);
  FUN_8001e44c(&DAT_80025580,param_1,0x14);
  return CONCAT44(extraout_v1,param_1);
}

