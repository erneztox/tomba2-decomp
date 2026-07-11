// FUN_08042760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08042760(int param_1)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort uVar4;
  
  if (*(short *)(param_1 + 0x42) != 0) {
    *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
  }
  if (*(byte *)(param_1 + 0x78) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x080427b8 */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)((uint)*(byte *)(param_1 + 0x78) * 4 + -0x7fef5c58))();
    return uVar3;
  }
  if (*(ushort *)(param_1 + 0x42) - 200 < 0x6f) {
    func_0x000521f4(0,0,0x81,2);
    if (((*(ushort *)(param_1 + 0x42) & 7) == 0) && ((short)*(ushort *)(param_1 + 0x42) < 0x128)) {
      func_0x00074590(0x2f,0xfffffff6,0);
    }
    uVar4 = 3;
    if (*(short *)(param_1 + 0x42) < 0x100) {
      uVar4 = 7;
    }
    if (uVar4 != 0) {
      uVar2 = func_0x0009a450();
      sVar1 = (short)uVar4 >> 1;
      _DAT_800e8042 = *(short *)(param_1 + 0x4e) + (sVar1 - (uVar4 & uVar2));
      uVar2 = func_0x0009a450();
      _DAT_800e8046 = *(short *)(param_1 + 0x50) + (sVar1 - (uVar4 & uVar2));
      uVar2 = func_0x0009a450();
      _DAT_800e804a = *(short *)(param_1 + 0x52) + (sVar1 - (uVar4 & uVar2));
    }
  }
  return 0;
}

