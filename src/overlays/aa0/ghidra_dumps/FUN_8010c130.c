// FUN_8010c130

undefined4 FUN_8010c130(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c)) * 0x10000)
          >> 0x10;
  iVar7 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar5 = func_0x80084080(iVar4 * iVar4 + iVar7 * iVar7);
  uVar6 = 0;
  if ((int)(uVar5 & 0xffff) <= *(short *)(param_1 + 0x80) + 0x244) {
    iVar4 = func_0x80083e80((int)*(short *)(param_3 + 8));
    uVar6 = 0;
    if (((int)((((uint)*(ushort *)(param_3 + 0x30) - (iVar4 * iVar7 >> 0xc)) -
               (*(ushort *)(param_1 + 0x84) + 0x50)) * 0x10000) >> 0x10 <=
         (int)*(short *)(param_1 + 0x32)) && (uVar6 = 1, *(short *)(param_2 + 0x78) == 0)) {
      *(undefined1 *)(param_2 + 0x29) = 4;
      sVar3 = 0x800;
      if (*(char *)(param_1 + 0x5e) != '\0') {
        sVar3 = 0x1200;
      }
      if (0 < iVar7) {
        *(short *)(param_2 + 0x48) = -sVar3;
        *(short *)(iVar7 + 0x6e) = -sVar3;
        uVar2 = FUN_8011fd94(iVar7,0);
        *(undefined2 *)(iVar7 + 0x66) = uVar2;
        uVar2 = FUN_801214ac(iVar7,2);
        *(undefined2 *)(iVar7 + 0x50) = uVar2;
        *(char *)(iVar7 + 6) = *(char *)(iVar7 + 6) + '\x01';
        FUN_80121918();
        bVar1 = *(byte *)(*(int *)(iVar7 + 0xcc) + 0x3e);
        if ((bVar1 & 0x80) != 0) {
          if ((bVar1 & 1) != 0) {
            sVar3 = FUN_80127384(iVar7);
            if (sVar3 != 0) {
              *(undefined2 *)(iVar7 + 0x7a) = 0;
              iVar4 = *(int *)(iVar7 + *(short *)(iVar7 + 0x6c) * 4 + 0xc0);
              *(byte *)(iVar4 + 0x3e) = *(byte *)(iVar4 + 0x3e) & 0xfe;
              uVar6 = FUN_801303b0();
              return uVar6;
            }
            iVar4 = *(int *)(iVar7 + *(short *)(iVar7 + 0x6c) * 4 + 0xc0);
            *(byte *)(iVar4 + 0x3e) = *(byte *)(iVar4 + 0x3e) & 0x7f;
            uVar6 = FUN_801303bc(iVar7);
            return uVar6;
          }
          if ((bVar1 & 0x10) == 0) {
            *(byte *)(*(int *)(iVar7 + 0xcc) + 0x3e) = bVar1 | 0x10;
            FUN_80131768(iVar7,(int)*(short *)(iVar7 + 0x6c),0);
          }
        }
        *(undefined1 *)(iVar7 + 5) = 0;
        *(undefined1 *)(iVar7 + 6) = 0;
        *(undefined1 *)(iVar7 + 0x5e) = 0;
        uVar6 = FUN_801303f8();
        return uVar6;
      }
      *(short *)(param_2 + 0x48) = sVar3;
      uVar6 = 1;
    }
  }
  return uVar6;
}

