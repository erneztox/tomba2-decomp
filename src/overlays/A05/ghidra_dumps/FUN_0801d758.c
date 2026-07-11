// FUN_0801d758

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0801d758(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte local_20 [8];
  byte local_18 [8];
  byte local_10 [8];
  
  local_18[1] = '\0';
  local_18[0] = 0;
  iVar5 = 0;
  do {
    iVar1 = iVar5 + 1;
    local_20[iVar5] = 0xff;
    local_10[iVar5] = 0xff;
    local_10[iVar5 + 2] = 0xff;
    iVar5 = iVar1;
  } while (iVar1 < 2);
  uVar3 = (uint)DAT_800bfa15;
  uVar2 = 0;
  bVar6 = 0;
  do {
    bVar7 = bVar6;
    if ((uVar3 & 3) == param_2) {
      bVar7 = bVar6 + 1;
      local_20[bVar6] = (byte)(1 << (uVar2 & 0x1f));
    }
    uVar2 = uVar2 + 1;
    uVar3 = uVar3 >> 2;
    bVar6 = bVar7;
  } while ((int)uVar2 < 4);
  iVar5 = 0;
  do {
    uVar3 = (uint)DAT_800bfa15;
    uVar2 = 0;
    pbVar4 = local_18 + iVar5;
    do {
      if ((uVar3 & 3) == ((int)(param_2 + iVar5 + 1) % 3 & 0xffU)) {
        local_10[iVar5 * 2 + (uint)*pbVar4] = (byte)(1 << (uVar2 & 0x1f));
        *pbVar4 = *pbVar4 + 1;
      }
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 >> 2;
    } while ((int)uVar2 < 4);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  if ((DAT_800bf9bc & 0x30) == param_2 << 4) {
    if (bVar7 == 0) {
      uVar2 = func_0x0009a450();
      bVar6 = local_10[(uVar2 & 1) * 2 + 1];
    }
    else {
      if (bVar7 != 1) {
        if ((local_18[0] == 1) && (local_18[1] == '\x01')) {
          return 0x36;
        }
        if (local_18[0] == 2) {
          local_10[3] = local_10[1];
        }
        if (local_10[3] == 2) {
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar2 = func_0x0009a450();
      if ((uVar2 & 3) == 0) {
        return 0x36;
      }
      local_20[0] = local_10[1];
      bVar6 = local_10[3];
      if (local_10[1] != 0xff) goto joined_r0x0801d9c4;
    }
    local_20[0] = bVar6;
    if (local_20[0] == 2) {
      halt_baddata();
    }
    if (2 < local_20[0]) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar7 == 0) {
      return 0x36;
    }
joined_r0x0801d9c4:
    if (local_20[0] == 2) {
      halt_baddata();
    }
    if (2 < local_20[0]) {
      if (local_20[0] == 4) {
        halt_baddata();
      }
      if (local_20[0] == 8) {
        halt_baddata();
      }
      return 0x36;
    }
  }
  if (local_20[0] == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

