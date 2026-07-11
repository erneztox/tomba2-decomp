// FUN_080130a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080130a0(byte *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e);
  iVar5 = iVar9 * 0x10000 >> 0x10;
  iVar8 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36);
  iVar6 = iVar8 * 0x10000 >> 0x10;
  uVar4 = func_0x00084080(iVar5 * iVar5 + iVar6 * iVar6);
  if ((int)(uint)uVar4 <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    iVar5 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
    if ((int)(iVar5 + (uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x84) & 0xffff
             ) <= (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86)) {
      if (iVar5 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      sVar7 = (*(short *)(param_2 + 0x86) - *(ushort *)(param_2 + 0x84)) +
              (*(short *)(param_1 + 0x86) - *(ushort *)(param_1 + 0x84));
      if (((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) - (int)(short)uVar4 <
          (int)sVar7 - (int)(short)iVar5) {
        _DAT_1f80009c = func_0x00085690(-(int)(short)iVar8,(int)(short)iVar9);
        if ((*param_1 & 4) == 0) {
          iVar5 = func_0x00083f50();
          sVar7 = *(short *)(param_1 + 0x80);
          sVar1 = *(short *)(param_2 + 0x80);
          iVar6 = func_0x00083e80(_DAT_1f80009c);
          sVar2 = *(short *)(param_2 + 0x80);
          *(short *)(param_1 + 0x2e) =
               *(short *)(param_2 + 0x2e) + (short)(iVar5 * ((int)sVar7 + (int)sVar1) >> 0xc);
          *(short *)(param_1 + 0x36) =
               *(short *)(param_2 + 0x36) -
               (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar2) >> 0xc);
        }
        param_1[0x60] = 1;
        cVar3 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
        param_1[0x5f] = cVar3 + 2;
        halt_baddata();
      }
      if ((param_1[0x145] & 1) == 0) {
        *(int *)(param_1 + 0x30) = ((int)*(short *)(param_2 + 0x32) + (int)sVar7) * 0x10000;
        if ((int)(short)uVar4 <
            (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) + -100) {
          if (param_1[0x145] == 0) {
            *(undefined1 *)(param_2 + 0x29) = 1;
            if (param_1[5] == 0x18) {
              param_1[0x29] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          else {
            *(undefined1 *)(param_2 + 0x29) = 2;
            if (param_1[4] < 2) {
              if (param_1[5] != 0x18) {
                sVar7 = *(short *)(param_1 + 0x4a);
                param_1[0x29] = 1;
                param_1[0x145] = 0;
                param_1[0x4a] = 0;
                param_1[0x4b] = 0;
                param_1[0x148] = 0;
                param_1[5] = 0x18;
                param_1[6] = 0xe;
                param_1[7] = 0;
                *(short *)(param_1 + 0x50) = -sVar7;
                halt_baddata();
              }
              return;
            }
          }
        }
        func_0x00022c78(param_1);
      }
    }
  }
  return;
}

