// FUN_8010acc0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80125d64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8010acc0(void)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  
  func_0x8002288c(&DAT_800e7e80);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(DAT_800e7e80) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x80022760(&DAT_800e7e80);
  FUN_801130c4(&DAT_800e7e80);
  if (_DAT_800e7fd8 < 2) {
    FUN_8011334c(&DAT_800e7e80);
  }
  func_0x80022554();
  FUN_80113700();
  FUN_801138e8();
  puVar5 = _DAT_1f800154;
  DAT_1f800183 = DAT_1f80015c;
joined_r0x8010ad74:
  do {
    puVar2 = puVar5;
    if (DAT_1f800183 == '\0') {
      FUN_80112c0c();
      FUN_80112f14();
      FUN_8010e904(&DAT_800e7e80);
      return;
    }
    pbVar4 = (byte *)*puVar2;
    DAT_1f800183 = DAT_1f800183 + -1;
    puVar5 = puVar2 + 1;
  } while ((*pbVar4 & 2) != 0);
  bVar1 = pbVar4[2];
  if (bVar1 == 1) goto LAB_8010ade0;
  iVar3 = 4;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
LAB_80113d98:
      if (iVar3 == 0x1f800000) {
        if (*(char *)((int)puVar2 + 5) == '\0') {
          func_0x8007addc(puVar5);
          *(char *)((int)puVar2 + 0xb) = *(char *)((int)puVar2 + 0xb) + -1;
        }
        return;
      }
      DAT_800e7edf = 1;
      _DAT_800e7ef8 = 0x8002;
      if (_DAT_800e7ec8 < 1) {
        if (_DAT_800e7ec8 < 0) {
          _DAT_800e7ece = 0x80;
        }
        if (DAT_800e7e83 == '\0') {
          func_0x80146348(&DAT_800e7e80,_DAT_800e7f48);
        }
        if (DAT_800e7e81 != '\0') {
          FUN_8012e8a8(&DAT_800e7e80);
        }
        DAT_800e7eab = 0;
        FUN_8012ed70();
        return;
      }
      FUN_8012ed28();
      return;
    }
  }
  else {
    iVar3 = 7;
    if ((bVar1 != 4) && (bVar1 != 7)) goto LAB_80113d98;
  }
  goto LAB_8010adf0;
LAB_8010ade0:
  if (pbVar4[3] == 1) {
LAB_8010adf0:
    FUN_80112a60();
  }
  goto joined_r0x8010ad74;
}

