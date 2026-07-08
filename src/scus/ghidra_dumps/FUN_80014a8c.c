
uint * FUN_80014a8c(uint *param_1,uint *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar8 = FUN_8001451c((int)(short)(ushort)*param_2,(int)(short)*(ushort *)((int)param_2 + 2));
  param_1[1] = uVar8;
  uVar8 = FUN_800145b4((int)(((uint)(ushort)param_2[1] + (uint)(ushort)*param_2 + -1) * 0x10000) >>
                       0x10,(int)(((uint)*(ushort *)((int)param_2 + 2) +
                                   (uint)*(ushort *)((int)param_2 + 6) + -1) * 0x10000) >> 0x10);
  param_1[2] = uVar8;
  uVar8 = FUN_8001464c((int)(short)(ushort)param_2[2],(int)(short)*(ushort *)((int)param_2 + 10));
  param_1[3] = uVar8;
  uVar8 = FUN_800144fc(*(undefined1 *)((int)param_2 + 0x17),*(undefined1 *)((int)param_2 + 0x16),
                       (ushort)param_2[5]);
  param_1[4] = uVar8;
  uVar8 = FUN_80014668(param_2 + 3);
  param_1[5] = uVar8;
  param_1[6] = 0xe6000000;
  iVar14 = 7;
  if ((char)param_2[6] != '\0') {
    uVar8 = *param_2;
    uVar1 = (ushort)param_2[1];
    uVar2 = *(ushort *)((int)param_2 + 6);
    uVar3 = 0;
    if ((-1 < (short)uVar1) && (uVar3 = DAT_80025518 - 1, (int)(short)uVar1 <= DAT_80025518 + -1)) {
      uVar3 = uVar1;
    }
    if ((short)uVar2 < 0) {
      sVar4 = 0;
    }
    else {
      sVar4 = DAT_8002551a + -1;
      if ((int)(short)uVar2 <= DAT_8002551a + -1) {
        puVar9 = (uint *)FUN_800143e8(uVar2);
        return puVar9;
      }
    }
    local_14 = CONCAT22(sVar4,uVar3);
    if ((((ushort)*param_2 & 0x3f) != 0) || ((uVar3 & 0x3f) != 0)) {
      local_18 = CONCAT22(*(ushort *)((int)param_2 + 2) - *(ushort *)((int)param_2 + 10),
                          (ushort)*param_2 - (ushort)param_2[2]);
      param_1[7] = (uint)*(byte *)((int)param_2 + 0x1b) << 0x10 |
                   (uint)*(byte *)((int)param_2 + 0x1a) << 8 | 0x60000000 |
                   (uint)*(byte *)((int)param_2 + 0x19);
      param_1[8] = local_18;
      param_1[9] = local_14;
      iVar14 = *(short *)((int)param_1 + 10) + 0x13;
      if ((uVar3 & 0xff) == 0) {
        iVar14 = *(short *)((int)param_1 + 10) + 0x10;
      }
      puVar15 = (undefined1 *)(iVar14 + *(short *)((int)param_1 + 0xe));
      if (*(short *)((int)param_1 + 0xe) == 0) {
        puVar15 = (undefined1 *)(iVar14 + 0xf0);
      }
      sVar4 = (short)param_1[1];
      uVar8 = 0;
      if ((((0x118 < sVar4) && (uVar8 = 1, 0x160 < sVar4)) && (uVar8 = 2, 400 < sVar4)) &&
         (uVar8 = 4, sVar4 < 0x231)) {
        uVar8 = 3;
      }
      iVar5 = ((uint)*(byte *)((int)param_1 + 0x12) * 5 + uVar8) * 4;
      iVar6 = (uint)*(ushort *)(&DAT_800255ea + iVar5) - (uint)*(ushort *)(&DAT_800255e8 + iVar5);
      puVar9 = (uint *)((uint)*(ushort *)(&DAT_800255e8 + iVar5) +
                       (int)(short)param_1[2] * (uint)(byte)(&DAT_80025610)[uVar8]);
      if ((short)param_1[3] != 0) {
        iVar6 = iVar6 * (short)param_1[3] >> 8;
      }
      puVar10 = (uint *)((int)puVar9 + iVar6);
      if (*(char *)((int)param_1 + 0x12) == '\0') {
        puVar12 = (uint *)0x1f4;
        if ((499 < (int)puVar9) && (puVar12 = (uint *)0xcb2, (int)puVar9 < 0xcb3)) {
          puVar12 = puVar9;
        }
        puVar9 = puVar12 + (byte)(&DAT_80025610)[uVar8];
        if (((int)(puVar12 + (byte)(&DAT_80025610)[uVar8]) <= (int)puVar10) &&
           (puVar9 = (uint *)0xcda, (int)puVar10 < 0xcdb)) {
          puVar9 = puVar10;
        }
        if (iVar14 < 0x10) {
          puVar10 = (uint *)0x10;
        }
        else {
          puVar10 = (uint *)0x101;
          if (iVar14 < 0x102) {
            puVar9 = (uint *)FUN_80013ec0(puVar12,iVar14);
            return puVar9;
          }
        }
        puVar13 = (undefined1 *)((int)puVar10 + 2);
        if (((int)puVar10 + 2 <= (int)puVar15) &&
           (puVar13 = (undefined1 *)0x102, (int)puVar15 < 0x103)) {
          puVar13 = puVar15;
        }
      }
      else {
        puVar12 = (uint *)0x21c;
        if ((0x21b < (int)puVar9) && (puVar12 = (uint *)0xc94, (int)puVar9 < 0xc95)) {
          puVar12 = puVar9;
        }
        puVar9 = puVar12 + (byte)(&DAT_80025610)[uVar8];
        if (((int)(puVar12 + (byte)(&DAT_80025610)[uVar8]) <= (int)puVar10) &&
           (puVar9 = (uint *)0xcbc, (int)puVar10 < 0xcbd)) {
          puVar9 = puVar10;
        }
        if (iVar14 < 0x13) {
          puVar10 = (uint *)&DAT_00000013;
        }
        else {
          puVar10 = (uint *)&DAT_0000012f;
          if (iVar14 < 0x130) {
            puVar9 = (uint *)FUN_80013e30(puVar12,iVar14);
            return puVar9;
          }
        }
        uVar7 = (uint)((int)puVar15 < 0x132);
        puVar13 = (undefined1 *)((int)puVar10 + 2);
        if ((int)puVar10 + 2 <= (int)puVar15) {
          for (; puVar11 = puVar12, *puVar10 = uVar7 & uVar8 | (uint)puVar9, param_1 != (uint *)0x0;
              param_1 = (uint *)((int)param_1 + -1)) {
            *(undefined1 *)((int)puVar11 + 3) = 0;
            uVar7 = *puVar11;
            puVar9 = (uint *)((uint)(puVar11 + 1) & 0x131);
            puVar12 = puVar11 + 1;
            puVar10 = puVar11;
          }
          DAT_800255d4 = 0x40255c0;
          *puVar11 = 0x255d4;
          return puVar11;
        }
      }
      (**(code **)(DAT_8002550c + 0x10))
                (((uint)puVar9 & 0xfff) << 0xc | (uint)puVar12 & 0xfff | 0x6000000);
      (**(code **)(DAT_8002550c + 0x10))(((uint)puVar13 & 0x3ff) << 10 | (uint)puVar10 | 0x7000000);
      FUN_8001e44c(&DAT_80025580,param_1,0x14);
      return param_1;
    }
    iVar14 = 10;
    param_1[7] = (uint)*(byte *)((int)param_2 + 0x1b) << 0x10 |
                 (uint)*(byte *)((int)param_2 + 0x1a) << 8 | 0x2000000 |
                 (uint)*(byte *)((int)param_2 + 0x19);
    param_1[8] = uVar8;
    param_1[9] = local_14;
  }
  *(char *)((int)param_1 + 3) = (char)(uint *)(iVar14 + -1);
  return (uint *)(iVar14 + -1);
}

