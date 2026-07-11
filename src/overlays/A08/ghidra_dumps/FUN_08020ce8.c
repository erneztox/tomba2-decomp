// FUN_08020ce8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08020de4) */
/* WARNING: Removing unreachable block (ram,0x08020de8) */
/* WARNING: Removing unreachable block (ram,0x00119e08) */

void FUN_08020ce8(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined2 local_d0;
  undefined2 local_ce;
  undefined2 local_cc;
  undefined4 local_c8 [4];
  undefined2 local_b6;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined2 local_a8;
  undefined2 uStack_a6;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar9 = *(int *)(param_1 + 0x10);
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
    *(undefined2 *)(param_1 + 0x4c) = 5;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  sVar3 = *(short *)(param_1 + 0x4e) + 1;
  *(short *)(param_1 + 0x4e) = sVar3;
  if ((sVar3 == 0x1e) || (sVar3 == 0xdb)) {
    local_d0 = *(undefined2 *)(*(int *)(iVar9 + 0xd0) + 0x2c);
    local_ce = 0xddf8;
    local_cc = *(undefined2 *)(*(int *)(iVar9 + 0xd0) + 0x34);
    iVar9 = func_0x00031220(0x914,&local_d0,0xffffffe2);
    puVar5 = local_c8;
    puVar4 = (undefined4 *)&DAT_80109aa4;
    do {
      uVar6 = puVar4[1];
      uVar7 = puVar4[2];
      uVar8 = puVar4[3];
      *puVar5 = *puVar4;
      puVar5[1] = uVar6;
      puVar5[2] = uVar7;
      puVar5[3] = uVar8;
      puVar4 = puVar4 + 4;
      puVar5 = puVar5 + 4;
    } while (puVar4 != (undefined4 *)0x80109b54);
    *puVar5 = uRam80109b54;
    if (iVar9 != 0) {
      *(undefined2 *)(iVar9 + 0x52) = local_b6;
      *(undefined2 *)(iVar9 + 0x54) = local_b4;
      *(undefined2 *)(iVar9 + 0x56) = local_b2;
      *(undefined2 *)(iVar9 + 0x58) = local_b0;
      *(undefined2 *)(iVar9 + 0x5c) = local_ae;
      *(undefined2 *)(iVar9 + 0x5e) = local_ac;
      *(undefined2 *)(iVar9 + 0x60) = local_aa;
      *(undefined2 *)(iVar9 + 0x62) = local_a8;
      *(undefined2 *)(iVar9 + 0x5a) = 0x10;
      *(undefined2 *)(iVar9 + 0x50) = uStack_a6;
    }
  }
  if (sVar3 < 600) {
    return;
  }
  *(undefined1 *)(param_1 + 4) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

