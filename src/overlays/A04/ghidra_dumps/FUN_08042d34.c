// FUN_08042d34

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08042d34(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  short sVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_48 [10];
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  undefined2 local_1a;
  undefined2 local_16;
  
  puVar2 = (undefined4 *)&DAT_8010a4a4;
  puVar3 = local_48;
  do {
    puVar7 = puVar3;
    puVar6 = puVar2;
    uVar8 = puVar6[1];
    uVar9 = puVar6[2];
    uVar10 = puVar6[3];
    *puVar7 = *puVar6;
    puVar7[1] = uVar8;
    puVar7[2] = uVar9;
    puVar7[3] = uVar10;
    puVar2 = puVar6 + 4;
    puVar3 = puVar7 + 4;
  } while (puVar6 + 4 != (undefined4 *)&DAT_8010a4c4);
  uVar8 = puVar6[5];
  puVar7[4] = _DAT_8010a4c4;
  puVar7[5] = uVar8;
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 1) {
      sVar5 = *(short *)(param_1 + 0x2e) + 0x40;
      *(short *)(param_1 + 0x2e) = sVar5;
      if ((-0x2d4d < sVar5) &&
         (*(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01', *(char *)(param_1 + 3) == '\0'))
      {
        local_1e = *(undefined2 *)(param_1 + 0x2c);
        local_1a = *(undefined2 *)(param_1 + 0x2e);
        local_16 = *(undefined2 *)(param_1 + 0x30);
        func_0x0003116c(0x506,auStack_20,0xffffffce);
        DAT_800e7e87 = 2;
        halt_baddata();
      }
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      sVar5 = *(short *)(param_1 + 0x2e) + 0x40;
      *(short *)(param_1 + 0x2e) = sVar5;
      if (_DAT_800e7eb2 < sVar5) {
        if (*(char *)(param_1 + 3) == '\0') {
          DAT_800e7e81 = 0;
          DAT_800e7e87 = 1;
        }
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 2) {
        halt_baddata();
      }
      if ((*(char *)(param_1 + 3) == '\0') && ((_DAT_1f80017c & 7) == 0)) {
        local_1e = *(undefined2 *)(param_1 + 0x2c);
        local_1a = *(undefined2 *)(param_1 + 0x2e);
        local_16 = *(undefined2 *)(param_1 + 0x30);
        func_0x0003116c(0x506,auStack_20,0xffffffce);
      }
      cVar4 = *(char *)(param_1 + 0x2b) + -4;
      *(char *)(param_1 + 0x2b) = cVar4;
      if (cVar4 == '\b') {
        if (*(char *)(param_1 + 3) != '\0') {
          local_1e = *(undefined2 *)(param_1 + 0x2c);
          local_1a = *(undefined2 *)(param_1 + 0x2e);
          local_16 = *(undefined2 *)(param_1 + 0x30);
          func_0x0003116c(0x506,auStack_20,0xffffffce);
        }
        *(undefined1 *)(param_1 + 4) = 2;
      }
      *(int *)(param_1 + 0x50) = (uint)*(byte *)(param_1 + 0x2b) * 0x100 + 0x300030;
    }
    sVar5 = *(short *)(param_1 + 0x56) + 1;
    *(short *)(param_1 + 0x56) = sVar5;
    if ((9 < sVar5) && (*(undefined2 *)(param_1 + 0x56) = 0, *(char *)(param_1 + 3) == '\0')) {
      func_0x00074590(0x88,0,0);
    }
    *(undefined4 *)(param_1 + 0x3c) = local_48[*(short *)(param_1 + 0x56)];
    func_0x0002b278();
  }
  else {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(int *)(param_1 + 0x50) = 0x303030;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      bVar1 = *(byte *)(param_1 + 3);
      *(undefined1 *)(param_1 + 0x2b) = 0x30;
      *(undefined2 *)(param_1 + 0x48) = 0;
      *(undefined2 *)(param_1 + 0x4c) = 0;
      if (bVar1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 4) = 1;
      }
      else {
        if (bVar1 == 2) {
          *(short *)(param_1 + 0x4a) = 0xe00 - _DAT_800e7fc0;
        }
        else if (bVar1 == 3) {
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 4) = 1;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

