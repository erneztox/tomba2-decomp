
/* WARNING: Removing unreachable block (ram,0x80019454) */

undefined4 FUN_80019aa8(byte param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint in_t0;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = DAT_800268d0;
  iVar4 = 3;
  do {
    DAT_800268d0 = 0;
    if ((param_1 != 1) && (((byte)DAT_800268dc & 0x10) != 0)) {
      FUN_8001a0c0(1,0,0,0);
    }
    if (((param_2 == 0) || (*(int *)(&DAT_80026848 + (uint)param_1 * 4) == 0)) ||
       (iVar1 = FUN_8001a0c0(2,param_2,param_3,0), iVar1 == 0)) {
      DAT_800268d0 = uVar5;
      iVar1 = FUN_8001a0c0(param_1,param_2,param_3,0);
      iVar2 = 0;
      if (iVar1 == 0) break;
    }
    iVar4 = iVar4 + -1;
    iVar2 = -1;
    DAT_800268d0 = uVar5;
  } while (iVar4 != -1);
  uVar3 = 0;
  if (iVar2 == 0) {
    uVar5 = 0x80019bb4;
    uVar6 = FUN_80019b78(0,param_3);
    iRam8002680c = ((uint)((int)uVar6 == 2) - (int)((ulonglong)uVar6 >> 0x20)) - uVar3;
    uRam80026808 = uVar3 | in_t0;
    uRam80038458 = uVar5;
    func_0x80018cec(uRam80026808 + 4);
    uVar5 = func_0x800111b4();
    trap(1);
    if (DAT_80026804 == 0) {
      DAT_80026804 = 1;
    }
    return uVar5;
  }
  return 0;
}

