/**
 * @brief Audio system command: sets _DAT_801054b0/b2, dispatches
 * @note Original: func_80091B50 at 0x80091B50
 */
// Audio_SystemCmd



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80091b50(int param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = 0;
  _DAT_801054b0 = param_2;
  _DAT_801054b2 = param_3;
  if (0 < param_2) {
    piVar5 = (int *)&DAT_80104c30;
    iVar2 = 0;
    do {
      *piVar5 = param_1 + iVar2 * 0xb0;
      piVar5 = piVar5 + 1;
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + param_3;
    } while (iVar6 < param_2);
  }
  for (uVar7 = (uint)param_2; (int)uVar7 < 0x20; uVar7 = uVar7 + 1) {
    _DAT_80104c28 = _DAT_80104c28 | 1 << (uVar7 & 0x1f);
  }
  iVar6 = 0;
  if (0 < _DAT_801054b0) {
    piVar5 = (int *)&DAT_80104c30;
    do {
      iVar2 = 0;
      if (0 < _DAT_801054b2) {
        iVar4 = 0;
        do {
          *(undefined4 *)(iVar4 + *piVar5 + 0x98) = 0;
          *(undefined1 *)(iVar4 + *piVar5 + 0x22) = 0xff;
          *(undefined1 *)(iVar4 + *piVar5 + 0x23) = 0;
          *(undefined2 *)(iVar4 + *piVar5 + 0x48) = 0;
          *(undefined2 *)(iVar4 + *piVar5 + 0x4a) = 0;
          *(undefined4 *)(iVar4 + *piVar5 + 0x9c) = 0;
          *(undefined4 *)(iVar4 + *piVar5 + 0xa0) = 0;
          *(undefined2 *)(iVar4 + *piVar5 + 0x4c) = 0;
          *(undefined4 *)(iVar4 + *piVar5 + 0xac) = 0;
          *(undefined4 *)(iVar4 + *piVar5 + 0xa8) = 0;
          *(undefined4 *)(iVar4 + *piVar5 + 0xa4) = 0;
          *(undefined2 *)(iVar4 + *piVar5 + 0x4e) = 0;
          *(undefined2 *)(iVar4 + *piVar5 + 0x58) = 0x7f;
          *(undefined2 *)(iVar4 + *piVar5 + 0x5a) = 0x7f;
          iVar2 = iVar2 + 1;
          *(undefined2 *)(iVar4 + *piVar5 + 0x5c) = 0x7f;
          iVar1 = (int)_DAT_801054b2;
          iVar3 = iVar4 + *piVar5;
          iVar4 = iVar4 + 0xb0;
          *(undefined2 *)(iVar3 + 0x5e) = 0x7f;
        } while (iVar2 < iVar1);
      }
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < _DAT_801054b0);
  }
  return;
}
