/**
 * @brief Entity painter behavior variant 2: checks DAT_800bf873 flag
 * @note Original: func_800248D0 at 0x800248D0
 */
// Entity_Behavior_Painter2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_800248d0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint *puVar6;
  undefined4 *puVar7;
  
  uVar4 = 0;
  if (DAT_800bf873 == '\0') {
    bVar1 = *(byte *)(param_1 + 0x17e);
    puVar7 = _DAT_1f800140;
    DAT_1f800182 = DAT_1f800146;
    while (DAT_1f800182 != '\0') {
      pbVar5 = (byte *)*puVar7;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar7 = puVar7 + 1;
      if (((pbVar5[2] < 0x65) &&
          (((int)(uint)(byte)(&DAT_80017324)[pbVar5[2] >> 3] >> (pbVar5[2] & 7) & 1U) != 0)) &&
         ((*pbVar5 & 1) != 0)) {
        FUN_8002f514((bVar1 & 0xf) - 3,pbVar5);
        uVar4 = 1;
      }
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x17e);
    puVar7 = _DAT_1f80014c;
    DAT_1f800182 = DAT_1f800152;
    while (DAT_1f800182 != '\0') {
      puVar6 = (uint *)*puVar7;
      puVar7 = puVar7 + 1;
      DAT_1f800182 = DAT_1f800182 + -1;
      if ((*puVar6 & 0xff00ff) == 0x670001) {
        iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)((int)puVar6 + 0x2e)) *
                     0x10000) >> 0x10;
        iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)((int)puVar6 + 0x36)) *
                     0x10000) >> 0x10;
        uVar4 = FUN_80084080(iVar2 * iVar2 + iVar3 * iVar3);
        if (*(short *)(param_1 + 0x80) + 700 < (int)(uVar4 & 0xffff)) {
          return uVar4 & 0xffff;
        }
        uVar4 = (uint)(*(short *)(param_1 + 0x86) + 0x208 <
                      (int)((uint)*(ushort *)(param_1 + 0x84) +
                            ((uint)*(ushort *)(param_1 + 0x32) -
                            (uint)*(ushort *)((int)puVar6 + 0x32)) + 0x1a4 & 0xffff));
        if (uVar4 != 0) {
          return uVar4;
        }
        FUN_8002f514((bVar1 & 0xf) - 3,puVar6);
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}
