/**
 * @brief Entity slide state: checks flags, sliding movement
 * @note Original: func_80062D8C at 0x80062D8C
 */
// Entity_State_Slide



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80062d8c(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if (((param_2 & 0x80) == 0) || ((*(byte *)(param_1 + 0x17d) & 2) == 0)) {
    param_2 = param_2 & 3;
    uVar3 = param_2;
    if (*(char *)(param_1 + 0x165) != '\0') {
      uVar3 = param_2 + 3;
    }
    iVar6 = -((int)((uint)(byte)(&DAT_800a4700)[uVar3] << 0x18) >> 0x10);
  }
  else {
    sVar1 = *(short *)(param_1 + 0x50) + 4;
    *(short *)(param_1 + 0x50) = sVar1;
    if (0x1d < sVar1) {
      *(undefined2 *)(param_1 + 0x50) = 0x1e;
    }
    iVar6 = (uint)*(ushort *)(param_1 + 0x50) * -0x100;
  }
  iVar5 = (int)(short)iVar6;
  uVar4 = 0x25;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar5;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar5;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * iVar5;
  iVar2 = FUN_80083f50((int)*(short *)(param_1 + 0x56));
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)((iVar2 << 3) >> 0xc);
  iVar2 = FUN_80083e80((int)*(short *)(param_1 + 0x56));
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) - (short)((iVar2 << 3) >> 0xc);
  if (-1 < *(short *)(param_1 + 0x17e)) {
    uVar4 = 0x4a;
  }
  if (param_2 == 0) {
    FUN_800541f4(param_1,1);
  }
  *(undefined1 *)(param_1 + 0x17d) = 0;
  iVar2 = FUN_80046a44(param_1,uVar4,(int)-*(short *)(param_1 + 0x68),uVar4);
  if (iVar2 != 0) {
    *(byte *)(param_1 + 0x17d) = (byte)((ushort)_DAT_1f8001a6 >> 0xb) & 3;
    FUN_80048654(param_1);
    sVar1 = _DAT_1f8001a2 + 0x400;
    *(undefined2 *)(param_1 + 0x140) = _DAT_1f8001a0;
    *(short *)(param_1 + 0x142) = sVar1;
    FUN_80055284(param_1);
    *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x142);
  }
  if (iVar2 == 1) {
    if (iVar5 < 0) {
      if ((param_2 & 1) != 0) {
        if ((*(byte *)(param_1 + 0x17d) & 1) == 0) {
          uVar4 = 0x43;
        }
        else {
          uVar4 = 0x42;
        }
        FUN_80054d14(param_1,uVar4,0);
      }
    }
    else if (iVar5 != 0) {
      return;
    }
  }
  else {
    if (iVar2 < 2) {
      if (iVar2 != 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0x164) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined2 *)(param_1 + 0x50) = 0;
      FUN_80056d44(param_1,0);
      return;
    }
    if (3 < iVar2) {
      return;
    }
    if (0 < iVar6 << 0x10) {
      if (*(char *)(param_1 + 0x46) != '\x18') {
        FUN_80074590(4,0,0);
        FUN_80054d14(param_1,0x18,0);
      }
      *(undefined1 *)(param_1 + 6) = 2;
      return;
    }
  }
  uVar3 = FUN_8005444c(param_1);
  if ((uVar3 & 1) != 0) {
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    FUN_80054d14(param_1,2,3);
  }
  return;
}
