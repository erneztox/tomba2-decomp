/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80018CA8 at 0x80018CA8
 */
// GPU_Setup10



int GPU_Setup10(uint param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = &DAT_800256f0 + param_1;
  iVar4 = *piVar3;
  if ((param_2 != iVar4) && (DAT_800256ec != 0)) {
    uVar1 = *DAT_8002677c;
    *DAT_8002677c = 0;
    if (param_2 != 0) {
      *piVar3 = param_2;
      DAT_8002571c = DAT_8002571c | (ushort)(1 << (param_1 & 0x1f));
      iVar4 = GPU_Setup10();
      return iVar4;
    }
    uVar2 = ~(ushort)(1 << (param_1 & 0x1f));
    *piVar3 = 0;
    DAT_8002571c = DAT_8002571c & uVar2;
    if (param_1 == 0) {
      GPU_Setup10(1);
      GPU_Setup10(3,1);
    }
    if (param_1 == 4) {
      GPU_Setup10(0,1);
    }
    if (param_1 == 5) {
      GPU_Setup10(1,1);
    }
    if (param_1 == 6) {
      GPU_Setup10(2,1);
    }
    *DAT_8002677c = uVar1 & uVar2;
  }
  return iVar4;
}
