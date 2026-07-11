// FUN_80102bd8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80102bd8(byte *param_1,int param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if ((DAT_1f800137 == '\0') && (DAT_800bf80d == '\0')) {
    if (((int)*(short *)(param_1 + 0x17e) & 0x8200U) == 0) {
      iVar3 = func_0x80022f04(param_1,param_2);
      if (iVar3 != 0) {
        *(undefined1 *)(param_2 + 0x29) = 1;
        DAT_1f800137 = '\x02';
        DAT_800bf841 = 1;
      }
    }
    else {
      iVar3 = func_0x8002300c(param_1,param_2,0x20);
      if (iVar3 != 0) {
        if ((*param_1 & 4) == 0) {
          iVar3 = func_0x80083f50(_DAT_1f80009c + 0x800);
          sVar1 = *(short *)(param_1 + 0x80);
          iVar4 = func_0x80083e80(_DAT_1f80009c + 0x800);
          *(short *)(param_1 + 0x2e) =
               *(short *)(param_2 + 0x2e) + (short)(iVar3 * (sVar1 + 0x20) >> 0xc);
          *(short *)(param_1 + 0x36) =
               *(short *)(param_2 + 0x36) -
               (short)(iVar4 * (*(short *)(param_1 + 0x80) + 0x20) >> 0xc);
        }
        cVar2 = func_0x80077768((int)(((_DAT_1f80009c & 0xffff) + 0x800) * 0x10000) >> 0x10,
                                (int)*(short *)(param_1 + 0x140),1);
        param_1[0x5f] = cVar2 + 2;
        FUN_80114c88();
        return;
      }
    }
  }
  return;
}

