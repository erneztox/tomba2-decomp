// FUN_8001cfc8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8001cfc8(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 auStack_20 [8];
  
  iVar2 = _DAT_1f800138;
  puVar7 = (undefined1 *)(_DAT_1f800138 + 0x48);
  *(undefined1 *)(_DAT_1f800138 + 0x6f) = 2;
  FUN_8001cf00(0);
  FUN_8001ce90(0xc,0,puVar7);
  local_28 = 1;
  local_27 = *(undefined1 *)(iVar2 + 0x66);
  bVar1 = false;
  FUN_8008a00c(*(undefined4 *)(iVar2 + 0x54),auStack_20);
LAB_8001d034:
  do {
    if ((DAT_800be0e4 & 0x10) != 0) {
LAB_8001d260:
      FUN_8001cf00(0);
      FUN_8001ce90(9,0,puVar7);
      DAT_800be0e4 = 0;
      FUN_80051fb4();
      return;
    }
    DAT_800be0e4 = DAT_800be0e4 | 0x80;
    if (!bVar1) {
      bVar1 = true;
      FUN_8001ceb0(200,puVar7);
    }
    iVar3 = FUN_8001ce90(9,0,puVar7);
  } while (iVar3 != 0);
  iVar3 = 0;
  FUN_8001cf94(*puVar7);
  FUN_8001ce90(0xd,&local_28,puVar7);
  FUN_8001ce90(2,auStack_20,puVar7);
LAB_8001d0bc:
  while (iVar4 = FUN_8001ce90(0x15,0,puVar7), iVar4 == 0) {
    while (DAT_1f800233 == '\x01') {
      FUN_80051f80(1);
    }
    iVar4 = FUN_8001ce90(0x1b,0,puVar7);
    if (iVar4 != 0) break;
    DAT_800be0e4 = DAT_800be0e4 & 0x7f;
    do {
      while( true ) {
        if ((DAT_800be0e4 & 0x10) != 0) goto LAB_8001d260;
        iVar4 = FUN_8001ce90(0x10,0,puVar7);
        iVar5 = iVar3 + 1;
        if (iVar4 == 0) break;
        iVar3 = iVar5;
        if (9 < iVar5 * 0x10000 >> 0x10) goto LAB_8001d034;
      }
      uVar6 = FUN_8008a110(puVar7);
      if ((*(uint *)(iVar2 + 0x54) <= uVar6) && (uVar6 <= *(uint *)(iVar2 + 0x58))) {
        FUN_8001cf00(1);
        iVar3 = 0;
        goto LAB_8001d1d8;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 * 0x10000 >> 0x10 < 10);
  }
  goto LAB_8001d034;
LAB_8001d1d8:
  if ((DAT_800be0e4 & 0x10) != 0) goto LAB_8001d260;
  iVar4 = FUN_8001ce90(0x10,0,puVar7);
  iVar5 = iVar3 + 1;
  if (iVar4 != 0) {
    iVar3 = iVar5;
    if (9 < iVar5 * 0x10000 >> 0x10) goto LAB_8001d034;
    goto LAB_8001d1d8;
  }
  uVar6 = FUN_8008a110(puVar7);
  if (uVar6 <= *(uint *)(iVar2 + 0x58)) {
    iVar3 = 0;
    FUN_80051f80(1);
    goto LAB_8001d1d8;
  }
  if (*(char *)(iVar2 + 0x67) != '\x01') goto LAB_8001d260;
  goto LAB_8001d0bc;
}

