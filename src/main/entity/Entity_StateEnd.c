/**
 * @brief Entity state end: entity[6] state 0->1->2, cleanup at state 2
 * @note Original: func_800655DC at 0x800655DC
 */
// Entity_StateEnd



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800655dc(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
      }
      goto LAB_800656d4;
    }
    if (bVar1 != 0) goto LAB_800656d4;
    *(undefined2 *)(param_1 + 0x58) = 0;
    DAT_800bf80e = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    *(byte *)(param_1 + 0x147) = DAT_1f800192 & 1;
    if ((DAT_1f800192 & 1) == 0) {
      _DAT_1f800192 = *(ushort *)(param_1 + 0x140);
    }
    else {
      _DAT_1f800192 = *(short *)(param_1 + 0x140) - 0x800U & 0xfff;
    }
    FUN_80054d14(param_1,2,0);
  }
  uVar3 = (uint)_DAT_1f800192;
  sVar2 = FUN_800776f8(uVar3 & 0xfff,(int)*(short *)(param_1 + 0x56),0x100);
  *(short *)(param_1 + 0x56) = sVar2;
  if ((int)sVar2 == (uVar3 & 0xfff)) {
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
LAB_800656d4:
  FUN_80076d68(param_1);
  FUN_80065478(param_1,1);
  return;
}
