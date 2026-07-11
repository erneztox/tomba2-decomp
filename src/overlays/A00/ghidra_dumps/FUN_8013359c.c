// FUN_8013359c

void FUN_8013359c(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
LAB_801336a0:
    if (DAT_800e7feb == '\x01') {
      return;
    }
    if ((DAT_800e7eaa < 0xc) &&
       (*(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38), *(int *)(param_1 + 0x38) != 0)) {
      if (DAT_800bf9e0 < 6) {
        if (0 < *(short *)(param_1 + 0x4e)) {
          func_0x8009a450();
          return;
        }
      }
      else if (0 < *(short *)(param_1 + 0x4e)) {
        func_0x8009a450();
        return;
      }
      iVar5 = func_0x8002b278(param_1);
      if (iVar5 != 0) {
        return;
      }
      func_0x80031780(param_1);
      goto LAB_8013c7d4;
    }
  }
  else {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8013c7cc();
      return;
    }
    if (bVar1 != 0) goto LAB_8013c7d4;
    if (DAT_800bf9e0 < 0x1c) {
      if (DAT_800bf9e0 < 6) {
        *(undefined2 *)(param_1 + 0x4e) = 7;
        FUN_8013c5c0();
        return;
      }
      *(undefined2 *)(param_1 + 0x4e) = 1;
      iVar5 = 1;
      psVar8 = (short *)(param_1 + 0x50);
      puVar6 = (undefined2 *)(param_1 + 0x56);
      do {
        sVar3 = func_0x80032a44(0,0x80);
        iVar5 = iVar5 + -1;
        *psVar8 = *(short *)(param_1 + 0x2c) + sVar3;
        sVar3 = func_0x80032a44(0xffffff80,0);
        psVar8 = psVar8 + 4;
        puVar6[-2] = *(short *)(param_1 + 0x2e) + sVar3;
        sVar3 = func_0x80032a44(0,0x20);
        puVar6[-1] = *(short *)(param_1 + 0x30) + sVar3;
        uVar4 = func_0x80032a44(0xe0,0x120);
        *puVar6 = uVar4;
        puVar6 = puVar6 + 4;
      } while (0 < iVar5);
      *(undefined1 *)(param_1 + 4) = 1;
      goto LAB_801336a0;
    }
  }
  *(undefined1 *)(param_1 + 4) = 3;
LAB_8013c7d4:
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 5) = 2;
  if (DAT_800e7eaa < 0xc) {
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    iVar5 = 0;
    if (0xb < DAT_800e7eaa) {
      *(undefined1 *)(param_1 + 5) = 1;
      FUN_801458c0();
      return;
    }
    iVar7 = -0x7feb40a0;
    iVar9 = param_1;
    do {
      if (((*(uint *)(iVar9 + 0xc) & 3) == 0) && (DAT_800e7eaa < 0xc)) {
        uVar2 = *(undefined1 *)(iVar7 + 8);
        iVar5 = func_0x80072ddc(0,3,2,3);
        if (iVar5 == 0) {
          return;
        }
        *(undefined4 *)(iVar5 + 0x1c) = 0x80145230;
        *(undefined1 *)(iVar5 + 3) = uVar2;
        *(undefined4 *)(iVar5 + 0x10) = 0;
        *(int *)(iVar5 + 0x14) = param_1;
        if (iVar5 == 0) {
          return;
        }
        *(undefined2 *)(iVar5 + 0x2e) = *(undefined2 *)(iVar7 + 2);
        *(undefined2 *)(iVar5 + 0x32) = *(undefined2 *)(iVar7 + 4);
        *(undefined2 *)(iVar5 + 0x36) = *(undefined2 *)(iVar7 + 6);
        *(undefined2 *)(iVar5 + 0x56) = *(undefined2 *)(iVar7 + 10);
        *(ushort *)(iVar5 + 0x62) = *(ushort *)(iVar5 + 0x62) | 2;
        *(uint *)(iVar9 + 0xc) = *(uint *)(iVar9 + 0xc) | 1;
        FUN_801458c0();
        return;
      }
      iVar9 = iVar9 + 4;
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar5 < 5);
  }
  return;
}

