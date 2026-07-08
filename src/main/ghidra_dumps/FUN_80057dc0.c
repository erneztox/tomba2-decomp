
/* WARNING: Removing unreachable block (ram,0x80057f60) */
/* WARNING: Removing unreachable block (ram,0x80057ef8) */
/* WARNING: Removing unreachable block (ram,0x80057e90) */
/* WARNING: Removing unreachable block (ram,0x80057e5c) */
/* WARNING: Removing unreachable block (ram,0x80057ec4) */
/* WARNING: Removing unreachable block (ram,0x80057f2c) */
/* WARNING: Removing unreachable block (ram,0x80057f94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80057dc0(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  if (param_2 == 0) {
    if (((int)*(short *)(param_1 + 0x17e) & 0x8000U) != 0) {
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x46;
    }
    uVar1 = *(ushort *)(param_1 + 0x17e) & 0x7fff;
  }
  else {
    if (((int)*(short *)(param_1 + 0x17e) & 0x8000U) == 0) {
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x46;
    }
    uVar1 = *(ushort *)(param_1 + 0x17e) | 0x8000;
  }
  *(ushort *)(param_1 + 0x17e) = uVar1;
  param_2 = param_2 + 1;
  if (param_2 == 0) {
    trap(0x1c00);
  }
  if (param_2 == 0) {
    trap(0x1c00);
  }
  if (param_2 == 0) {
    trap(0x1c00);
  }
  if (param_2 == 0) {
    trap(0x1c00);
  }
  if (param_2 == 0) {
    trap(0x1c00);
  }
  if (param_2 == 0) {
    trap(0x1c00);
  }
  if (param_2 == 0) {
    trap(0x1c00);
  }
  uVar2 = (undefined2)(0x1000 / param_2);
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  *(undefined2 *)(param_1 + 0xbc) = uVar2;
  *(short *)(param_1 + 0x80) = (short)(0x32 / param_2);
  uVar3 = (undefined2)(100 / param_2);
  *(undefined2 *)(param_1 + 0x82) = uVar3;
  uVar2 = (undefined2)(0x8c / param_2);
  *(undefined2 *)(param_1 + 0x84) = uVar2;
  *(short *)(param_1 + 0x86) = (short)(0x10e / param_2);
  *(undefined2 *)(param_1 + 0x62) = uVar2;
  *(undefined2 *)(param_1 + 100) = uVar2;
  *(undefined2 *)(param_1 + 0x66) = uVar3;
  *(short *)(param_1 + 0x68) = (short)(0x1e / param_2);
  _DAT_800e802a = (short)(0xf0 / param_2);
  return;
}

