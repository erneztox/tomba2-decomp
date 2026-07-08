
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8002a584(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  undefined1 *puVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  
  bVar2 = *(byte *)(param_1 + 4);
  pcVar7 = *(char **)(param_1 + 0x10);
  puVar8 = (undefined1 *)(param_1 + 0x50);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (3 < bVar2) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    iVar6 = 0;
    puVar5 = puVar8;
    if (bVar2 != 0) {
      return;
    }
    do {
      iVar6 = iVar6 + 1;
      uVar1 = FUN_8009a450();
      *puVar5 = uVar1;
      uVar1 = FUN_8009a450();
      puVar5[1] = uVar1;
      puVar5[2] = 0;
      bVar2 = FUN_8009a450();
      puVar5[3] = bVar2 & 0x1f;
      puVar5 = puVar5 + 4;
    } while (iVar6 < 10);
    *(undefined1 *)(param_1 + 4) = 1;
    if ((byte)pcVar7[2] < 4) {
      *(undefined1 *)(param_1 + 5) = 2;
    }
    else if ((byte)pcVar7[2] < 7) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  iVar6 = _DAT_800e7f40;
  if (((((DAT_800e7fc6 & 4) == 0) && (DAT_800e7fc6 != 0)) && ((byte)pcVar7[4] < 2)) &&
     (*pcVar7 != '\x01')) {
    if (*(char *)(param_1 + 5) == '\x01') {
      if (DAT_800e7fe4 == '\0') {
        *(short *)(param_1 + 0x2c) =
             *(short *)(_DAT_800e7f40 + 0x2c) +
             (short)(*(short *)(_DAT_800e7f40 + 0x18) * -0xb4 >> 0xc);
        iVar9 = *(short *)(iVar6 + 0x24) * -0xb4;
        sVar4 = -0x10;
      }
      else {
        *(short *)(param_1 + 0x2c) =
             *(short *)(_DAT_800e7f40 + 0x2c) +
             (short)(*(short *)(_DAT_800e7f40 + 0x1c) * -0xa0 >> 0xc);
        iVar9 = *(short *)(iVar6 + 0x28) * -0xa0;
        sVar4 = -0x38;
      }
    }
    else {
      *(short *)(param_1 + 0x2c) =
           *(short *)(_DAT_800e7f40 + 0x2c) +
           (short)(*(short *)(_DAT_800e7f40 + 0x1c) * -100 >> 0xc);
      iVar9 = *(short *)(iVar6 + 0x28) * -100;
      sVar4 = -0xc;
    }
    *(short *)(param_1 + 0x30) = *(short *)(iVar6 + 0x34) + (short)(iVar9 >> 0xc);
    *(short *)(param_1 + 0x2e) = *(short *)(iVar6 + 0x30) + sVar4;
    do {
      cVar3 = puVar8[3];
      puVar8[3] = cVar3 - 3U;
      if ((int)((uint)(byte)(cVar3 - 3U) << 0x18) < 1) {
        if (*(char *)(param_1 + 6) == '\x02') {
          bVar2 = FUN_8009a450();
          cVar3 = (bVar2 & 0xf) + 0x20;
        }
        else {
          bVar2 = FUN_8009a450();
          cVar3 = (bVar2 & 0xf) + 0x13;
        }
        puVar8[3] = cVar3;
        uVar1 = FUN_8009a450();
        *puVar8 = uVar1;
        uVar1 = FUN_8009a450();
        puVar8[1] = uVar1;
      }
      puVar8 = puVar8 + 4;
    } while ((int)puVar8 < param_1 + 0x78);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  return;
}

