// FUN_8001f40c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8001f40c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000)
          >> 0x10;
  iVar6 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) * 0x10000)
          >> 0x10;
  uVar1 = FUN_80084080(iVar7 * iVar7 + iVar6 * iVar6);
  uVar2 = 0xffffffff;
  if ((int)(uVar1 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    iVar5 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
    iVar3 = (uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x84);
    if ((int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
        (int)(iVar5 + iVar3 & 0xffffU)) {
      uVar2 = 0xffffffff;
    }
    else {
      _DAT_1f80009c = FUN_80085690(-iVar6,iVar7);
      iVar6 = ((uint)*(ushort *)(param_1 + 0x80) + (uint)*(ushort *)(param_2 + 0x80)) - uVar1;
      if (iVar5 * 0x10000 < 0) {
        iVar7 = -iVar5;
      }
      else {
        iVar3 = ((uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84)) +
                ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84));
        iVar7 = iVar5;
      }
      iVar4 = (uint)*(ushort *)(param_1 + 0x84) << 0x10;
      if ((int)(short)iVar5 < -((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1)) {
        uVar2 = iVar6 * 0x10000 < (iVar3 - iVar7) * 0x10000 ^ 1;
      }
      else {
        uVar2 = 2;
        if (((((iVar3 - iVar7) * 0x10000 <= iVar6 * 0x10000) &&
             (uVar2 = 3, (*(ushort *)(param_1 + 0x17e) & 0x200) == 0)) &&
            (uVar2 = 3, _DAT_1f800098 == 0)) && (param_3 == 0)) {
          DAT_1f800253 = 4;
          *(ushort *)(param_1 + 0x32) =
               *(short *)(param_2 + 0x32) +
               (*(short *)(param_2 + 0x86) - *(short *)(param_2 + 0x84)) +
               (*(short *)(param_1 + 0x86) - *(ushort *)(param_1 + 0x84));
          uVar2 = 3;
          if ((*(char *)(param_1 + 0x145) == '\x01') && (uVar2 = 3, *(short *)(param_1 + 0x4a) < 0))
          {
            *(undefined2 *)(param_1 + 0x4a) = 0;
          }
        }
      }
    }
  }
  return uVar2;
}

