// FUN_0802184c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08021aec) */
/* WARNING: Removing unreachable block (ram,0x08021af0) */
/* WARNING: Removing unreachable block (ram,0x0011ab10) */
/* WARNING: Removing unreachable block (ram,0x08021c88) */
/* WARNING: Removing unreachable block (ram,0x08021c8c) */
/* WARNING: Removing unreachable block (ram,0x0011acac) */
/* WARNING: Removing unreachable block (ram,0x08021940) */
/* WARNING: Removing unreachable block (ram,0x08021944) */
/* WARNING: Removing unreachable block (ram,0x0011a964) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802184c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  short *psVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 local_188;
  undefined4 local_184;
  short local_180;
  short sStack_17e;
  short local_17c [2];
  undefined4 local_178;
  undefined2 local_174;
  undefined2 uStack_172;
  undefined2 local_170;
  undefined2 uStack_16e;
  undefined2 local_16c;
  undefined2 uStack_16a;
  undefined2 local_168 [15];
  undefined2 local_14a;
  undefined2 local_148;
  undefined2 local_146;
  undefined2 local_144;
  undefined2 local_142;
  undefined2 local_140;
  undefined2 local_13e;
  undefined2 local_13c;
  undefined2 local_13a;
  undefined4 local_c8 [27];
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x32) = 0xffa6;
    uVar2 = func_0x0009a450();
    *(ushort *)(param_1 + 0x48) = uVar2 | 1;
    uVar2 = func_0x0009a450();
    *(ushort *)(param_1 + 0x4a) = uVar2 | 1;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  sVar3 = *(short *)(param_1 + 0x4e) + 1;
  *(short *)(param_1 + 0x4e) = sVar3;
  iVar11 = (int)sVar3;
  if ((iVar11 == 0xbd) || (iVar11 == 0xcc)) {
    local_188 = _DAT_80109b58;
    local_184 = _DAT_80109b5c;
    iVar4 = func_0x00031220(0x914,&local_188,0xffffffe2);
    psVar6 = &local_180;
    puVar5 = (undefined4 *)&DAT_80109aa4;
    do {
      uVar8 = puVar5[1];
      uVar9 = puVar5[2];
      uVar10 = puVar5[3];
      *(undefined4 *)psVar6 = *puVar5;
      *(undefined4 *)(psVar6 + 2) = uVar8;
      *(undefined4 *)(psVar6 + 4) = uVar9;
      *(undefined4 *)(psVar6 + 6) = uVar10;
      puVar5 = puVar5 + 4;
      psVar6 = psVar6 + 8;
    } while (puVar5 != (undefined4 *)0x80109b54);
    *(undefined4 *)psVar6 = uRam80109b54;
    if (iVar4 != 0) {
      *(undefined2 *)(iVar4 + 0x52) = local_14a;
      *(undefined2 *)(iVar4 + 0x54) = local_148;
      *(undefined2 *)(iVar4 + 0x56) = local_146;
      *(undefined2 *)(iVar4 + 0x58) = local_144;
      *(undefined2 *)(iVar4 + 0x5c) = local_142;
      *(undefined2 *)(iVar4 + 0x5e) = local_140;
      *(undefined2 *)(iVar4 + 0x60) = local_13e;
      *(undefined2 *)(iVar4 + 0x62) = local_13c;
      *(undefined2 *)(iVar4 + 0x5a) = 0x40;
      *(undefined2 *)(iVar4 + 0x50) = local_13a;
    }
  }
  if (iVar11 == 0xc2) {
    uVar8 = func_0x000310f4(0x908,0xffffffec);
    *(undefined4 *)(param_1 + 0x10) = uVar8;
  }
  if ((0x166 < iVar11) && (*(int *)(param_1 + 0x10) != 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 2;
  }
  if ((iVar11 - 0xe4U < 0x85) && ((iVar11 - 0xc2U & 3) == 0)) {
    local_180 = 0x2f48;
    sStack_17e = 0xda20;
    local_17c[0] = 0x2134;
    iVar4 = func_0x00031220(0x914,&local_180,0xffffffe2);
    puVar7 = local_c8;
    puVar5 = (undefined4 *)&DAT_80109aa4;
    do {
      uVar8 = puVar5[1];
      uVar9 = puVar5[2];
      uVar10 = puVar5[3];
      *puVar7 = *puVar5;
      puVar7[1] = uVar8;
      puVar7[2] = uVar9;
      puVar7[3] = uVar10;
      puVar5 = puVar5 + 4;
      puVar7 = puVar7 + 4;
    } while (puVar5 != (undefined4 *)0x80109b54);
    *puVar7 = uRam80109b54;
    if (iVar4 != 0) {
      *(undefined2 *)(iVar4 + 0x52) = local_5c;
      *(undefined2 *)(iVar4 + 0x54) = local_5a;
      *(undefined2 *)(iVar4 + 0x56) = local_58;
      *(undefined2 *)(iVar4 + 0x58) = local_56;
      *(undefined2 *)(iVar4 + 0x5c) = local_54;
      *(undefined2 *)(iVar4 + 0x5e) = local_52;
      *(undefined2 *)(iVar4 + 0x60) = local_50;
      *(undefined2 *)(iVar4 + 0x62) = local_4e;
      *(undefined2 *)(iVar4 + 0x5a) = 6;
      *(undefined2 *)(iVar4 + 0x50) = local_4c;
    }
  }
  if ((0x16c < iVar11) && ((iVar11 - 0x16dU & 7) == 0)) {
    sStack_17e = _DAT_1f800162 + -0x4b0;
    uVar2 = func_0x0009a450();
    local_180 = _DAT_1f800160 + (uVar2 & 0x1ff) + -0x180;
    uVar2 = func_0x0009a450();
    local_17c[0] = _DAT_1f800164 + (uVar2 & 0x1ff) + -0x180;
    iVar11 = func_0x00031220(0x914,&local_180,0xffffffe2);
    puVar7 = &local_178;
    puVar5 = (undefined4 *)&DAT_80109aa4;
    do {
      uVar8 = puVar5[1];
      uVar9 = puVar5[2];
      uVar10 = puVar5[3];
      *puVar7 = *puVar5;
      puVar7[1] = uVar8;
      puVar7[2] = uVar9;
      puVar7[3] = uVar10;
      puVar5 = puVar5 + 4;
      puVar7 = puVar7 + 4;
    } while (puVar5 != (undefined4 *)0x80109b54);
    *puVar7 = uRam80109b54;
    if (iVar11 != 0) {
      *(undefined2 *)(iVar11 + 0x52) = (undefined2)local_178;
      *(undefined2 *)(iVar11 + 0x54) = local_178._2_2_;
      *(undefined2 *)(iVar11 + 0x56) = local_174;
      *(undefined2 *)(iVar11 + 0x58) = uStack_172;
      *(undefined2 *)(iVar11 + 0x5c) = local_170;
      *(undefined2 *)(iVar11 + 0x5e) = uStack_16e;
      *(undefined2 *)(iVar11 + 0x60) = local_16c;
      *(undefined2 *)(iVar11 + 0x62) = uStack_16a;
      *(undefined2 *)(iVar11 + 0x5a) = 0xf;
      *(undefined2 *)(iVar11 + 0x50) = local_168[0];
    }
  }
  if (*(short *)(param_1 + 0x4e) < 0x1ae) {
    return;
  }
  *(undefined1 *)(param_1 + 4) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

