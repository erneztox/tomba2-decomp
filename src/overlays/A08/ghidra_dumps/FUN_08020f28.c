// FUN_08020f28

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08021028) */
/* WARNING: Removing unreachable block (ram,0x0802102c) */
/* WARNING: Removing unreachable block (ram,0x0011a04c) */

void FUN_08020f28(int param_1)

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
  undefined4 local_c8 [18];
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  
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
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  sVar3 = *(short *)(param_1 + 0x4e) + 1;
  *(short *)(param_1 + 0x4e) = sVar3;
  if (0x3b < sVar3) {
    *(undefined1 *)(param_1 + 4) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((sVar3 == 8) || (sVar3 == 0x32)) {
    local_d0 = *(undefined2 *)(iVar9 + 0x2e);
    local_ce = 0xde8e;
    local_cc = *(undefined2 *)(iVar9 + 0x36);
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
      *(undefined2 *)(iVar9 + 0x52) = local_80;
      *(undefined2 *)(iVar9 + 0x54) = local_7e;
      *(undefined2 *)(iVar9 + 0x56) = local_7c;
      *(undefined2 *)(iVar9 + 0x58) = local_7a;
      *(undefined2 *)(iVar9 + 0x5c) = local_78;
      *(undefined2 *)(iVar9 + 0x5e) = local_76;
      *(undefined2 *)(iVar9 + 0x60) = local_74;
      *(undefined2 *)(iVar9 + 0x62) = local_72;
      *(undefined2 *)(iVar9 + 0x5a) = 0xc;
      *(undefined2 *)(iVar9 + 0x50) = local_70;
      halt_baddata();
    }
  }
  return;
}

