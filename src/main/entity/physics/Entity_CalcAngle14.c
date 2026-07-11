/**
 * @brief Entity angle calc variant 14: different entity offset format
 * @note Original: func_80023870 at 0x80023870
 */
// Entity_CalcAngle14



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80023870(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c)) * 0x10000)
          >> 0x10;
  iVar7 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar5 = FUN_80084080(iVar8 * iVar8 + iVar7 * iVar7);
  uVar6 = 0;
  if (((int)(uVar5 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80))
     && (uVar6 = 0,
        (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) +
              (uint)*(ushort *)(param_2 + 0x84) +
              ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84)) & 0xffff) <=
        (int)(short)*(ushort *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) {
    _DAT_1f80009c = FUN_80085690(-iVar7,iVar8);
    if (*(char *)(param_1 + 0xc) == '\x02') {
      cVar4 = FUN_80077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x60),1);
      *(char *)(param_1 + 0x5f) = cVar4 + '\x02';
    }
    iVar7 = FUN_80083f50(_DAT_1f80009c);
    sVar1 = *(short *)(param_1 + 0x80);
    sVar2 = *(short *)(param_2 + 0x80);
    iVar8 = FUN_80083e80(_DAT_1f80009c);
    sVar3 = *(short *)(param_2 + 0x80);
    uVar6 = 1;
    *(short *)(param_1 + 0x2e) =
         *(short *)(param_3 + 0x2c) + (short)(iVar7 * ((int)sVar1 + (int)sVar2) >> 0xc);
    *(short *)(param_1 + 0x36) =
         *(short *)(param_3 + 0x34) -
         (short)(iVar8 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
  }
  return uVar6;
}
