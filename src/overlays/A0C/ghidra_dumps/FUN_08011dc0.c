// FUN_08011dc0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011dc0(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  DAT_1f800183 = DAT_1f800144;
  puVar9 = _DAT_1f80013c;
  if (_DAT_1f800150 != 0) {
    while (DAT_1f800183 != '\0') {
      pbVar6 = (byte *)*puVar9;
      DAT_1f800183 = DAT_1f800183 + -1;
      puVar9 = puVar9 + 1;
      if ((*pbVar6 != 2) && ((*pbVar6 & 8) == 0)) {
        puVar8 = _DAT_1f800148;
        DAT_1f800182 = DAT_1f800150;
joined_r0x08011e60:
        if (DAT_1f800182 != '\0') {
          pbVar5 = (byte *)*puVar8;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar8 = puVar8 + 1;
          if ((*pbVar5 & 1) != 0) {
            if (pbVar6[2] == 0x58) {
              bVar1 = pbVar5[2];
              if (bVar1 == 8) {
                func_0x0010ab14(pbVar6,pbVar5,*(undefined4 *)(pbVar5 + 0xc0));
              }
              else {
                if (bVar1 < 9) {
                  if (bVar1 != 1) {
                    halt_baddata();
                  }
                }
                else if ((bVar1 != 0x11) && (bVar1 != 0x47)) goto joined_r0x08011e60;
                iVar7 = *(int *)(pbVar5 + 0xc0);
                iVar2 = (int)(((uint)*(ushort *)(pbVar6 + 0x2e) - (uint)*(ushort *)(iVar7 + 0x2c)) *
                             0x10000) >> 0x10;
                iVar3 = (int)(((uint)*(ushort *)(pbVar6 + 0x36) - (uint)*(ushort *)(iVar7 + 0x34)) *
                             0x10000) >> 0x10;
                uVar4 = func_0x00084080(iVar2 * iVar2 + iVar3 * iVar3);
                if (((int)*(short *)(pbVar6 + 0x80) + (int)*(short *)(pbVar5 + 0x80) <
                     (int)(uVar4 & 0xffff)) ||
                   ((int)(short)*(ushort *)(pbVar6 + 0x86) + (int)*(short *)(pbVar5 + 0x86) <
                    (int)(((uint)*(ushort *)(pbVar6 + 0x32) - (uint)*(ushort *)(iVar7 + 0x30)) +
                          (((uint)*(ushort *)(pbVar5 + 0x84) + (uint)*(ushort *)(pbVar6 + 0x86)) -
                          (uint)*(ushort *)(pbVar6 + 0x84)) & 0xffff))) goto joined_r0x08011e60;
                pbVar6[0x29] = 1;
              }
            }
            else {
              if (pbVar5[2] == 0x18) {
                if ((*pbVar6 == 4) && (iVar2 = func_0x000240fc(pbVar6,pbVar5), iVar2 != 0)) {
                  pbVar6[0x5e] = 1;
                  *pbVar6 = 10;
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                goto joined_r0x08011e60;
              }
              if (pbVar5[2] == 100) {
                if (pbVar6[2] == 0x67) {
                  func_0x001092d4(pbVar6,pbVar5);
                }
                goto joined_r0x08011e60;
              }
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          goto joined_r0x08011e60;
        }
      }
    }
  }
  return;
}

