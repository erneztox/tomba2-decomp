// FUN_8010710c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined1 * FUN_8010710c(void)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  
  func_0x8002288c(&DAT_800e7e80);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(DAT_800e7e80) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x80022760(&DAT_800e7e80);
  thunk_FUN_801183bc(&DAT_800e7e80);
  if (_DAT_800e7fd8 < 2) {
    FUN_8010f690(&DAT_800e7e80);
  }
  func_0x80022554();
  FUN_8010f87c();
  FUN_8010fd5c();
  puVar7 = _DAT_1f800154;
  DAT_1f800183 = DAT_1f80015c;
joined_r0x801071c0:
  do {
    puVar3 = puVar7;
    if (DAT_1f800183 == '\0') {
      FUN_8010f240();
      puVar4 = (undefined1 *)FUN_8010c928(&DAT_800e7e80);
      return puVar4;
    }
    pbVar6 = (byte *)*puVar3;
    DAT_1f800183 = DAT_1f800183 + -1;
    puVar7 = puVar3 + 1;
  } while ((*pbVar6 & 2) != 0);
  bVar1 = pbVar6[2];
  if (bVar1 == 1) goto LAB_80107224;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
LAB_801101dc:
      *(int *)(puVar3[0x32] + 0x40) = _DAT_ffffcfc8 + *(int *)(_DAT_ffffcfc8 + 8);
      func_0x80077cfc();
      *(undefined2 *)((int)puVar3 + 0x46) = 0x2d;
      *(char *)((int)puVar3 + 0xb) = *(char *)((int)puVar3 + 0xb) + '\x01';
      uVar2 = *(ushort *)((int)puVar3 + 0x46);
      *(ushort *)((int)puVar3 + 0x46) = uVar2 - 1;
      if (0 < (int)((uint)uVar2 << 0x10)) {
        return &DAT_800e7e80;
      }
      *(undefined2 *)((int)puVar3 + 0x46) = 0x2d;
      if (*(char *)((int)puVar3 + 0x4a) != '\f') {
        *(undefined1 *)((int)puVar3 + 0x4a) = 0xc;
        *(int *)(puVar3[0x32] + 0x40) = _DAT_800ecfc4 + *(int *)(_DAT_800ecfc4 + 8);
        func_0x80077cfc(puVar7,0x80139b24,0xc,7);
      }
      iVar5 = *(byte *)((int)puVar3 + 0xb) + 1;
      *(char *)((int)puVar3 + 0xb) = (char)iVar5;
      if (iVar5 == 0) {
        _DAT_800e7ec0 = _DAT_800e7ec0 - 1;
        if (_DAT_800e7ec0 != 0) {
          return (undefined1 *)((uint)_DAT_800e7ec0 << 0x10);
        }
      }
      func_0x80074590(0x1b,0,0);
      func_0x800315d4(&DAT_800e7eac);
      DAT_800e7e84 = 3;
      return (undefined1 *)0x3;
    }
  }
  else if (bVar1 != 4) goto LAB_801101dc;
  goto LAB_80107234;
LAB_80107224:
  if (pbVar6[3] == 1) {
LAB_80107234:
    FUN_8010efbc();
  }
  goto joined_r0x801071c0;
}

