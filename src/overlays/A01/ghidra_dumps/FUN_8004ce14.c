// FUN_8004ce14

void FUN_8004ce14(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    if (DAT_800bf873 != '\0') {
      param_1[4] = 3;
      return;
    }
    param_1[4] = 1;
    *param_1 = 1;
    uVar2 = *(undefined4 *)(&DAT_800a3f00 + (uint)(byte)param_1[3] * 4);
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    FUN_8004b354(param_1,0);
  }
  if (DAT_800bf870 == '\0') {
    if (param_1[3] == '\x01') {
      if (DAT_1f800207 < 0x1c) goto LAB_8004cf64;
    }
    else if ((param_1[3] != '\x02') || (0x1b < DAT_1f800207)) {
LAB_8004cf64:
      uVar7 = 0;
      pcVar8 = *(char **)(param_1 + 0x6c);
      *(undefined4 *)(param_1 + 0x70) = 0;
      psVar5 = (short *)(pcVar8 + 8);
      do {
        iVar3 = -1;
        if (*pcVar8 != -1) {
          bVar1 = *(byte *)(psVar5 + -3);
          if ((bVar1 & 0x80) == 0) {
            iVar4 = FUN_8004d7ec((int)psVar5[1],0);
            iVar3 = 0;
            if (iVar4 != 0) goto LAB_8004cff4;
          }
          uVar6 = 1 << (uVar7 & 0x1f);
          iVar3 = 0;
          if ((*(uint *)(param_1 + 0x74) & uVar6) == 0) {
            if ((bVar1 & 0x80) != 0) {
              iVar4 = FUN_8004d868((int)psVar5[1],0);
              iVar3 = 0;
              if (iVar4 != 0) goto LAB_8004cff4;
            }
            iVar3 = 0;
            if ((*(uint *)(param_1 + 0x74) & uVar6) == 0) {
              iVar3 = 1;
            }
          }
        }
LAB_8004cff4:
        if (iVar3 < 0) {
          *(short *)(param_1 + 0x6a) = (short)uVar7;
          param_1[0xb] = 0x1f;
          param_1[1] = 1;
          FUN_80077efc();
          return;
        }
        if (iVar3 != 0) {
          if ((DAT_800bf870 == '\x01') && (0xe < DAT_800bf871)) {
            iVar3 = func_0x80111ccc((char)psVar5[2]);
          }
          else {
            iVar3 = FUN_80077acc(param_1,(int)psVar5[-2],(int)psVar5[-1],(int)*psVar5);
          }
          if (iVar3 != 0) {
            *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1 << (uVar7 & 0x1f);
          }
        }
        uVar7 = uVar7 + 1;
        psVar5 = psVar5 + 8;
        pcVar8 = pcVar8 + 0x10;
      } while( true );
    }
  }
  else if ((DAT_800bf870 != '\x06') || (DAT_800bf871 != 0x13)) goto LAB_8004cf64;
  return;
}

