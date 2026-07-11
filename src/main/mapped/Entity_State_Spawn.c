/**
 * @brief Entity spawn state: reads script, spawns entities
 * @note Original: func_80043108 at 0x80043108
 */
// Entity_State_Spawn



/* WARNING: Removing unreachable block (ram,0x80043264) */

undefined4 FUN_80043108(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = *(int *)(param_1 + 0x6c);
  bVar1 = *(byte *)(param_1 + 0x78);
  sVar2 = *(short *)(iVar8 + 10);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return 0;
      }
      goto LAB_80043310;
    }
    if (bVar1 != 0) {
      return 0;
    }
    iVar5 = (int)((uint)*(ushort *)(param_1 + 100) << 0x10) >> 0x18;
    if (iVar5 == 0) {
      iVar5 = 10;
    }
    iVar7 = (uint)*(ushort *)(param_1 + 0x76) - (uint)*(ushort *)(param_1 + 0x36);
    iVar6 = iVar7 * 0x10000 >> 0x10;
    *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x72) - *(short *)(param_1 + 0x2e);
    *(short *)(param_1 + 0x4c) = (short)iVar7;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x74) - *(short *)(param_1 + 0x32);
    sVar3 = FUN_80084080(iVar6 * iVar6 +
                         (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x48));
    iVar5 = (int)(short)iVar5;
    uVar9 = (int)sVar3 / iVar5;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (sVar3 == -0x80000000)) {
      trap(0x1800);
    }
    *(short *)(param_1 + 100) = (short)uVar9;
    if ((uVar9 & 0xffff) == 0) {
      *(undefined2 *)(param_1 + 100) = 1;
    }
    if (*(short *)(param_1 + 100) == 0) {
      trap(0x1c00);
    }
    *(undefined2 *)(param_1 + 0x44) = 0x1000;
    *(short *)(param_1 + 100) = (short)(0x1000 / (int)*(short *)(param_1 + 100));
    if (sVar2 == -1) {
      uVar4 = FUN_80085690(-(int)*(short *)(param_1 + 0x4c),(int)*(short *)(param_1 + 0x48));
      *(ushort *)(param_1 + 0x56) = uVar4 & 0xfff;
    }
    else if (sVar2 == 0) {
      *(undefined1 *)(param_1 + 0x78) = 2;
      return 0;
    }
    uVar4 = FUN_80085690(-(int)*(short *)(param_1 + 0x4c),(int)*(short *)(param_1 + 0x48));
    *(ushort *)(param_1 + 0x66) = uVar4 & 0xfff;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  iVar5 = FUN_80041438(param_1,(int)*(short *)(param_1 + 0x66),0x100);
  if (iVar5 != 0) {
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  if (sVar2 == 1) {
    return 0;
  }
LAB_80043310:
  iVar5 = (uint)*(ushort *)(param_1 + 0x44) - (uint)*(ushort *)(param_1 + 100);
  *(short *)(param_1 + 0x44) = (short)iVar5;
  if (iVar5 * 0x10000 < 1) {
    *(undefined2 *)(param_1 + 0x44) = 0;
  }
  iVar5 = (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x48);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xfff;
  }
  iVar6 = (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x4a);
  *(short *)(param_1 + 0x2e) = *(short *)(iVar8 + 2) - (short)(iVar5 >> 0xc);
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xfff;
  }
  iVar5 = (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x4c);
  *(short *)(param_1 + 0x32) = *(short *)(iVar8 + 4) - (short)(iVar6 >> 0xc);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xfff;
  }
  *(short *)(param_1 + 0x36) = *(short *)(iVar8 + 6) - (short)(iVar5 >> 0xc);
  if (*(short *)(param_1 + 0x44) != 0) {
    FUN_80042ea4(param_1,param_1 + 0x68,(int)*(short *)(param_1 + 0x6a));
    return 0;
  }
  return 1;
}
