// FUN_08013f3c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08013f3c(byte *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  
  iVar9 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e);
  iVar5 = iVar9 * 0x10000 >> 0x10;
  iVar7 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36);
  iVar6 = iVar7 * 0x10000 >> 0x10;
  uVar4 = func_0x00084080(iVar5 * iVar5 + iVar6 * iVar6);
  if ((int)(uint)uVar4 <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    iVar5 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
    if ((int)(iVar5 + (uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x84) & 0xffff
             ) <= (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86)) {
      if (iVar5 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar6 = ((uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84)) +
              ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84));
      _DAT_1f80009c = func_0x00085690(-(int)(short)iVar7,(int)(short)iVar9);
      sVar8 = (short)iVar6;
      if (((iVar6 * 0x10000 < 0) && ((int)sVar8 - (int)(short)iVar5 < 0x28)) ||
         (iVar5 = (int)sVar8 - (int)(short)iVar5,
         iVar5 <= ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) -
                  (int)(short)uVar4)) {
        *(int *)(param_1 + 0x30) = ((int)*(short *)(param_2 + 0x32) + (int)sVar8) * 0x10000;
        if ((param_1[0x145] & 1) == 0) {
          *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) >> 1;
          if (param_1[0x46] == 0xe5) {
            if (*(char *)(param_2 + 0x29) < '\x02') {
              *(undefined1 *)(param_2 + 0x29) = 2;
            }
            else {
              cVar3 = *(byte *)(param_2 + 0x29) + 1;
              if (*(byte *)(param_2 + 0x29) < 2) {
                return;
              }
              *(char *)(param_2 + 0x29) = cVar3;
              if (cVar3 < '\x04') {
                return;
              }
              func_0x00022c78(param_1);
              param_1[5] = 2;
              param_1[6] = 1;
              param_1[7] = 0;
              param_1[0x145] = 1;
              param_1[0x144] = 0;
              param_1[0x29] = 0;
              func_0x00074590(0x1d,0,0);
              param_1[0x58] = 0;
              param_1[0x59] = 0;
              func_0x00054d14(param_1,0x13,2);
              if (param_1[0x181] == 0) {
                func_0x000538e0(param_1,param_1 + 0x2c,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              param_1[0x181] = 0;
              func_0x00074590(0xd,0xfffffffa,0);
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined1 *)(param_2 + 0x29) = 1;
          param_1[0x29] = 1;
          if (param_1[4] < 2) {
            if ((param_1[5] != 0x18) && ((param_1[5] != 0x17 || (-1 < *(short *)(param_1 + 0x4a)))))
            {
              param_1[0x4a] = 0;
              param_1[0x4b] = 0xc0;
              param_1[0x145] = 0;
              param_1[0x50] = 0;
              param_1[0x51] = 0;
              param_1[0x148] = 0;
              param_1[5] = 0x18;
              param_1[6] = 0xf;
              param_1[7] = 0;
              halt_baddata();
            }
          }
          else {
            func_0x00022c78(param_1);
          }
        }
      }
      else {
        if (0x91 < iVar5) {
          param_1[0x60] = 1;
        }
        cVar3 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
        param_1[0x5f] = cVar3 + 2U;
        if ((*param_1 & 4) == 0) {
          if ((cVar3 + 2U & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          iVar5 = (int)((*(ushort *)(param_1 + 0x140) + 0x800) * 0x10000) >> 0x10;
          if (*(char *)(param_2 + 3) != '\x05') {
            iVar6 = func_0x00083f50(iVar5);
            sVar8 = *(short *)(param_1 + 0x80);
            sVar1 = *(short *)(param_2 + 0x80);
            iVar5 = func_0x00083e80(iVar5);
            sVar2 = *(short *)(param_2 + 0x80);
            *(short *)(param_1 + 0x2e) =
                 *(short *)(param_2 + 0x2e) +
                 (short)((uint)(iVar6 * ((int)sVar8 + (int)sVar1)) >> 0xc);
            *(short *)(param_1 + 0x36) =
                 *(short *)(param_2 + 0x36) -
                 (short)((uint)(iVar5 * ((int)*(short *)(param_1 + 0x80) + (int)sVar2)) >> 0xc);
            halt_baddata();
          }
          func_0x00083f50(iVar5);
          func_0x00083e80(iVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  }
  return;
}

