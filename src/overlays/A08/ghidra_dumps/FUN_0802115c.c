// FUN_0802115c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08021568) */
/* WARNING: Removing unreachable block (ram,0x0802156c) */
/* WARNING: Removing unreachable block (ram,0x0011a58c) */
/* WARNING: Removing unreachable block (ram,0x080213fc) */
/* WARNING: Removing unreachable block (ram,0x08021400) */
/* WARNING: Removing unreachable block (ram,0x0011a420) */
/* WARNING: Removing unreachable block (ram,0x08021708) */
/* WARNING: Removing unreachable block (ram,0x0802170c) */
/* WARNING: Removing unreachable block (ram,0x0011a72c) */
/* WARNING: Removing unreachable block (ram,0x08021290) */
/* WARNING: Removing unreachable block (ram,0x08021294) */
/* WARNING: Removing unreachable block (ram,0x0011a2b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802115c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  short *psVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined2 local_188;
  undefined2 local_186;
  undefined2 local_184;
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
  undefined2 local_168;
  undefined2 local_166;
  undefined2 local_164;
  undefined2 local_162;
  undefined2 local_160;
  undefined2 uStack_15e;
  undefined2 local_154;
  undefined2 local_152;
  undefined2 local_150;
  undefined2 local_14e;
  undefined2 local_14c;
  undefined2 local_14a;
  undefined2 local_148;
  undefined2 local_146;
  undefined2 local_144;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined2 uStack_c2;
  undefined2 local_c0;
  undefined2 uStack_be;
  undefined2 local_bc;
  undefined2 uStack_ba;
  undefined2 local_b8 [84];
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar12 = *(int *)(param_1 + 0x10);
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
  iVar13 = (int)sVar3;
  uVar6 = iVar13 - 0x30;
  if ((uVar6 < 0x6a) && (uVar6 == ((int)uVar6 / 0xe) * 0xe)) {
    func_0x00074590(0x33,0xfffffff9,0xf);
  }
  if (iVar13 == 0x16) {
    local_188 = *(undefined2 *)(iVar12 + 0x2e);
    local_186 = 0xddf8;
    local_184 = *(undefined2 *)(iVar12 + 0x36);
    iVar4 = func_0x00031220(0x914,&local_188,0xffffffe2);
    psVar7 = &local_180;
    puVar5 = (undefined4 *)&DAT_80109aa4;
    do {
      uVar10 = puVar5[1];
      uVar11 = puVar5[2];
      uVar9 = puVar5[3];
      *(undefined4 *)psVar7 = *puVar5;
      *(undefined4 *)(psVar7 + 2) = uVar10;
      *(undefined4 *)(psVar7 + 4) = uVar11;
      *(undefined4 *)(psVar7 + 6) = uVar9;
      puVar5 = puVar5 + 4;
      psVar7 = psVar7 + 8;
    } while (puVar5 != (undefined4 *)0x80109b54);
    *(undefined4 *)psVar7 = uRam80109b54;
    if (iVar4 != 0) {
      *(undefined2 *)(iVar4 + 0x52) = uStack_16e;
      *(undefined2 *)(iVar4 + 0x54) = local_16c;
      *(undefined2 *)(iVar4 + 0x56) = uStack_16a;
      *(undefined2 *)(iVar4 + 0x58) = local_168;
      *(undefined2 *)(iVar4 + 0x5c) = local_166;
      *(undefined2 *)(iVar4 + 0x5e) = local_164;
      *(undefined2 *)(iVar4 + 0x60) = local_162;
      *(undefined2 *)(iVar4 + 0x62) = local_160;
      *(undefined2 *)(iVar4 + 0x5a) = 0x40;
      *(undefined2 *)(iVar4 + 0x50) = uStack_15e;
    }
  }
  if (iVar13 - 0x22U < 0x7d) {
    if ((iVar13 - 0x22U & 7) == 0) {
      local_180 = *(short *)(iVar12 + 0x2e);
      sStack_17e = *(undefined2 *)(iVar12 + 0x32);
      local_17c[0] = *(short *)(iVar12 + 0x36);
      iVar4 = func_0x00031220(0x914,&local_180,0xffffffe2);
      puVar8 = &local_c8;
      puVar5 = (undefined4 *)&DAT_80109aa4;
      do {
        uVar10 = puVar5[1];
        uVar11 = puVar5[2];
        uVar9 = puVar5[3];
        *puVar8 = *puVar5;
        puVar8[1] = uVar10;
        puVar8[2] = uVar11;
        puVar8[3] = uVar9;
        puVar5 = puVar5 + 4;
        puVar8 = puVar8 + 4;
      } while (puVar5 != (undefined4 *)0x80109b54);
      *puVar8 = uRam80109b54;
      if (iVar4 != 0) {
        *(undefined2 *)(iVar4 + 0x52) = (undefined2)local_c8;
        *(undefined2 *)(iVar4 + 0x54) = local_c8._2_2_;
        *(undefined2 *)(iVar4 + 0x56) = local_c4;
        *(undefined2 *)(iVar4 + 0x58) = uStack_c2;
        *(undefined2 *)(iVar4 + 0x5c) = local_c0;
        *(undefined2 *)(iVar4 + 0x5e) = uStack_be;
        *(undefined2 *)(iVar4 + 0x60) = local_bc;
        *(undefined2 *)(iVar4 + 0x62) = uStack_ba;
        *(undefined2 *)(iVar4 + 0x5a) = 4;
        *(undefined2 *)(iVar4 + 0x50) = local_b8[0];
      }
    }
    if ((iVar13 - 0x22U & 1) == 0) {
      local_180 = *(short *)(iVar12 + 0x2e);
      sStack_17e = *(short *)(iVar12 + 0x32) + -400;
      local_17c[0] = *(short *)(iVar12 + 0x36) + -100;
      iVar12 = func_0x00031220(0x914,&local_180,0xffffffe2);
      puVar8 = &local_178;
      puVar5 = (undefined4 *)&DAT_80109aa4;
      do {
        uVar10 = puVar5[1];
        uVar11 = puVar5[2];
        uVar9 = puVar5[3];
        *puVar8 = *puVar5;
        puVar8[1] = uVar10;
        puVar8[2] = uVar11;
        puVar8[3] = uVar9;
        puVar5 = puVar5 + 4;
        puVar8 = puVar8 + 4;
      } while (puVar5 != (undefined4 *)0x80109b54);
      *puVar8 = uRam80109b54;
      if (iVar12 != 0) {
        *(undefined2 *)(iVar12 + 0x52) = local_154;
        *(undefined2 *)(iVar12 + 0x54) = local_152;
        *(undefined2 *)(iVar12 + 0x56) = local_150;
        *(undefined2 *)(iVar12 + 0x58) = local_14e;
        *(undefined2 *)(iVar12 + 0x5c) = local_14c;
        *(undefined2 *)(iVar12 + 0x5e) = local_14a;
        *(undefined2 *)(iVar12 + 0x60) = local_148;
        *(undefined2 *)(iVar12 + 0x62) = local_146;
        *(undefined2 *)(iVar12 + 0x5a) = 4;
        *(undefined2 *)(iVar12 + 0x50) = local_144;
      }
    }
  }
  if ((iVar13 - 0x9cU < 0x2d) && ((iVar13 - 0x9cU & 0xf) == 0)) {
    sStack_17e = _DAT_1f800162 + -800;
    uVar2 = func_0x0009a450();
    local_180 = _DAT_1f800160 + (uVar2 & 0x1ff) + -0x100;
    uVar2 = func_0x0009a450();
    local_17c[0] = _DAT_1f800164 + (uVar2 & 0x1ff) + 0x200;
    iVar12 = func_0x00031220(0x914,&local_180,0xffffffe2);
    puVar8 = &local_178;
    puVar5 = (undefined4 *)&DAT_80109aa4;
    do {
      uVar10 = puVar5[1];
      uVar11 = puVar5[2];
      uVar9 = puVar5[3];
      *puVar8 = *puVar5;
      puVar8[1] = uVar10;
      puVar8[2] = uVar11;
      puVar8[3] = uVar9;
      puVar5 = puVar5 + 4;
      puVar8 = puVar8 + 4;
    } while (puVar5 != (undefined4 *)0x80109b54);
    *puVar8 = uRam80109b54;
    if (iVar12 != 0) {
      *(undefined2 *)(iVar12 + 0x52) = (undefined2)local_178;
      *(undefined2 *)(iVar12 + 0x54) = local_178._2_2_;
      *(undefined2 *)(iVar12 + 0x56) = local_174;
      *(undefined2 *)(iVar12 + 0x58) = uStack_172;
      *(undefined2 *)(iVar12 + 0x5c) = local_170;
      *(undefined2 *)(iVar12 + 0x5e) = uStack_16e;
      *(undefined2 *)(iVar12 + 0x60) = local_16c;
      *(undefined2 *)(iVar12 + 0x62) = uStack_16a;
      *(undefined2 *)(iVar12 + 0x5a) = 0xf;
      *(undefined2 *)(iVar12 + 0x50) = local_168;
    }
  }
  if (iVar13 < 0xd2) {
    return;
  }
  *(undefined1 *)(param_1 + 4) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

