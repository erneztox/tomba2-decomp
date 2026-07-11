/**
 * @brief Calculates aim position: GTE cos/sin on entity[0x56], offset from entity[0x2E/0x32/0x36]
 * @note Original: func_80024AF0 at 0x80024AF0
 */
// Entity_CalcAimPos



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80024af0(int param_1)

{
  ushort uVar1;
  int iVar2;
  short sVar3;
  
  if (*(char *)(param_1 + 0x147) == '\0') {
    uVar1 = *(ushort *)(param_1 + 0x140);
  }
  else {
    uVar1 = *(short *)(param_1 + 0x140) - 0x800U & 0xfff;
  }
  *(ushort *)(param_1 + 0x56) = uVar1;
  if (*(short *)(param_1 + 0x17e) < 0) {
    _DAT_1f800088 = 0x14;
    sVar3 = *(short *)(param_1 + 0x66) + -10;
  }
  else {
    _DAT_1f800088 = 0x28;
    sVar3 = *(short *)(param_1 + 0x66) + -0x1e;
  }
  iVar2 = FUN_80083f50((int)*(short *)(param_1 + 0x56));
  *(short *)(param_1 + 0x14c) = *(short *)(param_1 + 0x2e) + (short)(iVar2 * sVar3 >> 0xc);
  iVar2 = FUN_80083e80((int)*(short *)(param_1 + 0x56));
  *(short *)(param_1 + 0x14e) = *(short *)(param_1 + 0x32) - *(short *)(param_1 + 0x68);
  *(short *)(param_1 + 0x150) = *(short *)(param_1 + 0x36) - (short)(iVar2 * sVar3 >> 0xc);
  return;
}
