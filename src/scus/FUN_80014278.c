
uint * FUN_80014278(uint *param_1)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  
  uVar12 = 0x8000000;
  if (1 < DAT_80025516) {
    (*DAT_80025510)(&DAT_8001030c,param_1);
  }
  (**(code **)(DAT_8002550c + 0x10))
            ((*(ushort *)((int)param_1 + 2) & 0x3ff) << 10 | (ushort)*param_1 & 0x3ff | 0x5000000);
  if ((((DAT_80025590 != param_1[4]) || (DAT_80025580 != (ushort)*param_1)) ||
      (DAT_80025582 != *(ushort *)((int)param_1 + 2))) ||
     ((DAT_80025584 != (ushort)param_1[1] || (DAT_80025586 != *(ushort *)((int)param_1 + 6))))) {
    cVar3 = FUN_80018b50();
    *(char *)((int)param_1 + 0x12) = cVar3;
    if (cVar3 == '\x01') {
      uVar12 = 0x8000008;
    }
    if (*(char *)((int)param_1 + 0x11) != '\0') {
      uVar12 = uVar12 | 0x10;
    }
    if ((char)param_1[4] != '\0') {
      uVar12 = uVar12 | 0x20;
    }
    if (DAT_80025517 != '\0') {
      uVar12 = uVar12 | 0x80;
    }
    uVar1 = (ushort)param_1[1];
    if (0x118 < (short)uVar1) {
      if ((((short)uVar1 < 0x161) || ((short)uVar1 < 0x191)) || ((short)uVar1 < 0x231)) {
        puVar4 = (uint *)(**(code **)(DAT_8002550c + 8))(*(undefined4 *)(DAT_8002550c + 0xc));
        return puVar4;
      }
      uVar12 = uVar12 | 3;
    }
    bVar2 = (short)*(ushort *)((int)param_1 + 6) < 0x121;
    if (*(char *)((int)param_1 + 0x12) == '\0') {
      bVar2 = (short)*(ushort *)((int)param_1 + 6) < 0x101;
    }
    if (!bVar2) {
      uVar12 = uVar12 | 0x24;
    }
    (**(code **)(DAT_8002550c + 0x10))(uVar12);
    *(undefined1 *)((int)param_1 + 0x12) = 8;
  }
  if ((((DAT_80025588 != (ushort)param_1[2]) || (DAT_8002558a != *(ushort *)((int)param_1 + 10))) ||
      (DAT_8002558c != (ushort)param_1[3])) ||
     ((DAT_8002558e != *(ushort *)((int)param_1 + 0xe) || (*(char *)((int)param_1 + 0x12) == '\b')))
     ) {
    cVar3 = FUN_80018b50();
    *(char *)((int)param_1 + 0x12) = cVar3;
    iVar13 = (short)*(ushort *)((int)param_1 + 10) + 0x13;
    if (cVar3 == '\0') {
      iVar13 = (short)*(ushort *)((int)param_1 + 10) + 0x10;
    }
    puVar14 = (undefined1 *)(iVar13 + (short)*(ushort *)((int)param_1 + 0xe));
    if ((short)*(ushort *)((int)param_1 + 0xe) == 0) {
      puVar14 = (undefined1 *)(iVar13 + 0xf0);
    }
    uVar1 = (ushort)param_1[1];
    uVar12 = 0;
    if (((0x118 < (short)uVar1) && (uVar12 = 1, 0x160 < (short)uVar1)) &&
       ((uVar12 = 2, 400 < (short)uVar1 && (uVar12 = 4, (short)uVar1 < 0x231)))) {
      uVar12 = 3;
    }
    iVar5 = ((uint)*(byte *)((int)param_1 + 0x12) * 5 + uVar12) * 4;
    iVar6 = (uint)*(ushort *)(&DAT_800255ea + iVar5) - (uint)*(ushort *)(&DAT_800255e8 + iVar5);
    puVar4 = (uint *)((uint)*(ushort *)(&DAT_800255e8 + iVar5) +
                     (int)(short)(ushort)param_1[2] * (uint)(byte)(&DAT_80025610)[uVar12]);
    if ((short)(ushort)param_1[3] != 0) {
      iVar6 = iVar6 * (short)(ushort)param_1[3] >> 8;
    }
    puVar8 = (uint *)((int)puVar4 + iVar6);
    if (*(char *)((int)param_1 + 0x12) == '\0') {
      puVar10 = (uint *)0x1f4;
      if ((499 < (int)puVar4) && (puVar10 = (uint *)0xcb2, (int)puVar4 < 0xcb3)) {
        puVar10 = puVar4;
      }
      puVar4 = puVar10 + (byte)(&DAT_80025610)[uVar12];
      if (((int)(puVar10 + (byte)(&DAT_80025610)[uVar12]) <= (int)puVar8) &&
         (puVar4 = (uint *)0xcda, (int)puVar8 < 0xcdb)) {
        puVar4 = puVar8;
      }
      if (iVar13 < 0x10) {
        puVar8 = (uint *)0x10;
      }
      else {
        puVar8 = (uint *)0x101;
        if (iVar13 < 0x102) {
          puVar4 = (uint *)FUN_80013ec0(puVar10,iVar13);
          return puVar4;
        }
      }
      puVar11 = (undefined1 *)((int)puVar8 + 2);
      if (((int)puVar8 + 2 <= (int)puVar14) && (puVar11 = (undefined1 *)0x102, (int)puVar14 < 0x103)
         ) {
        puVar11 = puVar14;
      }
    }
    else {
      puVar10 = (uint *)0x21c;
      if ((0x21b < (int)puVar4) && (puVar10 = (uint *)0xc94, (int)puVar4 < 0xc95)) {
        puVar10 = puVar4;
      }
      puVar4 = puVar10 + (byte)(&DAT_80025610)[uVar12];
      if (((int)(puVar10 + (byte)(&DAT_80025610)[uVar12]) <= (int)puVar8) &&
         (puVar4 = (uint *)0xcbc, (int)puVar8 < 0xcbd)) {
        puVar4 = puVar8;
      }
      if (iVar13 < 0x13) {
        puVar8 = (uint *)&DAT_00000013;
      }
      else {
        puVar8 = (uint *)&DAT_0000012f;
        if (iVar13 < 0x130) {
          puVar4 = (uint *)FUN_80013e30(puVar10,iVar13);
          return puVar4;
        }
      }
      uVar7 = (uint)((int)puVar14 < 0x132);
      puVar11 = (undefined1 *)((int)puVar8 + 2);
      if ((int)puVar8 + 2 <= (int)puVar14) {
        for (; puVar9 = puVar10, *puVar8 = uVar7 & uVar12 | (uint)puVar4, param_1 != (uint *)0x0;
            param_1 = (uint *)((int)param_1 + -1)) {
          *(undefined1 *)((int)puVar9 + 3) = 0;
          uVar7 = *puVar9;
          puVar4 = (uint *)((uint)(puVar9 + 1) & 0x131);
          puVar10 = puVar9 + 1;
          puVar8 = puVar9;
        }
        DAT_800255d4 = 0x40255c0;
        *puVar9 = 0x255d4;
        return puVar9;
      }
    }
    (**(code **)(DAT_8002550c + 0x10))
              (((uint)puVar4 & 0xfff) << 0xc | (uint)puVar10 & 0xfff | 0x6000000);
    (**(code **)(DAT_8002550c + 0x10))(((uint)puVar11 & 0x3ff) << 10 | (uint)puVar8 | 0x7000000);
  }
  FUN_8001e44c(&DAT_80025580,param_1,0x14);
  return param_1;
}

