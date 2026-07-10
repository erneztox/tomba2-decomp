/**
 * @brief Animation script step: state machine processing entity[0x78] animation events
 * @note Original: func_80041468 at 0x80041468
 */
// Entity_AnimScriptStep



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80041468(int param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = _DAT_1f800214;
  if (((int)*(short *)(param_1 + 0x72) & 0x8000U) == 0) {
    iVar6 = param_1;
  }
  if (*(char *)(param_1 + 0x78) != '\0') {
    if (*(char *)(param_1 + 0x78) != '\x01') {
      return 0;
    }
    uVar4 = FUN_80041438(iVar6,(int)*(short *)(param_1 + 0x76),(int)*(short *)(param_1 + 0x74));
    return uVar4;
  }
  uVar3 = *(ushort *)(param_1 + 0x72) & 0x7fff;
  if (uVar3 == 2) {
    sVar2 = FUN_80085690((int)*(short *)(iVar6 + 0x36) - (int)_DAT_1f800164,
                         (int)_DAT_1f800160 - (int)*(short *)(iVar6 + 0x2e));
    uVar3 = sVar2 - 0x800;
  }
  else {
    if (uVar3 < 3) {
      if (uVar3 != 1) goto LAB_800415ac;
      sVar2 = *(short *)(iVar6 + 0x2e);
      iVar5 = (int)*(short *)(iVar6 + 0x36) - (int)_DAT_1f800164;
      sVar1 = _DAT_1f800160;
    }
    else {
      if (uVar3 != 3) {
        if (uVar3 == 10) {
          uVar3 = FUN_80085690((int)*(short *)(iVar6 + 0x36) - (int)*(short *)(param_1 + 0x76),
                               (int)*(short *)(param_1 + 0x74) - (int)*(short *)(iVar6 + 0x2e));
          *(ushort *)(param_1 + 0x76) = uVar3 & 0xfff;
          *(undefined2 *)(param_1 + 0x74) = 0x100;
        }
        goto LAB_800415ac;
      }
      sVar1 = *(short *)(param_1 + 0x2e);
      sVar2 = *(short *)(iVar6 + 0x2e);
      iVar5 = (int)*(short *)(iVar6 + 0x36) - (int)*(short *)(param_1 + 0x36);
    }
    uVar3 = FUN_80085690(iVar5,(int)sVar1 - (int)sVar2);
  }
  *(ushort *)(param_1 + 0x76) = *(short *)(param_1 + 0x76) + (uVar3 & 0xfff);
LAB_800415ac:
  if (((int)((int)*(short *)(param_1 + 0x76) - (int)*(short *)(iVar6 + 0x56) & 0xfffU) <
       (int)*(short *)(param_1 + 0x74)) || (*(short *)(param_1 + 0x74) < 1)) {
    *(undefined2 *)(iVar6 + 0x56) = *(undefined2 *)(param_1 + 0x76);
    uVar4 = 1;
  }
  else {
    *(undefined2 *)(iVar6 + 0x58) = 0;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    uVar4 = 0;
  }
  return uVar4;
}
