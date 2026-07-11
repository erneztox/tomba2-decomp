// FUN_0802091c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802091c(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  
  if (*(byte *)(param_1 + 6) < 9) {
                    /* WARNING: Could not emulate address calculation at 0x08020958 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6684))();
    return;
  }
  if (*(byte *)(param_1 + 6) < 4) {
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x42);
  if (uVar1 - 0x37a < 0xd3) {
    if (((short)uVar1 < 0x3b7) || ((short)uVar1 < 0x3e9)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x000521f4(0,0,0xa0,6);
  }
  if (*(ushort *)(param_1 + 0x42) - 900 < 0x65) {
    _DAT_800e8042 = *(short *)(param_1 + 0x4e);
    _DAT_800e8046 = *(short *)(param_1 + 0x50);
    _DAT_800e804a = *(short *)(param_1 + 0x52);
    sVar3 = *(short *)(param_1 + 0x42);
    if (sVar3 == 1000) goto LAB_08020e0c;
    uVar5 = 0x7f;
    if (sVar3 < 0x3a3) {
      uVar5 = 0x3f;
    }
    uVar2 = func_0x0009a450();
    uVar1 = (ushort)uVar5;
    sVar3 = (short)(uVar5 >> 1);
    _DAT_800e8042 = _DAT_800e8042 + (sVar3 - (uVar1 & uVar2));
    uVar2 = func_0x0009a450();
    _DAT_800e8046 = _DAT_800e8046 + (sVar3 - (uVar1 & uVar2));
    uVar2 = func_0x0009a450();
    _DAT_800e804a = _DAT_800e804a + (sVar3 - (uVar1 & uVar2));
  }
  sVar3 = *(short *)(param_1 + 0x42);
LAB_08020e0c:
  if ((sVar3 == 0x366) || (sVar3 == 0x36b)) {
    func_0x000521f4(0,1,0x80,5);
    iVar4 = 0;
    do {
      func_0x00130aa0(0,0x608);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
  }
  if (*(short *)(param_1 + 0x42) < 3000) {
    *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
  }
  return;
}

