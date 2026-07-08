
ushort * FUN_8008179c(ushort *param_1)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  uVar10 = 0x8000000;
  if (1 < DAT_800a59a2) {
    (*(code *)PTR_FUN_800a599c)(s_PutDispEnv__08x_____8001bfc8,param_1);
  }
  (**(code **)(PTR_PTR_800a5998 + 0x10))((param_1[1] & 0x3ff) << 10 | *param_1 & 0x3ff | 0x5000000);
  if ((((DAT_800a5a1c != *(int *)(param_1 + 8)) || (DAT_800a5a0c != *param_1)) ||
      (DAT_800a5a0e != param_1[1])) ||
     ((DAT_800a5a10 != param_1[2] || (DAT_800a5a12 != param_1[3])))) {
    cVar3 = FUN_80086604();
    *(char *)(param_1 + 9) = cVar3;
    if (cVar3 == '\x01') {
      uVar10 = 0x8000008;
    }
    if (*(char *)((int)param_1 + 0x11) != '\0') {
      uVar10 = uVar10 | 0x10;
    }
    if ((char)param_1[8] != '\0') {
      uVar10 = uVar10 | 0x20;
    }
    if (DAT_800a59a3 != '\0') {
      uVar10 = uVar10 | 0x80;
    }
    uVar1 = param_1[2];
    if (0x118 < (short)uVar1) {
      if ((short)uVar1 < 0x161) {
        uVar10 = uVar10 | 1;
      }
      else if ((short)uVar1 < 0x191) {
        uVar10 = uVar10 | 0x40;
      }
      else if ((short)uVar1 < 0x231) {
        uVar10 = uVar10 | 2;
      }
      else {
        uVar10 = uVar10 | 3;
      }
    }
    bVar2 = (short)param_1[3] < 0x121;
    if ((char)param_1[9] == '\0') {
      bVar2 = (short)param_1[3] < 0x101;
    }
    if (!bVar2) {
      uVar10 = uVar10 | 0x24;
    }
    (**(code **)(PTR_PTR_800a5998 + 0x10))(uVar10);
    *(undefined1 *)(param_1 + 9) = 8;
  }
  if (((DAT_800a5a14 == param_1[4]) && (DAT_800a5a16 == param_1[5])) &&
     ((DAT_800a5a18 == param_1[6] && ((DAT_800a5a1a == param_1[7] && ((char)param_1[9] != '\b'))))))
  goto LAB_80081c64;
  cVar3 = FUN_80086604();
  *(char *)(param_1 + 9) = cVar3;
  uVar10 = (int)(short)param_1[5] + 0x13;
  if (cVar3 == '\0') {
    uVar10 = (int)(short)param_1[5] + 0x10;
  }
  uVar11 = uVar10 + (int)(short)param_1[7];
  if ((short)param_1[7] == 0) {
    uVar11 = uVar10 + 0xf0;
  }
  uVar1 = param_1[2];
  iVar9 = 0;
  if ((((0x118 < (short)uVar1) && (iVar9 = 1, 0x160 < (short)uVar1)) &&
      (iVar9 = 2, 400 < (short)uVar1)) && (iVar9 = 4, (short)uVar1 < 0x231)) {
    iVar9 = 3;
  }
  iVar4 = ((uint)(byte)param_1[9] * 5 + iVar9) * 4;
  iVar5 = (uint)*(ushort *)(&DAT_800a5a76 + iVar4) - (uint)*(ushort *)(&DAT_800a5a74 + iVar4);
  uVar7 = (uint)*(ushort *)(&DAT_800a5a74 + iVar4) +
          (int)(short)param_1[4] * (uint)(byte)(&DAT_800a5a9c)[iVar9];
  if ((short)param_1[6] != 0) {
    iVar5 = iVar5 * (short)param_1[6] >> 8;
  }
  uVar6 = uVar7 + iVar5;
  if ((char)param_1[9] == '\0') {
    uVar8 = 500;
    if ((499 < (int)uVar7) && (uVar8 = 0xcb2, (int)uVar7 < 0xcb3)) {
      uVar8 = uVar7;
    }
    uVar7 = uVar8 + (uint)(byte)(&DAT_800a5a9c)[iVar9] * 4;
    if (((int)uVar7 <= (int)uVar6) && (uVar7 = 0xcda, (int)uVar6 < 0xcdb)) {
      uVar7 = uVar6;
    }
    if ((int)uVar10 < 0x10) {
      uVar6 = 0x10;
    }
    else {
      uVar6 = 0x101;
      if ((int)uVar10 < 0x102) {
        uVar6 = uVar10;
      }
    }
    uVar10 = uVar6 + 2;
    bVar2 = (int)uVar11 < 0x103;
    if ((int)uVar10 <= (int)uVar11) {
      uVar10 = 0x102;
      goto LAB_80081bfc;
    }
  }
  else {
    uVar8 = 0x21c;
    if ((0x21b < (int)uVar7) && (uVar8 = 0xc94, (int)uVar7 < 0xc95)) {
      uVar8 = uVar7;
    }
    uVar7 = uVar8 + (uint)(byte)(&DAT_800a5a9c)[iVar9] * 4;
    if (((int)uVar7 <= (int)uVar6) && (uVar7 = 0xcbc, (int)uVar6 < 0xcbd)) {
      uVar7 = uVar6;
    }
    if ((int)uVar10 < 0x13) {
      uVar6 = 0x13;
    }
    else {
      uVar6 = 0x12f;
      if ((int)uVar10 < 0x130) {
        uVar6 = uVar10;
      }
    }
    bVar2 = (int)uVar11 < 0x132;
    uVar10 = uVar6 + 2;
    if ((int)(uVar6 + 2) <= (int)uVar11) {
      uVar10 = 0x131;
LAB_80081bfc:
      if (bVar2) {
        uVar10 = uVar11;
      }
    }
  }
  (**(code **)(PTR_PTR_800a5998 + 0x10))((uVar7 & 0xfff) << 0xc | uVar8 & 0xfff | 0x6000000);
  (**(code **)(PTR_PTR_800a5998 + 0x10))((uVar10 & 0x3ff) << 10 | uVar6 & 0x3ff | 0x7000000);
LAB_80081c64:
  FUN_8009a3e0(&DAT_800a5a0c,param_1,0x14);
  return param_1;
}

