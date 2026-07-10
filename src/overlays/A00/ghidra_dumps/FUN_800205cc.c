// FUN_800205cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800205cc(byte *param_1,char *param_2)

{
  short sVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  
  if (*param_2 == '\x05') {
    if (((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) && (param_1[0x78] == 0)) {
      FUN_8001f830();
    }
  }
  else if (((int)*(short *)(param_1 + 0x17e) & 0x8000U) == 0) {
    uVar4 = FUN_8001f40c(param_1,param_2,0);
    if (-1 < (int)uVar4) {
      if (*param_2 == '\x01') {
        if ((param_1[0x144] == 1) && ((int)uVar4 < 2)) {
          FUN_8001fdb4(param_2,0xffff8002,3,0x1e);
        }
        else if ((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) {
          if ((uVar4 & 1) == 0) {
            if ((*param_1 & 4) == 0) {
              iVar5 = FUN_80083f50(_DAT_1f80009c);
              sVar7 = *(short *)(param_1 + 0x80);
              sVar3 = *(short *)(param_2 + 0x80);
              iVar6 = FUN_80083e80(_DAT_1f80009c);
              sVar1 = *(short *)(param_2 + 0x80);
              *(short *)(param_1 + 0x2e) =
                   *(short *)(param_2 + 0x2e) + (short)(iVar5 * ((int)sVar7 + (int)sVar3) >> 0xc);
              *(short *)(param_1 + 0x36) =
                   *(short *)(param_2 + 0x36) -
                   (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar1) >> 0xc);
            }
            param_1[0x60] = 1;
            cVar2 = FUN_80077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
            param_1[0x5f] = cVar2 + 2;
          }
          else if ((uVar4 == 1) && ((param_1[0x145] & 1) == 0)) {
            sVar7 = *(short *)(param_2 + 0x84);
            sVar3 = *(short *)(param_2 + 0x32);
            param_1[0x29] = 1;
            param_1[0x145] = 0;
            param_1[0x4a] = 0;
            param_1[0x4b] = 0;
            param_1[0x50] = 0;
            param_1[0x51] = 0;
            param_1[0x148] = 0;
            *(short *)(param_1 + 0x32) = sVar3 - (*(short *)(param_1 + 0x84) + sVar7);
            if ((param_1[0x78] == 0) && (DAT_800bf816 == '\0')) {
              if (*(short *)(param_1 + 0x17e) < 0) {
                sVar7 = *(short *)(param_1 + 0x84);
                if (*(short *)(param_1 + 0x84) == 0x46) {
                  return;
                }
                sVar3 = *(short *)(param_1 + 0x32) + -0x46;
              }
              else {
                sVar7 = *(short *)(param_1 + 0x84);
                if (*(short *)(param_1 + 0x84) == 0x8c) {
                  return;
                }
                sVar3 = *(short *)(param_1 + 0x32) + -0x8c;
              }
              *(short *)(param_1 + 0x32) = sVar7 + sVar3;
            }
          }
        }
      }
      else if (((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) && ((param_1[0x145] & 1) == 0)) {
        param_2[0x29] = '\x01';
      }
    }
  }
  else {
    FUN_8001ec3c(param_1,param_2);
  }
  return;
}

