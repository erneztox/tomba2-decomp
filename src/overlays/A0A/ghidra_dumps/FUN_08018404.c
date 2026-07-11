// FUN_08018404

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0801842c) */
/* WARNING: Removing unreachable block (ram,0x08018430) */
/* WARNING: Removing unreachable block (ram,0x00111450) */

void FUN_08018404(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_40 [12];
  
  puVar5 = local_40;
  puVar4 = (undefined4 *)&DAT_80109198;
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
  } while (puVar4 != (undefined4 *)&DAT_801091c8);
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
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0xfe00;
    iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x4a));
    iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x4a));
    *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + (short)(iVar2 * 200 >> 0xc);
    *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + (short)(iVar3 * 200 >> 0xc);
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + -0x50;
  }
  uVar6 = local_40[*(byte *)(param_1 + 7)];
  bVar1 = *(char *)(param_1 + 7) + 1;
  *(byte *)(param_1 + 7) = bVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar6;
  if (bVar1 < 0xc) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 4) = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

