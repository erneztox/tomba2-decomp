// FUN_08018d0c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018d0c(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  
  iVar2 = _DAT_1f80024c;
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar8 = 0;
    if (bVar1 != 0) {
      halt_baddata();
    }
    puVar12 = (uint *)&DAT_80126e0c;
    uVar11 = 0x7d;
    uVar10 = 0;
    do {
      uVar9 = uVar10 & 0xff;
      uVar5 = uVar11 & 0xff;
      iVar3 = 0x40 - iVar8;
      if (0x3b < iVar8 - 2U) {
        uVar5 = 0;
        uVar9 = 0;
      }
      *puVar12 = uVar9 | uVar5 << 8 | uVar5 << 0x10;
      puVar12 = puVar12 + 1;
      uVar11 = uVar11 - 2;
      pcVar4 = (char *)(iVar8 + -0x7fed90f4);
      iVar8 = iVar8 + 1;
      *pcVar4 = (char)(iVar3 >> 3) + '\x02';
      uVar10 = uVar10 + 5;
    } while (iVar8 < 0x40);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  puVar7 = (undefined4 *)&DAT_80126e04;
  iVar8 = 0x3f;
  puVar6 = (undefined4 *)&DAT_80126e08;
  do {
    iVar8 = iVar8 + -1;
    *puVar7 = puVar6[-3];
    puVar7 = puVar7 + -2;
    *puVar6 = puVar6[-2];
    puVar6 = puVar6 + -2;
  } while (0 < iVar8);
  _DAT_80126c0c = *(undefined2 *)(iVar2 + 0x2e);
  _DAT_80126c0e = *(undefined2 *)(iVar2 + 0x32);
  _DAT_80126c10 = *(undefined2 *)(iVar2 + 0x36);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar2 + 1);
  if (*(short *)(iVar2 + 4) == 0x601) {
    return;
  }
  *(undefined1 *)(param_1 + 4) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

