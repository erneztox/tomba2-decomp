// FUN_08010428

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08010428(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined4 auStack_42c [240];
  undefined1 auStack_6a [34];
  undefined4 local_48 [10];
  
  func_0x0009a420(param_1,0,0x380);
  *param_1 = 0x53;
  param_1[1] = 0x43;
  param_1[2] = 0x11;
  param_1[3] = 1;
  puVar7 = (undefined4 *)&DAT_8018a054;
  puVar9 = (undefined4 *)(param_1 + 4);
  do {
    puVar8 = puVar9;
    puVar4 = puVar7;
    uVar10 = puVar4[1];
    uVar11 = puVar4[2];
    uVar12 = puVar4[3];
    *puVar8 = *puVar4;
    puVar8[1] = uVar10;
    puVar8[2] = uVar11;
    puVar8[3] = uVar12;
    puVar7 = puVar4 + 4;
    puVar9 = puVar8 + 4;
  } while (puVar4 + 4 != (undefined4 *)0x8018a084);
  puVar17 = param_1 + 0x14;
  uVar10 = puVar4[5];
  uVar2 = *(undefined2 *)(puVar4 + 6);
  uVar1 = *(undefined1 *)((int)puVar4 + 0x1a);
  puVar8[4] = uRam8018a084;
  puVar8[5] = uVar10;
  *(undefined2 *)(puVar8 + 6) = uVar2;
  *(undefined1 *)((int)puVar8 + 0x1a) = uVar1;
  puVar7 = (undefined4 *)&DAT_8018a02c;
  puVar9 = local_48;
  do {
    puVar8 = puVar9;
    puVar4 = puVar7;
    uVar10 = puVar4[1];
    uVar11 = puVar4[2];
    uVar12 = puVar4[3];
    *puVar8 = *puVar4;
    puVar8[1] = uVar10;
    puVar8[2] = uVar11;
    puVar8[3] = uVar12;
    puVar7 = puVar4 + 4;
    puVar9 = puVar8 + 4;
  } while (puVar4 + 4 != (undefined4 *)&DAT_8018a04c);
  uVar10 = puVar4[5];
  puVar8[4] = _DAT_8018a04c;
  puVar8[5] = uVar10;
  iVar3 = (int)((ulonglong)((longlong)(int)(DAT_800bf4df + 1) * 0x66666667) >> 0x20);
  iVar6 = DAT_800bf4df + 1;
  puVar16 = auStack_6a + 2;
  do {
    iVar13 = iVar3 >> 2;
    puVar15 = puVar16 + 2;
    func_0x0009a5b0(puVar16,local_48[iVar6 + iVar13 * -10]);
    iVar3 = (int)((ulonglong)((longlong)iVar13 * 0x66666667) >> 0x20);
    iVar6 = iVar13;
    puVar16 = puVar15;
  } while (iVar13 != 0);
  iVar3 = (int)puVar15 - (int)(auStack_6a + 2);
  while (iVar3 < 4) {
    func_0x0009a5b0(puVar15,local_48[0]);
    iVar3 = (int)(puVar15 + 2) - (int)(auStack_6a + 2);
    puVar15 = puVar15 + 2;
  }
  while (puVar16 = puVar15 + -2, auStack_6a + 2 <= puVar16) {
    *puVar17 = *puVar16;
    puVar17[1] = puVar15[-1];
    puVar17 = puVar17 + 2;
    puVar15 = puVar16;
  }
  puVar17 = param_1 + 0x1c;
  uVar5 = (_DAT_800bf878 / 0x1a5e0) % 1000;
  puVar7 = (undefined4 *)&DAT_8018a02c;
  puVar9 = local_48;
  do {
    puVar8 = puVar9;
    puVar4 = puVar7;
    uVar11 = puVar4[1];
    uVar12 = puVar4[2];
    uVar10 = puVar4[3];
    *puVar8 = *puVar4;
    puVar8[1] = uVar11;
    puVar8[2] = uVar12;
    puVar8[3] = uVar10;
    puVar7 = puVar4 + 4;
    puVar9 = puVar8 + 4;
  } while (puVar4 + 4 != (undefined4 *)&DAT_8018a04c);
  uVar10 = puVar4[5];
  puVar8[4] = _DAT_8018a04c;
  puVar8[5] = uVar10;
  iVar3 = (int)((ulonglong)((longlong)(int)uVar5 * 0x66666667) >> 0x20);
  puVar16 = auStack_6a + 2;
  do {
    uVar14 = iVar3 >> 2;
    puVar15 = puVar16 + 2;
    func_0x0009a5b0(puVar16,local_48[uVar5 + uVar14 * -10]);
    iVar3 = (int)((ulonglong)((longlong)(int)uVar14 * 0x66666667) >> 0x20);
    uVar5 = uVar14;
    puVar16 = puVar15;
  } while (uVar14 != 0);
  iVar3 = (int)puVar15 - (int)(auStack_6a + 2);
  while (iVar3 < 6) {
    func_0x0009a5b0(puVar15,local_48[0]);
    iVar3 = (int)(puVar15 + 2) - (int)(auStack_6a + 2);
    puVar15 = puVar15 + 2;
  }
  while (puVar15 = puVar15 + -2, auStack_6a + 2 <= puVar15) {
    *puVar17 = *puVar15;
    puVar17[1] = puVar15[1];
    puVar17 = puVar17 + 2;
  }
  puVar17 = param_1 + 0x24;
  uVar5 = (_DAT_800bf878 / 0x708) % 0x3c;
  puVar7 = (undefined4 *)&DAT_8018a02c;
  puVar9 = local_48;
  do {
    puVar8 = puVar9;
    puVar4 = puVar7;
    uVar11 = puVar4[1];
    uVar12 = puVar4[2];
    uVar10 = puVar4[3];
    *puVar8 = *puVar4;
    puVar8[1] = uVar11;
    puVar8[2] = uVar12;
    puVar8[3] = uVar10;
    puVar7 = puVar4 + 4;
    puVar9 = puVar8 + 4;
  } while (puVar4 + 4 != (undefined4 *)&DAT_8018a04c);
  uVar10 = puVar4[5];
  puVar8[4] = _DAT_8018a04c;
  puVar8[5] = uVar10;
  iVar3 = (int)((ulonglong)((longlong)(int)uVar5 * 0x66666667) >> 0x20);
  puVar16 = auStack_6a + 2;
  do {
    uVar14 = iVar3 >> 2;
    puVar15 = puVar16 + 2;
    func_0x0009a5b0(puVar16,local_48[uVar5 + uVar14 * -10]);
    iVar3 = (int)((ulonglong)((longlong)(int)uVar14 * 0x66666667) >> 0x20);
    uVar5 = uVar14;
    puVar16 = puVar15;
  } while (uVar14 != 0);
  iVar3 = (int)puVar15 - (int)(auStack_6a + 2);
  while (iVar3 < 4) {
    func_0x0009a5b0(puVar15,local_48[0]);
    iVar3 = (int)(puVar15 + 2) - (int)(auStack_6a + 2);
    puVar15 = puVar15 + 2;
  }
  while (puVar15 = puVar15 + -2, auStack_6a + 2 <= puVar15) {
    *puVar17 = *puVar15;
    puVar17[1] = puVar15[1];
    puVar17 = puVar17 + 2;
  }
  puVar17 = param_1 + 0x2a;
  uVar5 = (_DAT_800bf878 / 0x1e) % 0x3c;
  puVar7 = (undefined4 *)&DAT_8018a02c;
  puVar9 = local_48;
  do {
    puVar8 = puVar9;
    puVar4 = puVar7;
    uVar11 = puVar4[1];
    uVar12 = puVar4[2];
    uVar10 = puVar4[3];
    *puVar8 = *puVar4;
    puVar8[1] = uVar11;
    puVar8[2] = uVar12;
    puVar8[3] = uVar10;
    puVar7 = puVar4 + 4;
    puVar9 = puVar8 + 4;
  } while (puVar4 + 4 != (undefined4 *)&DAT_8018a04c);
  uVar10 = puVar4[5];
  puVar8[4] = _DAT_8018a04c;
  puVar8[5] = uVar10;
  iVar3 = (int)((ulonglong)((longlong)(int)uVar5 * 0x66666667) >> 0x20);
  puVar16 = auStack_6a + 2;
  do {
    uVar14 = iVar3 >> 2;
    puVar15 = puVar16 + 2;
    func_0x0009a5b0(puVar16,local_48[uVar5 + uVar14 * -10]);
    iVar3 = (int)((ulonglong)((longlong)(int)uVar14 * 0x66666667) >> 0x20);
    uVar5 = uVar14;
    puVar16 = puVar15;
  } while (uVar14 != 0);
  iVar3 = (int)puVar15 - (int)(auStack_6a + 2);
  while (iVar3 < 4) {
    func_0x0009a5b0(puVar15,local_48[0]);
    iVar3 = (int)(puVar15 + 2) - (int)(auStack_6a + 2);
    puVar15 = puVar15 + 2;
  }
  while (puVar16 = puVar15 + -2, auStack_6a + 2 <= puVar16) {
    *puVar17 = *puVar16;
    puVar17[1] = puVar15[-1];
    puVar17 = puVar17 + 2;
    puVar15 = puVar16;
  }
  puVar17 = param_1 + 0x30;
  puVar7 = (undefined4 *)&DAT_8018a02c;
  puVar9 = local_48;
  do {
    puVar8 = puVar9;
    puVar4 = puVar7;
    uVar11 = puVar4[1];
    uVar12 = puVar4[2];
    uVar10 = puVar4[3];
    *puVar8 = *puVar4;
    puVar8[1] = uVar11;
    puVar8[2] = uVar12;
    puVar8[3] = uVar10;
    puVar7 = puVar4 + 4;
    puVar9 = puVar8 + 4;
  } while (puVar4 + 4 != (undefined4 *)&DAT_8018a04c);
  uVar10 = puVar4[5];
  puVar8[4] = _DAT_8018a04c;
  puVar8[5] = uVar10;
  iVar3 = (int)((ulonglong)((longlong)(int)_DAT_800bf8aa * 0x66666667) >> 0x20);
  iVar6 = (int)_DAT_800bf8aa;
  puVar16 = auStack_6a + 2;
  do {
    iVar13 = (iVar3 >> 2) - (iVar6 >> 0x1f);
    puVar15 = puVar16 + 2;
    func_0x0009a5b0(puVar16,local_48[iVar6 + iVar13 * -10]);
    iVar3 = (int)((ulonglong)((longlong)iVar13 * 0x66666667) >> 0x20);
    iVar6 = iVar13;
    puVar16 = puVar15;
  } while (iVar13 != 0);
  iVar3 = (int)puVar15 - (int)(auStack_6a + 2);
  while (iVar3 < 6) {
    func_0x0009a5b0(puVar15,local_48[0]);
    iVar3 = (int)(puVar15 + 2) - (int)(auStack_6a + 2);
    puVar15 = puVar15 + 2;
  }
  while (puVar16 = puVar15 + -2, auStack_6a + 2 <= puVar16) {
    *puVar17 = *puVar16;
    puVar17[1] = puVar15[-1];
    puVar17 = puVar17 + 2;
    puVar15 = puVar16;
  }
  puVar17 = param_1 + 0x38;
  puVar7 = (undefined4 *)&DAT_8018a02c;
  puVar9 = local_48;
  do {
    puVar8 = puVar9;
    puVar4 = puVar7;
    uVar11 = puVar4[1];
    uVar12 = puVar4[2];
    uVar10 = puVar4[3];
    *puVar8 = *puVar4;
    puVar8[1] = uVar11;
    puVar8[2] = uVar12;
    puVar8[3] = uVar10;
    puVar7 = puVar4 + 4;
    puVar9 = puVar8 + 4;
  } while (puVar4 + 4 != (undefined4 *)&DAT_8018a04c);
  uVar10 = puVar4[5];
  puVar8[4] = _DAT_8018a04c;
  puVar8[5] = uVar10;
  iVar3 = (int)((ulonglong)((longlong)(int)_DAT_800bf8a8 * 0x66666667) >> 0x20);
  iVar6 = (int)_DAT_800bf8a8;
  puVar16 = auStack_6a + 2;
  do {
    iVar13 = (iVar3 >> 2) - (iVar6 >> 0x1f);
    puVar15 = puVar16 + 2;
    func_0x0009a5b0(puVar16,local_48[iVar6 + iVar13 * -10]);
    iVar3 = (int)((ulonglong)((longlong)iVar13 * 0x66666667) >> 0x20);
    iVar6 = iVar13;
    puVar16 = puVar15;
  } while (iVar13 != 0);
  iVar3 = (int)puVar15 - (int)(auStack_6a + 2);
  while (iVar3 < 6) {
    func_0x0009a5b0(puVar15,local_48[0]);
    iVar3 = (int)(puVar15 + 2) - (int)(auStack_6a + 2);
    puVar15 = puVar15 + 2;
  }
  while (puVar16 = puVar15 + -2, auStack_6a + 2 <= puVar16) {
    *puVar17 = *puVar16;
    puVar17[1] = puVar15[-1];
    puVar17 = puVar17 + 2;
    puVar15 = puVar16;
  }
  iVar3 = 0xb;
  puVar17 = param_1 + 0xb;
  do {
    puVar17[0x44] = 0;
    iVar3 = iVar3 + -1;
    puVar17 = puVar17 + -1;
  } while (-1 < iVar3);
  iVar3 = 3;
  puVar17 = param_1 + 3;
  *(undefined2 *)(param_1 + 0x50) = 3;
  param_1[0x52] = 0x43;
  param_1[0x53] = 0x52;
  param_1[0x54] = 0x44;
  param_1[0x55] = 0x30;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  do {
    puVar17[0x58] = 0;
    iVar3 = iVar3 + -1;
    puVar17 = puVar17 + -1;
  } while (-1 < iVar3);
  puVar9 = (undefined4 *)(param_1 + 0x180);
  puVar7 = (undefined4 *)&DAT_8018ffe4;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  uVar11 = _DAT_8018fecc;
  uVar10 = _DAT_8018fec8;
  *(undefined4 *)(param_1 + 0x60) = _DAT_8018fec4;
  *(undefined4 *)(param_1 + 100) = uVar10;
  *(undefined4 *)(param_1 + 0x68) = uVar11;
  uVar11 = _DAT_8018fed8;
  uVar10 = _DAT_8018fed4;
  *(undefined4 *)(param_1 + 0x6c) = _DAT_8018fed0;
  *(undefined4 *)(param_1 + 0x70) = uVar10;
  *(undefined4 *)(param_1 + 0x74) = uVar11;
  uVar10 = _DAT_8018fee0;
  *(undefined4 *)(param_1 + 0x78) = _DAT_8018fedc;
  *(undefined4 *)(param_1 + 0x7c) = uVar10;
  do {
    uVar11 = puVar7[1];
    uVar12 = puVar7[2];
    uVar10 = puVar7[3];
    *puVar9 = *puVar7;
    puVar9[1] = uVar11;
    puVar9[2] = uVar12;
    puVar9[3] = uVar10;
    puVar7 = puVar7 + 4;
    puVar9 = puVar9 + 4;
  } while (puVar7 != (undefined4 *)&DAT_80190064);
  puVar9 = (undefined4 *)(param_1 + 0x100);
  puVar7 = (undefined4 *)&DAT_8018ff64;
  do {
    uVar11 = puVar7[1];
    uVar12 = puVar7[2];
    uVar10 = puVar7[3];
    *puVar9 = *puVar7;
    puVar9[1] = uVar11;
    puVar9[2] = uVar12;
    puVar9[3] = uVar10;
    puVar7 = puVar7 + 4;
    puVar9 = puVar9 + 4;
  } while (puVar7 != (undefined4 *)&DAT_8018ffe4);
  puVar9 = (undefined4 *)(param_1 + 0x80);
  puVar7 = (undefined4 *)&DAT_8018fee4;
  do {
    uVar11 = puVar7[1];
    uVar12 = puVar7[2];
    uVar10 = puVar7[3];
    *puVar9 = *puVar7;
    puVar9[1] = uVar11;
    puVar9[2] = uVar12;
    puVar9[3] = uVar10;
    puVar7 = puVar7 + 4;
    puVar9 = puVar9 + 4;
  } while (puVar7 != (undefined4 *)&DAT_8018ff64);
  puVar9 = (undefined4 *)(param_1 + 0x300);
  puVar7 = (undefined4 *)&DAT_80190164;
  do {
    uVar11 = puVar7[1];
    uVar12 = puVar7[2];
    uVar10 = puVar7[3];
    *puVar9 = *puVar7;
    puVar9[1] = uVar11;
    puVar9[2] = uVar12;
    puVar9[3] = uVar10;
    puVar7 = puVar7 + 4;
    puVar9 = puVar9 + 4;
  } while (puVar7 != (undefined4 *)0x801901e4);
  puVar9 = (undefined4 *)(param_1 + 0x280);
  puVar7 = (undefined4 *)&DAT_801900e4;
  do {
    uVar11 = puVar7[1];
    uVar12 = puVar7[2];
    uVar10 = puVar7[3];
    *puVar9 = *puVar7;
    puVar9[1] = uVar11;
    puVar9[2] = uVar12;
    puVar9[3] = uVar10;
    puVar7 = puVar7 + 4;
    puVar9 = puVar9 + 4;
  } while (puVar7 != (undefined4 *)&DAT_80190164);
  puVar9 = (undefined4 *)(param_1 + 0x200);
  puVar7 = (undefined4 *)&DAT_80190064;
  do {
    uVar11 = puVar7[1];
    uVar12 = puVar7[2];
    uVar10 = puVar7[3];
    *puVar9 = *puVar7;
    puVar9[1] = uVar11;
    puVar9[2] = uVar12;
    puVar9[3] = uVar10;
    puVar7 = puVar7 + 4;
    puVar9 = puVar9 + 4;
  } while (puVar7 != (undefined4 *)&DAT_801900e4);
  return;
}

