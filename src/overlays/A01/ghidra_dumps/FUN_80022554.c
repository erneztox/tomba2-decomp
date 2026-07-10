// FUN_80022554

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80022554(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  
  if (((_DAT_800e7ffe & 0x200) == 0) && (pbVar2 = _DAT_800f2738, _DAT_1f80015c != 0)) {
    for (; pbVar2 != (byte *)0x0; pbVar2 = *(byte **)(pbVar2 + 0x24)) {
      if ((((pbVar2[0x5f] & 0x40) != 0) && ((*pbVar2 & 1) != 0)) && (pbVar2[0x2b] == 0)) {
        puVar5 = _DAT_1f800154;
        DAT_1f800182 = DAT_1f80015c;
joined_r0x80022608:
        do {
          if (DAT_1f800182 == '\0') break;
          pbVar4 = (byte *)*puVar5;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar5 = puVar5 + 1;
          if ((*pbVar4 & 1) != 0) {
            bVar1 = pbVar4[2];
            if (bVar1 != 4) {
              if (bVar1 < 5) {
                if (bVar1 != 0) goto joined_r0x80022608;
              }
              else {
                if (bVar1 == 6) {
                  FUN_80022330(pbVar2,pbVar4);
                  goto joined_r0x80022608;
                }
                if (bVar1 != 7) goto joined_r0x80022608;
              }
            }
            iVar3 = FUN_80020c34(pbVar2,pbVar4);
            if (-1 < iVar3) {
              pbVar2[0x2b] = 2;
              pbVar4[0x2b] = 2;
              if (((_DAT_800e7ffe & 0x200) == 0) && (*(int *)(pbVar2 + 0x10) == 0)) {
                *(byte **)(pbVar2 + 0x10) = pbVar4;
                pbVar2[0x2b] = 2;
                *(undefined2 *)(pbVar4 + 0x2e) = *(undefined2 *)(pbVar2 + 0x2e);
                *(undefined2 *)(pbVar4 + 0x32) = *(undefined2 *)(pbVar2 + 0x32);
                *(undefined2 *)(pbVar4 + 0x36) = *(undefined2 *)(pbVar2 + 0x36);
              }
              pbVar4[0x46] = pbVar2[0x46] & 1;
              FUN_80074590(0x2f,0,0);
              FUN_80031470(2,pbVar2 + 0x2c,pbVar2[0x5e],pbVar2 + 0x68);
              DAT_1f800182 = '\0';
            }
          }
        } while( true );
      }
    }
  }
  return;
}

