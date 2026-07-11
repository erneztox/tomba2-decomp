// FUN_0801359c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801359c(byte *param_1,byte *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if ((*(short *)(param_1 + 0x16e) != 0) && (param_2[0xbf] == 0)) {
    if ((param_2[3] & 0x80) == 0) {
      iVar5 = func_0x0010c378(param_1,param_2,*(undefined4 *)(param_2 + 0xc0));
      if (iVar5 < 0) {
        if ((*(ushort *)(param_1 + 0x17e) & 0x200) != 0) {
          return;
        }
        if (DAT_1f800137 != '\0') {
          return;
        }
        if ((*param_1 & 6) != 0) {
          return;
        }
        if (1 < param_2[0x46] - 1) {
          return;
        }
        iVar7 = *(int *)(param_2 + 0xd4);
        iVar8 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(iVar7 + 0x2c)) *
                     0x10000) >> 0x10;
        iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(iVar7 + 0x34)) *
                     0x10000) >> 0x10;
        uVar6 = func_0x00084080(iVar8 * iVar8 + iVar5 * iVar5);
        bVar4 = false;
        if (((int)(uVar6 & 0xffff) <= *(short *)(param_1 + 0x80) + 100) &&
           (bVar4 = false,
           (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(iVar7 + 0x30)) +
                 *(ushort *)(param_1 + 0x84) + 0x32 & 0xffff) <= *(short *)(param_1 + 0x86) + 100))
        {
          _DAT_1f80009c = func_0x00085690(-iVar5,iVar8);
          bVar4 = true;
        }
        if (!bVar4) {
          return;
        }
        if ((param_2[0x46] != 1) && (*(short *)(param_1 + 0x16e) != 1)) {
          if (param_2[0x46] != 2) {
            return;
          }
          param_2[0x46] = 3;
          *param_1 = 2;
          *param_2 = 2;
          param_1[5] = 0x18;
          param_1[6] = 0;
          param_1[7] = 0;
          halt_baddata();
        }
      }
      else {
        if (param_1[0x144] != 1) {
          if (param_1[0x144] != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if ((*param_2 & 10) == 0) {
            return;
          }
          if ((*(ushort *)(param_1 + 0x17e) & 0x200) != 0) {
            return;
          }
          if ((*param_1 & 4) != 0) {
            return;
          }
          iVar5 = func_0x00083f50(_DAT_1f80009c);
          sVar1 = *(short *)(param_1 + 0x80);
          sVar2 = *(short *)(param_2 + 0x80);
          iVar7 = func_0x00083e80(_DAT_1f80009c);
          sVar3 = *(short *)(param_2 + 0x80);
          *(short *)(param_1 + 0x2e) =
               *(short *)(param_2 + 0x2e) + (short)(iVar5 * ((int)sVar1 + (int)sVar2) >> 0xc);
          *(short *)(param_1 + 0x36) =
               *(short *)(param_2 + 0x36) -
               (short)(iVar7 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (((*param_2 & 0x18) == 0) && (iVar5 < 2)) {
          if ((param_2[3] & 0x80) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (param_2[0x5e] == 0) {
            return;
          }
          func_0x0001fdb4(param_2,0xffff8009,3,0x1c);
          halt_baddata();
        }
        if ((*(ushort *)(param_1 + 0x17e) & 0x200) != 0) {
          return;
        }
        if ((*param_1 & 4) == 0) {
          iVar5 = func_0x00083f50(_DAT_1f80009c);
          sVar1 = *(short *)(param_1 + 0x80);
          sVar2 = *(short *)(param_2 + 0x80);
          iVar7 = func_0x00083e80(_DAT_1f80009c);
          sVar3 = *(short *)(param_2 + 0x80);
          *(short *)(param_1 + 0x2e) =
               *(short *)(param_2 + 0x2e) + (short)(iVar5 * ((int)sVar1 + (int)sVar2) >> 0xc);
          *(short *)(param_1 + 0x36) =
               *(short *)(param_2 + 0x36) -
               (short)(iVar7 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
        }
      }
      param_1[0x2b] = (byte)(_DAT_1f80009c >> 4);
      func_0x00022d08(param_1,param_2,1,0);
    }
    else {
      iVar5 = func_0x0001f40c(param_1,param_2,1);
      if (-1 < iVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}

