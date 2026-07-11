// FUN_0801f0e0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801f0e0(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  char local_28 [8];
  
  bVar1 = 0;
  uVar4 = (uint)DAT_800bfa15;
  local_28[2] = 0;
  local_28[1] = 0;
  local_28[0] = '\0';
  do {
    uVar2 = uVar4 & 3;
    uVar4 = uVar4 >> 2;
    bVar1 = bVar1 + 1;
    local_28[uVar2] = local_28[uVar2] + '\x01';
  } while (bVar1 < 4);
  bVar1 = 0;
  uVar4 = 0;
  do {
    pcVar5 = local_28 + uVar4;
    if (*pcVar5 == '\x02') {
      bVar1 = func_0x0009a450();
      *pcVar5 = (bVar1 & 1) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar5 = -1;
    bVar1 = bVar1 + 1;
    uVar4 = (uint)bVar1;
  } while (bVar1 < 3);
  *(undefined1 *)(param_1 + 0x5f) = 0;
  uVar4 = 0;
  do {
    uVar6 = (int)(uint)DAT_800bfa15 >> ((3 - (uVar4 & 0xff)) * 2 & 0x1f) & 3;
    uVar2 = (uint)*(byte *)((uint)local_28 | uVar6);
    if (uVar2 == 0xff) {
      func_0x0009a450();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar3 = (byte *)(uVar6 | (uint)local_28);
    bVar1 = *pbVar3;
    *pbVar3 = bVar1 + 1;
    uVar2 = uVar2 + uVar6;
    if (2 < (byte)(bVar1 + 1)) {
      *pbVar3 = 1;
    }
    uVar4 = uVar4 + 1;
    *(char *)(param_1 + 0x5f) =
         *(char *)(param_1 + 0x5f) << 2 | (char)uVar2 + (char)((uVar2 & 0xff) / 3) * -3;
  } while ((uVar4 & 0xff) < 4);
  return;
}

