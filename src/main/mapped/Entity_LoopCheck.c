/**
 * @brief Entity loop checker: iterates entity[0x1F] times, returns status
 * @note Original: func_800365F0 at 0x800365F0
 */
// Entity_LoopCheck



undefined4 FUN_800365f0(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  if ((int)(uint)*(byte *)(param_1 + 0x1f) < (int)(*(byte *)(param_1 + 0x22) - 1)) {
    iVar3 = FUN_800368d0(param_1,*(byte *)(param_1 + 0x1f) + 1,*(undefined1 *)(param_1 + 0x1d));
    if (iVar3 < 0) {
      iVar3 = FUN_800368d0(param_1,*(byte *)(param_1 + 0x1f) + 2,*(undefined1 *)(param_1 + 0x1d));
      iVar4 = 0;
      if (iVar3 < 0) {
        return 0;
      }
      do {
        bVar1 = *(char *)(param_1 + 0x1f) + 1;
        *(byte *)(param_1 + 0x1f) = bVar1;
        if (param_2 == 0) {
          if (*(byte *)(param_1 + 0x1e) + 6 <= (uint)bVar1) {
            *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) + 1;
          }
        }
        else {
          *(char *)(param_1 + 0x1e) = *(char *)(param_1 + 0x1e) + '\x01';
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    else {
      bVar1 = *(char *)(param_1 + 0x1f) + 1;
      *(byte *)(param_1 + 0x1f) = bVar1;
      if (param_2 == 0) {
        if (*(byte *)(param_1 + 0x1e) + 6 <= (uint)bVar1) {
          *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) + 1;
        }
      }
      else {
        *(char *)(param_1 + 0x1e) = *(char *)(param_1 + 0x1e) + '\x01';
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}
