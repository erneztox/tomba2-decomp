/**
 * @brief Audio system lock: sets _DAT_80104c24=1, processes queue
 * @note Original: func_80090BD0 at 0x80090BD0
 */
// Audio_SystemLock



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80090bd0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  if (_DAT_80104c24 != 1) {
    _DAT_80104c24 = 1;
    uVar6 = 0;
    FUN_800931c0();
    if (0 < _DAT_801054b0) {
      piVar7 = (int *)&g_AudioChannels;
      do {
        if (((_DAT_80104c28 & 1 << (uVar6 & 0x1f)) != 0) && (iVar5 = 0, 0 < _DAT_801054b2)) {
          iVar4 = (int)(s16)uVar6;
          iVar3 = 0;
          iVar1 = 0;
          do {
            iVar2 = iVar3 >> 0x10;
            if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 1) != 0) {
              FUN_800910f0(iVar4,iVar2);
              if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 0x10) != 0) {
                FUN_80090e40(iVar4,iVar2);
              }
              if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 0x20) != 0) {
                FUN_80090e40(iVar4,iVar2);
              }
              if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 0x40) != 0) {
                FUN_80092080(iVar4,iVar2);
              }
              if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 0x80) != 0) {
                FUN_80092080(iVar4,iVar2);
              }
            }
            if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 2) != 0) {
              FUN_80091050(iVar4,iVar2);
            }
            if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 8) != 0) {
              FUN_80091910(iVar4,iVar2);
            }
            if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 4) != 0) {
              FUN_80091970(iVar4,iVar2);
              *(s32 *)(iVar1 + *piVar7 + 0x98) = 0;
            }
            iVar3 = iVar3 + 0x10000;
            iVar5 = iVar5 + 1;
            iVar1 = iVar1 + 0xb0;
          } while (iVar5 < _DAT_801054b2);
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 1;
      } while ((int)uVar6 < (int)_DAT_801054b0);
    }
    _DAT_80104c24 = 0;
  }
  return;
}
