// FUN_80107088

void FUN_80107088(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  
  iVar5 = func_0x80083e80((int)*(short *)(param_3 + 0xc));
  iVar6 = func_0x80083e80((int)*(short *)(param_2 + 0x56));
  iVar8 = (int)(short)(iVar5 * 0x6e >> 0xc);
  iVar5 = func_0x80083f50((int)*(short *)(param_2 + 0x56));
  iVar12 = (uint)*(ushort *)(param_3 + 0x2c) - (iVar5 * iVar8 >> 0xc);
  iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - iVar12) * 0x10000) >> 0x10;
  iVar8 = (uint)*(ushort *)(param_3 + 0x34) + (iVar6 * iVar8 >> 0xc);
  iVar6 = (int)(((uint)*(ushort *)(param_1 + 0x36) - iVar8) * 0x10000) >> 0x10;
  uVar7 = func_0x80084080(iVar5 * iVar5 + iVar6 * iVar6);
  if ((int)(uVar7 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    iVar5 = func_0x80083f50((int)*(short *)(param_3 + 0xc));
    iVar5 = (uint)*(ushort *)(param_3 + 0x30) + (iVar5 * 0x6e >> 0xc);
    if ((int)(((uint)*(ushort *)(param_1 + 0x32) - iVar5) +
              (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
        (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86)) {
      if (*(char *)(param_1 + 0x5f) == '\x10') {
        bVar4 = *(byte *)(param_1 + 0x46) >> 1;
        sVar11 = (short)iVar12;
        sVar9 = (short)iVar5;
        sVar10 = (short)iVar8;
        if (bVar4 < 2) {
          iVar5 = func_0x80083f50(*(short *)(param_1 + 0x68) + 0x800);
          sVar1 = *(short *)(param_1 + 0x80);
          sVar2 = *(short *)(param_2 + 0x80);
          iVar6 = func_0x80083e80(*(short *)(param_1 + 0x68) + 0x800);
          sVar3 = *(short *)(param_2 + 0x80);
          *(short *)(param_1 + 0x2e) = sVar11 + (short)(iVar5 * ((int)sVar1 + (int)sVar2) >> 0xc);
          *(short *)(param_1 + 0x32) = sVar9;
          *(short *)(param_1 + 0x36) =
               sVar10 - (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
          FUN_80110250();
          return;
        }
        if (bVar4 < 4) {
          *(short *)(param_1 + 0x2e) = sVar11;
          *(short *)(param_1 + 0x36) = sVar10;
          *(short *)(param_1 + 0x32) =
               *(short *)(param_1 + 0x84) +
               sVar9 + (*(short *)(param_2 + 0x86) - *(short *)(param_2 + 0x84));
          *(undefined2 *)(param_4 + 0x50) = 0x300;
          *(char *)(param_4 + 6) = *(char *)(param_4 + 6) + '\x01';
          return;
        }
      }
      else {
        *(undefined1 *)(param_2 + 0x2b) = 1;
        *(char *)(param_2 + 0x5f) = (char)(*(ushort *)(param_1 + 0x56) >> 4);
      }
      func_0x8001e860(param_1,param_2,param_3,0x200);
      DAT_1f800182 = 0;
    }
  }
  return;
}

